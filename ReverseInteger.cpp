class Solution {
public:
	int reverse(int x) {
		if (x == 0)
			return 0;
	
		if (x<INT32_MIN
			|| x>INT32_MAX)
			return 0;
		bool minus = false;
		if (x < 0)
		{
			minus = true;
			x = x * -1;
		}
	
		long long result = 0;
		while (x > 0)
		{
			int temp = x % 10;
			x = x - temp;
			x /= 10;
			result = result*10 + temp;
		
		}
		if (result > INT32_MAX)return 0;
		int signResult = result;
		if (minus)
		{
			signResult = signResult * -1;
		}
		return signResult;
	}
}; 