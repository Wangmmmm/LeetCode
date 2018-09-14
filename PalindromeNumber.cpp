class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
			return false;
		int bit=0;
		deque<int> que;
		while(x>0)
		{
			int temp=x%10;
			x=x/10;
			que.push_back(temp);
		}
		while(que.size()>1)
		{
			int head=que.pop_front();
			int tail=que.pop_back();
			if(head!=tail)return false;
		}
		return true;
    }
};