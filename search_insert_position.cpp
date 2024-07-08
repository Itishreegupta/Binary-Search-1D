#include <bits/stdc++.h>
using namespace std;

int searchInsert(int arr[], int x, int n) {
    // int n = arr.size();
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1; 
        }
    }
    return ans;
}
int main()
{
    int arr[] = {1, 2, 4, 7};
    int x = 6;
    int n = 4; //size of the array
    int ind = searchInsert(arr, x , n);
    cout << "The index is: " << ind << "\n";
    return 0;
}