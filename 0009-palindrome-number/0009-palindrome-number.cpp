class Solution {
public:
    bool isPalindrome(int x) {
          if (x < 0 )//|| (x % 10 == 0 && x != 0)) {
            return false;
       long r=0;
       int o=x;
        while(x>0)
        {
            int m=x%10;
          r=r*10+m;
            x=x/10;
        }

        if(r==o)
        return 1;
      
        return 0;
        
        
    }
};