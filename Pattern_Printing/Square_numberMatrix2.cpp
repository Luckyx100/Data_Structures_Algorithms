#include <iostream>
using namespace std;
int main(){
    int n, count = 1;
    cout << "Enter any number : ";
    cin >> n;
    cout << "Your number matrix is : "<< endl;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout<< count <<" ";
            count++;
        }
        cout<<endl;
    }
    
    return 0;
}