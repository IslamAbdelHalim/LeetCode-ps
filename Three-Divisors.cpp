class Solution {
public:
    bool isThree(int n) {
    int d=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            d=d+1;

        }
    }
    if(d==3){
        return true;
        }
    else{
        return false;
    }
    }
};