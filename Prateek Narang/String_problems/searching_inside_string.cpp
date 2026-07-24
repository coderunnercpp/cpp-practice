#include <bits/stdc++.h>
using namespace std;
int main()
{
    string paragraph = "We are learning about STL strings.STL strings class is quite powerful.strings are very important";
    string word;
    getline(cin, word);

    //Find function
    //cout<<paragraph.find(word) <<endl;
    int index = paragraph.find(word);
    if (index != -1)
    {
        cout << "First occurance is " << index << endl;
    }
    if (index == -1)
    {
        cout << "Word not found" << endl;
    }
    while (index != -1)
    {
        index = paragraph.find(word, index + 1);
        if (index != -1)
        {
            cout << "Second occurance is S " << index << endl;
        }
    }
   
    return 0;
}