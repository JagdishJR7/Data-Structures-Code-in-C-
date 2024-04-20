#include <iostream>
using namespace std;

int fact(int n){
    //Base condion 
    if (n == 0){
        return 1;
    }

    //Recursive Condition 
    int SmallProb = fact(n-1);
    int BigProblem = n * SmallProb;

    return BigProblem;


}

int main (){
    int n;
    cin>>n;

    int ans = fact(n);
    cout<<ans<<endl;

    return 0;
}