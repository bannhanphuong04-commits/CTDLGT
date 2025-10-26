#include <iostream>
using namespace std;
void selection_sort(int A[], int n) {
    for (int i = 0; i < n; i++) {
       int min = i;
       for (int j = i + 1; j < n; j++) {
           if (A[j] < A[min])
               min = j;
       }
       if (min != i) {
           int t = A[i];
           A[i] = A[min];
           A[min] = t;
       }
    }
    return 0;
 }
int main() {
    int A[100] = { 3,10,5,6,8,9,1,2,6 }, n;
    cin >> n;
     selection_sort(A, n);
     for (int i = 0; i < n; i++)
         cout << A[i] << " ";
    return 0;
}
