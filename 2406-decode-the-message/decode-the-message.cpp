class Solution {
public:
    string decodeMessage(string key, string message) {
        // Step 1: Create mapping
        unordered_map<char, char> mapping;

        char space = ' ';
        mapping[space] = space;

        char start = 'a';
        int index = 0;

        while (start <= 'z' && index < key.length()) {
            char keyKaCurrentCharacter = key[index];

            if (mapping.find(keyKaCurrentCharacter) != mapping.end()) {
                index++;
            }
            else {
                mapping[keyKaCurrentCharacter] = start;
                start++;
                index++;
            }
        }

        // Step 2: Decode message
        string ans = "";

        for (int i = 0; i < message.length(); i++) {
            char msgCharacter = message[i];
            char mappedCharacter = mapping[msgCharacter];
            ans += mappedCharacter;
        }

        return ans;
    }
};