#include "../nub.h"

class TrieNode
{
public:
    // Initialize your data structure here.
    bool isLeaf;
    TrieNode *next[26];
    
    // Constructor
    TrieNode()
    {
        isLeaf = 0;
        for (int i = 0; i < 26; i++)
            next[i] = NULL;
    }
};

class Trie
{
public:
    Trie()
    {
        root = new TrieNode();
    }

    // Inserts a word into the trie.
    void insert(string word)
    {
        TrieNode *cur = root;

        for (char c : word)
        {
            if (cur->next[c - 'a'] == NULL)
                cur->next[c - 'a'] = new TrieNode();
            cur = cur->next[c - 'a'];
        }

        cur->isLeaf = 1;
    }

    // Returns if the word is in the trie.
    bool search(string word)
    {

        TrieNode *cur = root;
        for (char c : word)
        {
            cur = cur->next[c - 'a'];
            if (cur == NULL)
                return 0;
        }
        return cur->isLeaf;
    }

    // Returns if there is any word in the trie
    // that starts with the given prefix.
    bool startsWith(string prefix)
    {
        TrieNode *cur = root;
        for (char c : prefix)
        {
            cur = cur->next[c - 'a'];
            if (cur == NULL)
                return 0;
        }
        return 1;
    }

private:
    TrieNode *root;
};

// Your Trie object will be instantiated and called as such:
// Trie trie;
// trie.insert("somestring");
// trie.search("key");