#include <iostream>
#include <vector>

using namespace std;

void greedy(){
    int rooms;
        int i=0;
        cin >> rooms;
        vector <int> salas(rooms);
        long long int sum = 0;

        for(int r=0;r<rooms;++r){
            cin >> salas[r];
        }
        
        while(i < rooms && salas[i] == 0){
            i++;
        }

        for(int j=i; j<rooms-1;j++){
            sum += salas[j];
            if(salas[j] == 0){
              sum++;
            }
        }
        cout << sum << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        greedy();
    }
    return 0;
}