class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        long revnum = 0; 
        while( n != 0){
            revnum = revnum * 10 + n %10;
            n /=10;
        }
        
        if( revnum > INT_MAX || revnum < INT_MIN){
            return 0;
        }
        
        return int(revnum);
        
    }
};