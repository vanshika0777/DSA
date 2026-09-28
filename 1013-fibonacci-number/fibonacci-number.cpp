class Solution {
public:

    

    int fib(int n) {
        int a=0;
        int b=1;
        int fn=0;
        if(n==1){
            return 1;
            }
            if(n==0){
                return 0;
            }
            for(int i=0; i<n-1; i++){
            fn=a+b;
            a=b;
            b=fn;
        }
        return fn;
    }
};