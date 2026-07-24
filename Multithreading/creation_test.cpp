#include <iostream>
#include <thread>
#include <list>

using namespace std;

const int MAX_SIZE = 50000000;

list<int> g_Data;

void Download()
{
    cout << "Download started by DOWNLOADER" << endl;

    for (int i = 0; i < MAX_SIZE; i++)
    {
        g_Data.push_back(i);
    }

    cout << "Download finished by the Downloader" << endl;
}

int main()
{
    cout << "Main thread started the operation" << endl;

    thread th(Download);

    cout << "Main thread stopped the operation" << endl;

    if (th.joinable())
    {
        th.join();
    }

    return 0;
}