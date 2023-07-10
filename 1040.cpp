#include <iostream>
#include <map>

using namespace std;

int main(){

    int ddd;
    cin >> ddd;
    
    map<int, string> dddMap = {
        {61, "Brasilia"},
        {71, "Salvador"},
        {11, "Sao Paulo"},
        {21, "Rio de Janeiro"},
        {32, "Juiz de Fora"},
        {19, "Campinas"},
        {27, "Vitoria"},
        {31, "Belo Horizonte"},
    };
    
    auto i = dddMap.find(ddd);
    if (i != dddMap.end()){
        std::cout << "" << i -> second << std::endl;
        
    }
    else {
        cout << "DDD nao cadastrado" << endl;
    }

    return 0;
}