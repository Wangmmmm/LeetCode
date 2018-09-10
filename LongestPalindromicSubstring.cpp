class Solution {
public:
	string longestPalindrome(string s) {
		int iterLength = s.size() * 2 - 1;
		string result;
		int maxLength = 0;
		for (int i = 0; i < iterLength; i++)
		{
			string currentString;
			int currentMaxLength = 0;
			if (i % 2 == 0)
			{
				currentString.push_back(s[i / 2]);
				currentMaxLength = 1;
			}
			
			int rightBeginI = (i + 2 ) / 2 ;
			int leftBeginI = rightBeginI - 2 + i % 2;
			for (int j = 0; ((leftBeginI - j) >= 0) && (rightBeginI + j) < s.size(); j++)
			{
				if (s[leftBeginI - j] == s[rightBeginI + j])
				{
					currentString.push_back(s[rightBeginI + j]);
					currentString.insert(currentString.begin(), s[leftBeginI - j]);
					currentMaxLength+=2;
				}
				else break;
			}
			if (currentMaxLength > maxLength)
			{
				result = currentString;
				maxLength = currentMaxLength;
			}
		}
		return result;
	}
};