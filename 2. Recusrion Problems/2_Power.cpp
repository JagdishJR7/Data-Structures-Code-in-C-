// Question 2^n ??? 

#include <iostream>
using namespace std;

int Power(int n){
    //Base condition 
    if (n == 0){
        return 1;
    }
    
    // Recursive Condition 
    // int SmallProb = Power(n-1);
    // int BigProb = 2 * SmallProb;

    // return BigProb;

    return 2 * Power(n-1);

}

int main (){
    int n;
    cin>>n;

    int ans = Power(n);
    cout<<ans<<endl;

    return 0;
}