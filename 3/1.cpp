class Solution {
public:
	int lengthOfLongestSubstring(string s) {
        if (s.empty())
            return 0;
		map<char, int> m;
		m.insert({s[0],0});
		int p = 0;
		int maxlen = 1;
		for (int i = 1; i < s.size(); i++){
			if (m.count(s[i]))
				p = max(p, m[s[i]] + 1);
			maxlen = max(maxlen, i - p + 1);
			m[s[i]] = i;
		}
		return maxlen;
	}
};