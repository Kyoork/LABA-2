#include <iostream>
#include <clocale>
#include <bitset>
using namespace std;

int main(){
setlocale (LC_ALL, "Russian");
int num1, num2, result;
cout<<"BIG JOPA";
cout<<"¬ведите первое число: ";
    cin>>num1;
cout<<"¬ведите второе число: ";
    cin>>num2;
bitset<8>num11(num1);
bitset<8>num22(num2);
cout<<num11<<endl;
cout<<num22<<endl;

cout<<"& = "<<(num11&num22)<<endl;

cout<<"| = "<<(num11|num22)<<endl;

cout<<"~ = "<<(~num11)<<endl;

cout<<"^ = "<<(num11^num22)<<endl;

cout<<"<< = "<<(num11<<1)<<endl;

cout<<">> = "<<(num11>>1)<<endl;

return 0;
}