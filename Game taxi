#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
  string refueling_answer;
  string order;
  int  balance=0;
  int car_fuel=45;
   string command;
   while (true){
    cout<<"введи команду: ";
    cin>>command;
    if (command=="заказ")
    {
        if(car_fuel==0)
        cout<<"нехватает топлива"<<endl;
        else
    cout<<"ваш заказ готов ,вы хотите его выполнить?: ";
    cin>>order;
    if(order=="да")
    balance+=200;
    car_fuel-=10;
    if(command=="нет")
    cout<<"ок"<<endl;
    
    continue;
    }
    if (command=="баланс")
    {
    cout<<balance<<endl;
    continue;
    }
    if(command=="топливо")
    {
        cout<<car_fuel<<endl;
        continue;
    }
    if(command=="заправить")
    {
        if(balance<100)
        cout<<"нехватает денег"<<endl;
    else{
        balance-=100;
        car_fuel+=45;
    }
        continue;
    }
    
   }
    return 0;
}
