#include <iostream>

#include <string>

#include <vector>

using namespace std;

int main()

{

  vector<string>garbage;

  int chesto;

  int inventory_it;

  string market_veto;

  vector<string>inventory;

  vector <string> market_veto_purchase={"вода","кофе","булочка","суп"};

  string order;

  int energy=100;

  int  balance=0;

  int car_fuel=45;

  string answer_vetos;

   string command;

   while (true){

    cout<<"введи команду: ";

    cin>>command;

    if (command=="заказ")

    {

        if(car_fuel<10)

        cout<<"нехватает топлива"<<endl;

        else if(energy<10)

        cout<<"вы устали и больше не в силах возить клиентов"<<endl;

    

        else{

    cout<<"ваш заказ готов ,вы хотите его выполнить?: ";

    cin>>order;

    if(order=="да")

    balance+=200;

    car_fuel-=10;

    energy-=10;

    if(command=="нет")

    cout<<"ок"<<endl;

  

        }

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

        cout<<"вы успешно заправили вашу машину"<<endl;

        balance-=100;

        car_fuel+=45;

    }

        continue;

    }

    if (command=="энергия")

    {

    cout<<"ваша энергия составляет "<<energy<<endl;

    continue;

    }

    if(command=="спать")

    {

        energy+=45;

        cout<<"вы успешно поспали"<<endl;

        continue;

    }

     if(command=="инвентарь")

     {

        for(int  inventory_it=0;  inventory_it<inventory.size(); inventory_it++ ) cout<<inventory[inventory_it]<<endl;

        continue;

     }

        string command_inv;

        if(command=="команда_инвентаря")

       {

        cout<<"введи команду для инвенторя или введи выход ,чтобы закрыть инвентарь: ";

        cin>>command_inv;

        if (command_inv=="употребить")

        {

        cout<<"введите что вы хотите употребить:";

        string eater_inv;

        cin>>eater_inv;

   int index = find(inventory.begin(), inventory.end(), eater_inv) -inventory.begin(); 

    if (index != inventory.size())

        inventory.erase(inventory.begin() + index);

                energy+=45;

           

                if(command_inv=="выход")

                cout<<"вы закрыли инвентарь"<<endl;

        }

            }

       

       

            

        

            

    if(command=="veto")

    {

        cout<<"вы заехали в магазин veto, вот список товаров ,которые там продаются, напишите один из этих товаров который хотите купить: "<<endl;if(balance<50)

        cout<<"у вас недостаточно денег для покупки товара"<<endl;

        else{

        for(int chesto=0; chesto<market_veto_purchase.size();chesto++ ) cout<<market_veto_purchase[chesto]<<endl;

        

        cin>>market_veto;

        bool veto_found=false;

        for (string s : market_veto_purchase)

        {

            if(s==market_veto)

            {

                cout<<"введите что хотите купить: ";

                cin>>answer_vetos;

                inventory.push_back(answer_vetos);

                veto_found=true;

                balance-=50;

                 cout<<"ваша покупка появилась у вас в инвенторе."<<endl;

        continue;

            }

        }

        };

        }

       

        

   }

    return 0;

}
