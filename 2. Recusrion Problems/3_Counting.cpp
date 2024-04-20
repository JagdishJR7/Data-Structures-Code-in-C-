#include <iostream>
using namespace std;

void PrintNumbers(int m) {
    // Base Condition 
    if (m == 0) {
        return;
    }

     // Processiong - so it is, Tail recursion so , 5 4 3 2 1;
    // cout<< n <<endl;

    // Recursive call with n-1
    PrintNumbers(m - 1);

    
    // Processiong - so it is, Head recursion so , 1 2 3 4 5;
    cout<< m <<endl; 

}

int main() {
    int n;
    cin >> n;


    cout<<endl;
    PrintNumbers(n);

    return 0;
}
