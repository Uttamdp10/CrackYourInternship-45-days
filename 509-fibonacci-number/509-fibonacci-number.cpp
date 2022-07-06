class Solution {
public:
    int fib(int n) 
    {
       if(n <= 1)
               return n;
            
            else 
                    return  fib(n-2) + fib(n-1);
    }
};