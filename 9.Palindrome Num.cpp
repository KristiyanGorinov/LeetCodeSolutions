class Solution {
public:
    bool isPalindrome(int x) {
        int Dupe = x;
        long int rev = 0;
        while (Dupe>0)
        {
            rev = (rev * 10) + Dupe % 10;
            Dupe = Dupe/10;
        }

        if(rev == x){
            return true;
        }
        else{
            return false;
        }
    }
};
