#include <iostream>
#include <clocale>
#include <bitset>
using namespace std;

int main(){
setlocale (LC_ALL, "Russian");
int num1, num2;
cout<<"Введите первое число: ";
    cin>>num1;
cout<<"Введите второе число: ";
    cin>>num2;
bitset<8>num11(num1);
bitset<8>num22(num2);
cout<<num1<<" = "<<num11<<endl;
cout<<num2<<" = "<<num22<<endl;
cout<<"========================"<<endl;

cout<<"& = "<<(num11&num22)<<endl;

cout<<"| = "<<(num11|num22)<<endl;

cout<<"~ = "<<(~num11)<<endl;

cout<<"^ = "<<(num11^num22)<<endl;

cout<<"<< = "<<(num11<<1)<<endl;

cout<<">> = "<<(num11>>1)<<endl;

cout<<"========================"<<endl;

//=============================

cout<<"Задание 2"<<endl;
int num;
cout<<"Введи число: ";
    cin>>num;    
        bitset<8>num8(num);

int FLAG_0 = 1;
int FLAG_1 = 2;
int FLAG_2 = 4;
int FLAG_3 = 8;
int FLAG_4 = 16;
int FLAG_5 = 32;
int FLAG_6 = 64;
int FLAG_7 = 128;

int FLAG_0_1 = FLAG_0 | FLAG_1;

if (num >= 0 && num <= 255) {
    cout<<num8<<endl;
    
    if (num & FLAG_0)
        cout<<"0 = Флаг"<<endl;
    if (num & FLAG_1)
        cout<<"1 = Флаг"<<endl;
    if (num & FLAG_2)
        cout<<"2 = Флаг"<<endl;
    if (num & FLAG_3)
        cout<<"3 = Флаг"<<endl;
    if (num & FLAG_4)
        cout<<"4 = Флаг"<<endl;
    if (num & FLAG_5)
        cout<<"5 = Флаг"<<endl;
    if (num & FLAG_6)
        cout<<"6 = Флаг"<<endl;
    if (num & FLAG_7)
        cout<<"7 = Флаг"<<endl;


    if ((num & FLAG_0_1) == FLAG_0_1)
        cout<<"Установлен комбинированный флаг";
    else
        cout<<"Комбинированный флаг не установлен";
    
}

else {
    cout<<"Ошибка";
}
return 0;
}