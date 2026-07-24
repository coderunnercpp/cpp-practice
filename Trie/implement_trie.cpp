#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;

    TrieNode(char ch)
    {
        data = ch;
        isTerminal = false;
        for (int i = 0; i < 26; i++)
        {
            children[i] = nullptr;
        }
    }
};

class Trie
{
public:
    TrieNode *root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertWordUtil(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }
        TrieNode *child;
        int index = word[0] - 'A';
        if (root->children[index] != nullptr)
        {
            // Preset
            child = root->children[index];
        }
        else
        {
            // Absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        // Recursion
        insertWordUtil(child, word.substr(1));
    }
    void insertWord(string word)
    {
        insertWordUtil(root, word);
    }

    bool searchWordUtil(TrieNode *root, string word)
    {

        // base case
        if (word.length() == 0)
        {
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode *child;
        if (root->children[index] != nullptr)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }

        return searchWordUtil(child, word.substr(1));
    }

    bool searchWord(string word)
    {
        return searchWordUtil(root, word);
    }
};

int main()
{

    Trie *t = new Trie;
    t->insertWord("ABCD");
   cout<< t->searchWord("ABCD")<< endl;

    return 0;
}