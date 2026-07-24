#include <bits/stdc++.h>
using namespace std;

int longestchain(vector<int> arr)
{
    int n = arr.size();
    unordered_set<int> s;
    //Data inside a set
    for (auto x : arr)
    {
        s.insert(x);
    }
    //Iterate over array
    int largest=0;
    for (auto element : s)
    {
        int parent = element - 1;
        if (s.find(parent) == s.end())
        {
            //find entire chain starting from element
            int nextnumber = element + 1;
            int count = 1;
            while (s.find(nextnumber) != s.end())
            {
                count++;
                nextnumber++;
            }
            if(count>largest){
               largest = count;
            }
        }
    }
    return largest;
}

int main()
{
    vector<int> arr{1, 9, 3, 0, 18, 5, 2,  10, 7, 12, 6};
    cout << longestchain(arr);
    return 0;
}