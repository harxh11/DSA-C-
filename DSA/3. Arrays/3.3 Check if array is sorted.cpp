#include <bits/stdc++.h>
using namespace std;


int main(){
    
    int arr[10] = {1,21,3,4,5,6,7,8,9,10};
    
    string ans = "true";
    for(int i = 0; i<9; i++){
        if (arr[i] > arr[i + 1]){
            ans = "false";
            break;
        }
    }
    
    cout<<ans<<endl;
    return 0;
}


// ------------------ DONE ------------------