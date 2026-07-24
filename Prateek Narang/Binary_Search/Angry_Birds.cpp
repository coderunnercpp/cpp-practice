#include <bits/stdc++.h>
using namespace std;
bool can_placebirds(int B, int N, vector<int> nests, int sep)
{
    int birds = 1;
    int location = nests[0];
    for (int i = 1; i < N; i++)
    {
        int current_location = nests[i];
        if (current_location - location >= sep)
        {
            birds++;
            location = current_location;
            if (birds == B)
            {
                return true;
            }
        }
    }
    return false;
}
int main() 
{
    int B = 3;
    vector<int> nests{1, 2, 4, 8, 9,12};
    //sorting
    sort(nests.begin(), nests.end());
    int N = nests.size();
    //Binary Search
    int s = 0;
    int mid;
    int ans = -1;
    int e = nests[N - 1] - nests[0];
    while (s <= e)
    {
        mid = (s + e) / 2;
        bool canplace = can_placebirds(B, N, nests, mid);
        if (canplace)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}