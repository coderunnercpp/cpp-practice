 #include<bits/stdc++.h>
 using namespace std;
 int rainwater(vector<int> heights){
     //complete
     int n = heights.size();
     if(n<=2){
         return 0;
     }
     int maxL[n];
     int maxR[n];
     maxL[0]=heights[0];
     maxR[n-1]=heights[n-1];
     //left MAX
     for(int i=1;i<n;i++){
         maxL[i]= max(heights[i],maxL[i-1]); 
     }
     //Right Max
     for(int i=n-2;i>=0;i--){
         maxR[i]= max(heights[i],maxR[i+1]);
     }
     //Water level at each building
     int water[n];
     for(int i=0;i<n;i++){
         water[i]=min(maxL[i],maxR[i])- heights[i];
     }
     //final output
     int result =0;
     for (int i=0;i<n;i++){
         result = result+water[i];
     }
     return result;
 }
 int main(){

    vector<int> water={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<rainwater(water)<<endl;
    return 0;
 }