#include <bits/stdc++.h>
using namespace std;

int rotated_search(vector<int> arr, int key)
{
    int n = arr.size();
    //logic
    int s = 0;
    int e = n - 1;
    int mid;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        //  Two cases
        if (arr[s] <=arr[mid])
        {
            //left
            if (key >= arr[s] and key <= arr[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else
        {
            //right
            if (key <= arr[e] and key >= arr[mid])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a{4, 5, 6, 7, 0, 1, 2, 3};
    int key;
    cin >> key;
    cout<< rotated_search(a,key)<<endl;

    return 0;
}