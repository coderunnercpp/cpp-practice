#include<iostream>
using namespace std;

void printArray(int arr[], int size){
   for(int i =0; i<size; i++){
    cout<<arr[i]<<" ";
   }cout<<endl;
}

void swap_alternate(int arr[],int size){

    for(int i =0; i<size; i = i+2){
        if(arr[i+1]<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main()
{
    int even[8]= {5,8,3,1,4,7,9,2};
    int odd[7]={1,4,2,6,9,0,5};
    swap_alternate(even,8);
    printArray(even,8);
}

