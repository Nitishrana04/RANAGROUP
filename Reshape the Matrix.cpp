#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;

	vector< vector<int> > matrix(m, vector<int>(n));

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}

	int r, c;
	cin >> r >> c;

	if (r * c != m * n) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
	}
	else {
		vector< vector<int> > res(r, vector<int>(c));

		int row = 0, col = 0;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				res[row][col] = matrix[i][j];
				col++;
				if (col == c) {
					row++;
					col = 0;
				}
			}
		}

		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cout << res[i][j] << " ";
			}
			cout << endl;
		}
	}

	return 0;
}
