#include <bits/stdc++.h>
using namespace std;

float square_root(int N, int p)
{
    int s = 0;
    int e = N;
    float ans = 0;
    int mid;
    //Binary search(search space 0....N)

    while (s <= e)
    {
        mid = (s + e) / 2;
        if (mid * mid == N)
        {
            return mid;
        }
        else if (mid * mid < N)
        {
            ans = mid;
            s = mid + 1;
        }
        else 
        {
            e = mid - 1;
        }
    }
    //Linear Search for each place (for floating part)
    float inc = 0.1;
    for(int place =1;place<=p;place++){
        //Do linear search
        while(ans*ans<=N){
            ans+=inc;
        }
        ans = ans -inc;
        inc = inc/10;
    }

    return ans;
}
int main()
{
    int n, p;
    cin >> n >> p;
    cout << square_root(n, p) << endl;
    return 0;
}