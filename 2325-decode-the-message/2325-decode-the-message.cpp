class Solution {
public:
    string decodeMessage(string key, string message) 
    {
		// An unordered map to map the original with the cipher key.
        unordered_map<char, char> mp;
        int count = 0;
        for (int i = 0; i < key.size(); i++)
        {
            if (islower(key[i]))
            {
				// If key is already mapped, ignore.
				// else map the key with corresponding values.
                if (!mp.count(key[i]))
                {
                    mp[key[i]] = 'a' + count++;
                }
            }
        }
        string output = "";
        for (int i = 0; i < message.size(); i++)
        {
			// if it is a lowercased character get it decoded by cipher key, else if it is a white space, put a white space.
            if (islower(message[i]))
                output += mp[message[i]];
            else if (message[i] == ' ')
                output += message[i];
        }
		// Return the output string.        
        return output;
    }
};