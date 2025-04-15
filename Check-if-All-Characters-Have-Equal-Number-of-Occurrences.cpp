class Solution {
public:
bool areOccurrencesEqual(string s) {
    map<char, int> occurenc;

    for (char c: s) {
        if (occurenc.find(c) == occurenc.end()) {
            occurenc.insert({c, 1});
        } else {
            occurenc.at(c) += 1;
        }
    };

    int num = NULL;

    for (auto occurenc: occurenc) {
        if (num == NULL) {
            num = occurenc.second;
        } else {
            if (occurenc.second != num) {
                return false;
            }
        }

        num = occurenc.second;
    }
    return true;
}
};