#include<bits/stdc++.h>
using namespace std;
struct Cars{
        string company[9]={"Maruti", "BMW", "Audi", "Tata", "MG", "KIA", "Mercedes", "Honda", "Hyundai"};
        string model[9]={"Ertiga", "Q7", "R8", "Nexon", "Hector", "Carens", "Benz", "City", "i20"};
        string color[9]={"Creame", "Black", "White", "Silver", "Orange", "White", "Black", "Red", "Blue"};
        string max_speed[9]={"120kmph", "150kmph", "180kmph", "100kmph", "140kmph", "160kmph", "210kmph", "140kmph", "110kmph"};
        string year[9]={"2019", "2021", "2020", "2016", "2018", "2022", "2017", "2023", "2015"};
        int price[9]={5000, 20000, 15000, 4500, 13000, 7000, 25000, 6000, 4000};
};
Cars car;

void menu()
{
    cout<<"\n\n\t\t\t-------------------------";
    cout<<"\n\t\t\t\tMENU";
    cout<<"\n\t\t\t--------------------------";
    for(int i=1;i<=9;i++)
    {
        cout<<"\n\t\t\t"<<i<<" ";
        cout<<car.company[i-1];
    }
    cout<<"\n\n\t\tSelect the number of company : ";
}

void details(int choice)
{
    cout<<"\n\n\t\tYour car choice : ";
    cout<<"\n\n\t\t\tModel : ";
    cout<<car.model[choice-1];
    cout<<"\n\t\t\tColor : ";
    cout<<car.color[choice-1];
    cout<<"\n\t\t\tMaximum speed : ";
    cout<<car.max_speed[choice-1];
    cout<<"\n\t\t\tYear : ";
    cout<<car.year[choice-1];
    cout<<"\n\t\t\tPrice : ";
    cout<<car.price[choice-1];
    cout<<"\n\n\t\tAre you sure you want to select this car? (yes/no/exit): ";
}

int main()
{
    cout<<"\n\t\t\t\t\tWelcome to varun's Car Rental System"<<endl;
    cout<<"\n\n\t\t\tEnter Password: ";
    string password;
    cin>>password;
    if(password=="varun")
    {
        menu();
        int choice;
        cin>>choice;
        details(choice);
        string decide;
        cin>>decide;
        if(decide=="yes")
        {
            cout<<"\n\n\t\t\tEnter your name : ";
            string name;
            cin>>name;
            cout<<"\n\t\t\tEnter National_ID : ";
            int id;
            cin>>id;
            cout<<"\n\t\t\tEnter payment amout : ";
            int amount;
            cin>>amount;
            if(amount==car.price[choice-1])
            {
                cout<<"\n\n\t\tPayment successfull... Enjoy your ride";
            }
            else
            {
                while(true)
                {
                    cout<<"\n\n\t\tPayment unsuccessful... ";
                    cout<<"\n\n\t\t\tEnter your name : ";
                    string name;
                    cin>>name;
                    cout<<"\n\t\t\tEnter National_ID : ";
                    int id;
                    cin>>id;
                    cout<<"\n\t\t\tEnter payment amout : ";
                    int amount;
                    cin>>amount;
                    if(amount==car.price[choice-1])
                    {
                        cout<<"\n\n\t\tPayment successfull... Enjoy your ride";
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
        }
        else if(decide=="no")
        {
            while(true)
            {
                menu();
                int choice;
                cin>>choice;
                details(choice);
                string decide;
                cin>>decide;
                if(decide=="no")
                {
                    continue;
                }
                else if(decide=="exit")
                {
                    cout<<"\n\n\t\tSystem exited... Thank you";
                    break;
                }
                else
                {
                    cout<<"\n\n\t\t\tEnter your name : ";
                    string name;
                    cin>>name;
                    cout<<"\n\t\t\tEnter National_ID : ";
                    int id;
                    cin>>id;
                    cout<<"\n\t\t\tEnter payment amout : ";
                    int amount;
                    cin>>amount;
                    if(amount==car.price[choice-1])
                    {
                        cout<<"\n\n\t\tPayment successfull... Enjoy your ride";
                        break;
                    }
                    else
                    {
                        while(true)
                        {
                            cout<<"\n\n\t\tPayment unsuccessful... ";
                            cout<<"\n\n\t\t\tEnter your name : ";
                            string name;
                            cin>>name;
                            cout<<"\n\t\t\tEnter National_ID : ";
                            int id;
                            cin>>id;
                            cout<<"\n\t\t\tEnter payment amout : ";
                            int amount;
                            cin>>amount;
                            if(amount==car.price[choice-1])
                            {
                                cout<<"\n\n\t\tPayment successfull... Enjoy your ride";
                                break;
                            }
                            else
                            {
                                continue;
                            }
                        }
                    }
                    break;
                }
            }
        }
        else
        {
            cout<<"\n\n\t\tSystem exited... Thank you";
        }
    }
    else
    {
        cout<<"\n\t\tIncorrect password... Please try again";
    }
}