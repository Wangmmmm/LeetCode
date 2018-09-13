class Solution {
public:
	int myAtoi(string str) {
		int result = 0;
		int beginIndex = 0;
		bool minus = false;
		for (int i = 0; i < str.size(); i++)
		{
			char currentC = str[i];
			if (currentC == ' ')
			{
				beginIndex++;
				continue;
			}
			if (currentC == '-')
			{
				beginIndex++;
				minus = true;
				break;
			}
			if (currentC == '+')
			{
				beginIndex++;

				break;
			}
			if (isNum(currentC))
			{
				break;
			}
			else
			{
				return 0;
			}
		}
		for (int i = beginIndex; i < str.size(); i++)
		{
			char currentC = str[i];
			if (!isNum(currentC))
			{
				break;
			}
			int num = currentC - '0';
			if ( !minus&&(result > (INT32_MAX / 10)||(result == (INT32_MAX / 10)&& num >= (INT32_MAX % 10)) ))
			{
				return INT32_MAX;
			}
			else if (minus && (result >(INT32_MIN / -10)||(result == (INT32_MIN / -10)&& num >= 8)))
			{
				return INT32_MIN;
			}

			result = result * 10 + num;

		}
		if (minus)
		{
			result *= -1;
		}
		return result;

	}

	bool isNum(char c)
	{
		if (c >= '0'&&c <= '9')
			return true;
		return false;
	}
};