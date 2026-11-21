#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> P(n);

    for (int i = 0; i < n; i++)
    {
        cin >> P[i];
    }


    vector<vector<int>> m(n, vector<int>(n, 0));
    vector<vector<int>> s(n, vector<int>(n, 0));

    int j, min, q;

    // d = chain length - 1
    for (int d = 1; d < n - 1; d++)
    {
        for (int i = 1; i < n - d; i++)
        {
            j = i + d;
            min = INT_MAX;

            for (int k = i; k <= j - 1; k++)
            {
                q = m[i][k] +
                    m[k + 1][j] +
                    P[i - 1] * P[k] * P[j];

                if (q < min)
                {
                    min = q;
                    s[i][j] = k;
                }
            }

            m[i][j] = min;
        }
    }

    cout << "Minimum number of multiplications = "
         << m[1][n - 1];

    return 0;
}