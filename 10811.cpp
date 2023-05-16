// 백준 10811번
// 공 역순 놓기

#include <iostream>
using namespace std;

int main(void) {
	int n, m; // 공, 바구니 개수, 최대 횟수
	int i, j; // i switch to j
	int arr[101] = { 0 };
	int arr2[101] = { 0 };

	cin >> n >> m;

	for (int t = 0; t < 101; t++) arr[t] = t;

	for (int p = 1; p <= m; p++) {
		cin >> i >> j;
		if (i != j) {
			int tmp = i;
			for (int h = j; h >= i; h--)
			{
				arr2[tmp++] = arr[h];
			}

			for (int k = i; k <= j; k++) {
				arr[k] = arr2[k];
			}

		}

		else continue;
	}

	for (int q = 1; q <= n; q++) cout << arr[q] << " ";

	return 0;
}