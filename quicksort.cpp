#include <iostream>
using namespace std;
int partition(int a[], int l, int r) {
	int p = a[l];
	int i = l - 1, j = r + 1;
	while (1) {
		do {
			++i;
		} while (a[j] < p);
		if (i < j) {
			swap(a[i], a[j]);
		}
		else return j;
	}
}
void quick_sort(int a[], int l, int r) {
	if (l >= r)return;
	int t = partition(a, l, r);
	quick_sort(a, l, t);
	quick_sort(a, t + 1, r);
}
int main() {
	int A[100] = { 3,10,1,23,103,34,17,53,64,71 }, n;
	cin >> n;
	quick_sort(A, 0, n - 1);
	for (int i = 0; i < n; i++)
		cout << A[i] << " ";
	return 0;
}