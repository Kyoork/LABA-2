#include <iostream>
#include <clocale>
#include <bitset>

using namespace std;
int main(){
setlocale (LC_ALL, "Russian");
int num;
cout<<"Введи число: ";
    cin>>num;    
        bitset<8>num8(num);
        cout<<num8<<endl;

for (int i = 0; i < 8; i++){
    if(num8[i] == 1)
    cout<<"Опа, цифра "<<i<<" это флаг"<<endl;
}   
return 0;
}