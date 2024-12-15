#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n; // size of the array
    cin >> target; // target sum
    int arr[n];
    
    // Input array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr + n);
    // Two-pointer approach
    int p1 = 0, p2 = n - 1;
    
    while (p1 < p2) {

        int sum = arr[p1] + arr[p2];
        
        if (sum == target) {
            cout << p1 << " " << p2 << endl;
            p1++;
            p2++;
        } 
        else if (sum > target) {
            p2--; // Decrease p2 to reduce the sum
        }
         else {
            p1++; // Increase p1 to increase the sum
        }
    }
    
    
    return 0;
}
