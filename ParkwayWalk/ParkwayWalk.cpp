#include <iostream>
#include <vector>

using namespace std;

void greedy(){
    int n,m;
    cin >> n >> m;
    int sum=0;

    for(int i=0;i<n;++i){
        int a;
        cin >> a;
        sum+=a;
    }
    sum-m > 0 ? cout << sum-m : cout << "0";
    cout << endl;
    return;
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        greedy();
    }

    return 0;
}