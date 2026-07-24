#include <bits/stdc++.h>
using namespace std;

int Findelement(int arr[], int n)
{
    int prefixsum[n];
    prefixsum[0] = arr[0];
    for (int i = 1; i < n; i++)
        prefixsum[i] = prefixsum[i - 1] + arr[i];

    int suffixsum[n];
    suffixsum[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
        suffixsum[i] = suffixsum[i + 1] + arr[i];

    for (int i = 1; i < n - 1; i++)
        if (suffixsum[i] == prefixsum[i])
            return arr[i];

    return -1;
}
int main()
{
    int arr[] = {1, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << Findelement(arr, n);
    return 0;
}