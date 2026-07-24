#include <bits/stdc++.h>
using namespace std;
// string space20(string str){
//   int  pos =0;
//     while((pos=str.find(' '))!= -1){
//         str.replace(pos,1,"%20");
//     }
//     return str;
// }
// int main(){
//     string input;//"hello world, how are you";
//     getline(cin,input);

//     string ans = space20(input);
//     cout<<ans<<endl;

//     return 0;
// }
void replace_space(char *str)
{
    //calculate spaces
    int spaces=0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            spaces++;
        }
    }
    int idx = strlen(str) + 2 * spaces;
    str[idx] = '\0';
    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        if (str[i] == ' ')
        {
            str[idx - 1] = '0';
            str[idx - 2] = '2';
            str[idx - 3] = '%';
            idx = idx - 3;
            ;
        }
        else
        {
            str[idx - 1] = str[i];
            idx--;
        }
    }
}
int main()
{
    char input[1000];
    cin.getline(input, 1000);
    replace_space(input);
    cout << input << endl;
    return 0;
}