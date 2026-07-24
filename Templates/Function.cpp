//Example of max Function
#include<iostream> 
using namespace std;

//int getMaxINT(int x, int y){
     // return x>y? x: y;
//}

/*char getMaxChar(char x, char y){
      return x>y? x: y;
}*/
/* INstead of making many function for different data types we will use 
   template */


//TEMPLATE SYNTAX
template <typename T> //Instaed of "typename" we can use "class" also.
T  getMax(T x, T y){
      return x>y? x: y;
}

int main(){
    //int x=18, y=20;
    //cout<<getMaxINT(x,y)<<endl; 

    //syntax of calling template
    int x=18, y=20;
    cout<<getMax<int>(x,y)<<endl;
    
    /*If we have to find greatest of character we will need 
    another function though we are doing same thing as getMax()*/

    //char c1= 'a', c2='x';
    //cout<< static_cast<char>(getMaxChar(c1,c2))<<endl;
    
    //syntax of calling Template
    char c1='a',c2='z';
    cout<<getMax(c1,c2)<<endl;

    /*What if we many data types then we will need to make function
    for all data types, Now here comes the use of templates*/
}
