#include <stdio.h>
#include <string>
#include <iostream>
#include <map>

void solve(){
    int valor, num, x=0;
    std::string letras;

    std::map<char, int> mymap;

    std::cin >> letras >> valor;

    for (int i = 0; i < letras.size(); i++){
        mymap[letras[i]] ++;
        x+=(letras[i]-'a'+1);
    }
    
    for (int i = 122; i > 96 && x > valor; i--){
        while (x > valor && mymap[char(i)]!=0){
            x-=(i-96);
            mymap[char(i)]--;
        }
    }

    for (int i = 0; i < letras.size(); i++){
        if (mymap[letras[i]]!=0){
            mymap[letras[i]]--;
            std::cout << letras[i];
        }
    }
    std::cout << std::endl;
}

int main (){
    int q;
    std::cin>>q;
    while (q--){
       solve();
    }
    
    return 0;
}