#include<iostream>
#include<cstring>
using namespace std;

bool isAnagram(string str1, string str2) {
    if (str1.length() != str2.length()) {
        cout << "Not valid anagrams\n";
        return false;
    }

    // Only lowercase letters assumed (a-z)
    int count[26] = {0};

    // Count characters in str1
    for (int i = 0; i < str1.length(); i++) {
        int idx = str1[i] - 'a';
        count[idx]++;
    }

    // Subtract character counts using str2
    for (int i = 0; i < str2.length(); i++) {
        int idx = str2[i] - 'a';
        count[idx]--;
        if (count[idx] < 0) {
            cout << "Not valid anagrams\n";
            return false;
        }
    }

    // If all counts are zero, they are anagrams
    cout << "Valid anagrams\n";
    return true;
}

int main() {
    string str1 = "anagram";
    string str2 = "nagaram";

    isAnagram(str1, str2);
    return 0;
}
