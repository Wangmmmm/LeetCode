class Solution {
public:
	string convert(string s, int numRows) {

		if (numRows == 1)return s;
		int interval = 2 * numRows - 2;

		string result;
		for (int i = 0; i < numRows; i++)
		{
			int currentIndex = 0;
			bool isMargin = false;
			if (i == 0 || i == numRows - 1)
				isMargin = true;
			int midInterval = interval - 2 * i;
			while (currentIndex+i < s.size())
			{
				if (isMargin)
				{
					
					result.push_back(s[currentIndex + i]);
				}
				else
				{
					result.push_back(s[currentIndex + i]);
					if (currentIndex + i + midInterval >=s.size())
						break;
					result.push_back(s[currentIndex + i + midInterval]);
				}

				currentIndex += interval;
			}
		}
		return result;
	}
}; 