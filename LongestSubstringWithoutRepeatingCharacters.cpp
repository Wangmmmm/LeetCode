class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxVal=0;
		for(int i=0;i<s.length();i++)
		{
			
			string subString{s[i]};
			int length=1;
			for(int j=i+1;j<s.length();j++)
			{
				if(subString.find(s[j])==-1)
				{
					length++;
					subString.push_back(s[j]);
				}
				else
				{
					
					break;
				}
			}
			if(maxVal<length)maxVal=length;
		
		}
		return maxVal;
    }
};