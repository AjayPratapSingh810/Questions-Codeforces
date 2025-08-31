#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    unordered_map<string, string> dictionary;  // Map from either language to the other
    
    // Read the dictionary words
    for (int i = 0; i < m; i++) {
        string word1, word2;
        cin >> word1 >> word2;
        
        // Store both mappings: word1->word2 and word2->word1
        dictionary[word1] = word2;
        dictionary[word2] = word1;
    }
    
    // Read the lecture words
    vector<string> lecture_words(n);
    for (int i = 0; i < n; i++) {
        cin >> lecture_words[i];
    }
    
    // Process each word in the lecture
    string result;
    for (int i = 0; i < n; i++) {
        string current_word = lecture_words[i];
        string translated_word;
        
        // Since each word is guaranteed to be in the dictionary set,
        // we can safely access the translation
        string translation = dictionary[current_word];
        
        // Choose the shorter word (original or translation)
        if (translation.length() < current_word.length()) {
            translated_word = translation;
        } else {
            translated_word = current_word;
        }
        
        result += translated_word;
        
        if (i != n - 1) {
            result += " ";
        }
    }
    
    cout << result << endl;
    
    return 0;
}