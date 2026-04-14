class Solution {
public:

    string encode(vector<string>& strs) {
        string sec;
        for (string s : strs){
            string len = to_string(s.size());
            sec = sec + len + "#" + s;
        }
        return sec;
    }

    vector<string> decode(string s) {
        vector<string> dec;
        int i = 0;
        while (i < s.size()) {
            int pos = s.find('#', i);
            int len = stoi(s.substr(i, pos - i));
            i = pos + 1;
            dec.push_back(s.substr(i, len));
            i += len;
        }
        return dec;
    }
};
