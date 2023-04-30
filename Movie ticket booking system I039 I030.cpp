#include <iostream>
#include<dos.h>
#include <cstring>
#include<windows.h>
#include <unistd.h>
#include <string>
using namespace std;
#include <io.h>
#include <fcntl.h>

void account(int c)
{
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
     char u[50],p[50],cp[50];
    char vu[50],vp[50];
    char name[10],surname[10];
//userrname part
SetConsoleTextAttribute(h,10);
    cout<<"\n\nCreate Username: ";
    cin.getline(u,50);
//clearing screen to a new page and inserting password
    strcpy(vu,u);
    system("CLS");
    SetConsoleTextAttribute(h,6);
    cout<<" .______     ______     ______    __  ___ .___  ___. ____    ____ .___  ___.   ______   ____    ____  __   _______  "<<endl;
cout<<" |   _  \\   /  __  \\   /  __  \\  |  |/  / |   \\/   | \\   \\  /   / |   \\/   |  /  __  \\  \\   \\  /   / |  | |   ____| "<<endl;
cout<<" |  |_)  | |  |  |  | |  |  |  | |  '  /  |  \\  /  |  \\   \\/   /  |  \\  /  | |  |  |  |  \\   \\/   /  |  | |  |__    "<<endl;
cout<<" |   _  <  |  |  |  | |  |  |  | |    <   |  |\\/|  |   \\_    _/   |  |\\/|  | |  |  |  |   \\      /   |  | |   __|   "<<endl;
cout<<" |  |_)  | |  `--'  | |  `--'  | |  .  \\  |  |  |  |     |  |     |  |  |  | |  `--'  |    \\    /    |  | |  |____  "<<endl;
cout<<" |______/   \\______/   \\______/  |__|\\__\\ |__|  |__|     |__|     |__|  |__|  \\______/      \\__/     |__| |_______| "<<endl;
SetConsoleTextAttribute(h,10);
    cout<<"\n\nUsername: "<<vu;
    cout<<"\nCreate Password: ";
    cin.getline(p,50);

    strcpy(vp,p);
    system("CLS");
     SetConsoleTextAttribute(h,6);
    cout<<" .______     ______     ______    __  ___ .___  ___. ____    ____ .___  ___.   ______   ____    ____  __   _______  "<<endl;
cout<<" |   _  \\   /  __  \\   /  __  \\  |  |/  / |   \\/   | \\   \\  /   / |   \\/   |  /  __  \\  \\   \\  /   / |  | |   ____| "<<endl;
cout<<" |  |_)  | |  |  |  | |  |  |  | |  '  /  |  \\  /  |  \\   \\/   /  |  \\  /  | |  |  |  |  \\   \\/   /  |  | |  |__    "<<endl;
cout<<" |   _  <  |  |  |  | |  |  |  | |    <   |  |\\/|  |   \\_    _/   |  |\\/|  | |  |  |  |   \\      /   |  | |   __|   "<<endl;
cout<<" |  |_)  | |  `--'  | |  `--'  | |  .  \\  |  |  |  |     |  |     |  |  |  | |  `--'  |    \\    /    |  | |  |____  "<<endl;
cout<<" |______/   \\______/   \\______/  |__|\\__\\ |__|  |__|     |__|     |__|  |__|  \\______/      \\__/     |__| |_______| "<<endl;
SetConsoleTextAttribute(h,10);
    cout<<"\n\nUsername: "<<vu<<endl;
    cout<<"Password: ";
//loop for hiding password
SetConsoleTextAttribute(h,4);
    for (int i=0;p[i]!='\0';i++)
    {
        cout<<"*";
    }
    SetConsoleTextAttribute(h,10);
    cout<<"\nReenter your Password: ";
    cin.getline(cp,50);
//comparing strings to verify password
    int chk=strcmp(p,cp);
    if(chk==0)
    {
        SetConsoleTextAttribute(h,6);
        cout<<"\nPassword Verified :)";
        SetConsoleTextAttribute(h,10);
        sleep(2);
    }
    else
    {
        SetConsoleTextAttribute(h,4);
        cout<<"Passwords don't match";
        SetConsoleTextAttribute(h,10);
        sleep(2);
        system("CLS");
        account(c+1);
        SetConsoleTextAttribute(h,7);
    }


}
int moviedisp()
{
    auto handle = GetStdHandle(STD_OUTPUT_HANDLE);
wchar_t wide[] = L"\r\n\x2554\x2550\x2550\x2550\x2550\x2550\x2550\x2550\x2550\x2550\x2550\x2557\x2554 \n\x2551 cuntara \x2551 \x98\x81";
      WriteConsoleW(handle, wide, wcslen(wide), NULL, NULL);
}
void payment(int n)
{
    int perc,cost,gtot,dis;
    char y;
    string code;
    cost=n*150;
    perc=cost*18/100;
    gtot=cost+perc-dis;
    cout<<"Tickets booked x "<<n<<"            Rs"<<cost<<endl;

    cout<<"GST(18%)                   Rs"<<perc<<endl;
    cout<<"Do you have a coupon code?(y/n)\n";
    cin>>y;
    if(y='y')
    {
        cout<<"Enter the code here: ";
        cin>>code;
        if(code=="GIV50")
        {
            cout<<"Code Redeemed!\n50% Discount on total";
            dis=(cost+perc)*50/100;
        }
        else if(code=="IBROKE")
        {
            cout<<"Code Redeemed!\n15% Discount on total";
            dis=(cost+perc)*50/100;
        }
        else if(code=="FREEDRINKS")
        {
            cout<<"Code Redeemed!\nOne free drink of your choice at the conosourrie";
            dis=0;
        }
        else if(code=="20OFF")
        {
            cout<<"Code Redeemed!\n20% Discount on total";
            dis=(cost+perc)*20/100;
        }
        else if(code=="PRATISGREAT")
        {
            cout<<"Code Redeemed!\n99% Discount on total";
            dis=(cost+perc)*99/100;
        }
        else
        {
            cout<<"Invalid Code";
            dis=0;
        }
    }
    else
    {
        dis=0;
    }
    cout<<"\NGrand total            Rs"<<gtot;
    int pay;
    cout<<"\NPayment Options\n[ Netbanking ]\n[ UPI ]\n[ Credit/Debit Cards ]\n";
    cin>>pay;
    switch(pay)
    {
        case 1:
        {
            system("CLS");
            cout<<"----------------Netbanking------------------\n";
            cout<<"Amount Due Payment: Rs"<<gtot;
            cout<<"\Please Head to your Banks NetBanking Portal and pay the Amount Due to\nName: BookMyMovie\nA/C no.: 80045273";
            sleep(5);
        }
        case 2:
        {
            system("CLS");
            cout<<"----------------UPI------------------\n";
            cout<<"Amount Due Payment: Rs"<<gtot;
            cout<<"\Please Head to your UPI App and pay the Amount Due to\n ID:80045273";
            sleep(5);
        }
        case 3:
        {
            int cn,e,zip,otp;
            string fn,l,country;
            system("CLS");
            cout<<"----------------Credit/Debit Card------------------\n";
            cout<<"Amount Due Payment: Rs"<<gtot;
            cout<<"Card number -";
            cin>>cn;
            cout<<"EXP -";
            cin>>e;
            cout<<"First Name - ";
            cin>>fn;
            cout<<"Last Name - ";
            cin>>l;
            cout<<"Zip code -";
            cin>>zip;
            cout<<"Country -";
            cin>>country;
            system("CLS");
            cout<<"Enter OTP\n";
            cin>>otp;
            if(otp==1030)
            {
                cout<<"\nPayment Successfull!!";
                sleep(5);
            }
            else
            {
                cout<<"Incorrect OTP \nPlease enter OTP again";
                cin>>otp;
            }

        }
    }

}

int main()
{
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    int n;
    string day,time,seat[20];
    int choice;
    char name[10],surname[10];
    SetConsoleTextAttribute(h,6);
    cout<<" .______     ______     ______    __  ___ .___  ___. ____    ____ .___  ___.   ______   ____    ____  __   _______  "<<endl;
cout<<" |   _  \\   /  __  \\   /  __  \\  |  |/  / |   \\/   | \\   \\  /   / |   \\/   |  /  __  \\  \\   \\  /   / |  | |   ____| "<<endl;
cout<<" |  |_)  | |  |  |  | |  |  |  | |  '  /  |  \\  /  |  \\   \\/   /  |  \\  /  | |  |  |  |  \\   \\/   /  |  | |  |__    "<<endl;
cout<<" |   _  <  |  |  |  | |  |  |  | |    <   |  |\\/|  |   \\_    _/   |  |\\/|  | |  |  |  |   \\      /   |  | |   __|   "<<endl;
cout<<" |  |_)  | |  `--'  | |  `--'  | |  .  \\  |  |  |  |     |  |     |  |  |  | |  `--'  |    \\    /    |  | |  |____  "<<endl;
cout<<" |______/   \\______/   \\______/  |__|\\__\\ |__|  |__|     |__|     |__|  |__|  \\______/      \\__/     |__| |_______| "<<endl;
SetConsoleTextAttribute(h,7);

    account(1);

    system("CLS");
    SetConsoleTextAttribute(h,6);
    cout<<" .______     ______     ______    __  ___ .___  ___. ____    ____ .___  ___.   ______   ____    ____  __   _______  "<<endl;
cout<<" |   _  \\   /  __  \\   /  __  \\  |  |/  / |   \\/   | \\   \\  /   / |   \\/   |  /  __  \\  \\   \\  /   / |  | |   ____| "<<endl;
cout<<" |  |_)  | |  |  |  | |  |  |  | |  '  /  |  \\  /  |  \\   \\/   /  |  \\  /  | |  |  |  |  \\   \\/   /  |  | |  |__    "<<endl;
cout<<" |   _  <  |  |  |  | |  |  |  | |    <   |  |\\/|  |   \\_    _/   |  |\\/|  | |  |  |  |   \\      /   |  | |   __|   "<<endl;
cout<<" |  |_)  | |  `--'  | |  `--'  | |  .  \\  |  |  |  |     |  |     |  |  |  | |  `--'  |    \\    /    |  | |  |____  "<<endl;
cout<<" |______/   \\______/   \\______/  |__|\\__\\ |__|  |__|     |__|     |__|  |__|  \\______/      \\__/     |__| |_______| "<<endl;

     SetConsoleTextAttribute(h,10);
     cout<<"\nEnter Name:";
    cin>>name;
    cout<<"Enter Surname:";
    cin>>surname;


    cout<<"Full name: "<<name<<" "<<surname<<endl;
    SetConsoleTextAttribute(h,6);
    cout<<"Login Successful";
    SetConsoleTextAttribute(h,10);
    sleep(2);

    system("CLS");

//Color change

        SetConsoleTextAttribute(h,6);
    cout<<" .______     ______     ______    __  ___ .___  ___. ____    ____ .___  ___.   ______   ____    ____  __   _______  "<<endl;
cout<<" |   _  \\   /  __  \\   /  __  \\  |  |/  / |   \\/   | \\   \\  /   / |   \\/   |  /  __  \\  \\   \\  /   / |  | |   ____| "<<endl;
cout<<" |  |_)  | |  |  |  | |  |  |  | |  '  /  |  \\  /  |  \\   \\/   /  |  \\  /  | |  |  |  |  \\   \\/   /  |  | |  |__    "<<endl;
cout<<" |   _  <  |  |  |  | |  |  |  | |    <   |  |\\/|  |   \\_    _/   |  |\\/|  | |  |  |  |   \\      /   |  | |   __|   "<<endl;
cout<<" |  |_)  | |  `--'  | |  `--'  | |  .  \\  |  |  |  |     |  |     |  |  |  | |  `--'  |    \\    /    |  | |  |____  "<<endl;
cout<<" |______/   \\______/   \\______/  |__|\\__\\ |__|  |__|     |__|     |__|  |__|  \\______/      \\__/     |__| |_______| "<<endl;
SetConsoleTextAttribute(h,0);
system("color F0");
    cout<<"Welcome, "<<name<<" "<<surname<<endl;

    cout<<"\n Recommended Movies showing in Mumbai\n";
    moviedisp();
    cout<<"\nSelect a movie to proceed\nMovie ";
    cin>>choice;
    if(choice==1)
        {


    cout<<"Shows available\n";
    cout<<"[Monday]\n[Wednesday]\n[Thursday]\n[Sunday]\n";
    cin>>day;
    if(day=="Monday")
    {
        cout<<"Shows Available on Monday\n9:00\n11:04\n";
    }
    else if(day=="Wednesday")
    {
        cout<<"Shows Available on Wenesday\n9:00\n11:04\n";
    }
   else if(day=="Thursday")
   {
       cout<<"Shows Available on Thursday\n9:00\n11:04\n";
   }
   else if(day=="Sunday")
   {
       cout<<"Shows Available on day\n9:00\n11:04\n";
   }

    cout<<"Enter Desired Showtime: " ;
    cin>>time;
    cout<<"Book your Seats from those available at "<<time<<" on "<<day<<endl;
    cout<<"   1  2  3  4  5  6  7  8  9 10  12 13 14 15 16"<<endl;
    cout<<" A         [ ][*][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]"<<endl;
    cout<<" B         [ ][ ][ ][ ][ ][ ][*][*][*][*][ ][ ]"<<endl;
    cout<<" C         [ ][*][*][*][*][*][*][*][*][*][*][ ]"<<endl;
    cout<<" D[ ][ ]   [ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]"<<endl;
    cout<<" E[*][*]   [ ][ ][ ][*][*][ ][ ][*][*][*][ ][ ]"<<endl;
    cout<<" F[ ][ ]   [ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]"<<endl;
    cout<<" G[ ][ ]   [ ][ ][ ][ ][ ][*][*][*][*][*][*][*]"<<endl;
    cout<<" H[ ][ ]   [*][*][*][*][*][*][ ][ ][ ][ ][ ][ ]"<<endl;
    cout<<"                                               "<<endl;
    cout<<" I[ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]\n"<<endl;
    cout<<"How many seats to be booked?\n";
cin>>n;
cout<<"Enter the seat numbers you would like to book\n";
for(int i=0;i<=n-1;i++)
{
    cout<<"Seat no. "<<i+1<<" ";
    cin>>seat[i];

}
        }
   else if(choice==2)
        {
           cout<<"Shows available\n";
    cout<<"[Monday]\n[Wednesday]\n[Thursday]\n[Sunday]\n";
    cin>>day;
    if(day=="Monday")
    {
        cout<<"Shows Available on Monday\n9:00\n11:04\n";
    }
    else if(day=="Wednesday")
    {
        cout<<"Shows Available on Wenesday\n9:00\n11:04\n";
    }
   else if(day=="Thursday")
   {
       cout<<"Shows Available on Thursday\n9:00\n11:04\n";
   }
   else if(day=="Sunday")
   {
       cout<<"Shows Available on day\n9:00\n11:04\n";
   }

    cout<<"Enter Desired Showtime: " ;
    cin>>time;
    cout<<"Book your Seats from those available at "<<time<<" on "<<day<<endl;

cout<<" /___________________Screen____________________\n"<<endl;
cout<<"   1  2  3  4  5  6  7  8  9 10  12 13 14 15 16"<<endl;

cout<<" A         [*][*][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]"<<endl;
cout<<" B         [*][ ][ ][ ][ ][ ][*][*][*][*][ ][ ]"<<endl;
cout<<" C         [*][*][*][*][*][*][*][*][*][*][*][ ]"<<endl;
cout<<" D[ ][ ]   [*][*][*][ ][ ][ ][*][ ][ ][ ][ ][ ]"<<endl;
cout<<" E[*][*]   [*][*][*][*][*][*][*][*][*][*][ ][ ]"<<endl;
cout<<" F[ ][ ]   [*][*][*][ ][ ][*][*][ ][ ][ ][ ][ ]"<<endl;
cout<<" G[ ][ ]   [*][*][*][ ][ ][*][*][*][*][*][*][*]"<<endl;
cout<<" H[ ][ ]   [*][*][*][*][*][*][*][ ][*][*][ ][ ]"<<endl;
cout<<"                                               "<<endl;
cout<<" I[*][ ][*][ ][ ][*][ ][ ][*][ ][*][ ][*][ ][*]"<<endl;
    cout<<"How many seats to be booked?\n";
cin>>n;
cout<<"Enter the seat numbers you would like to book\n";
for(int i=0;i<=n-1;i++)
{
    cout<<"Seat no. "<<i+1<<" ";
    cin>>seat[i];

}
        }
else if(choice==3)
        {
           cout<<"Shows available\n";
    cout<<"[Monday]\n[Wednesday]\n[Thursday]\n[Sunday]\n";
    cin>>day;
    if(day=="Monday")
    {
        cout<<"Shows Available on Monday\n9:00\n11:04\n";
    }
    else if(day=="Wednesday")
    {
        cout<<"Shows Available on Wenesday\n9:00\n11:04\n";
    }
   else if(day=="Thursday")
   {
       cout<<"Shows Available on Thursday\n9:00\n11:04\n";
   }
   else if(day=="Sunday")
   {
       cout<<"Shows Available on day\n9:00\n11:04\n";
   }

    cout<<"Enter Desired Showtime: " ;
    cin>>time;
    cout<<"Book your Seats from those available at "<<time<<" on "<<day<<endl;

cout<<"  /___________________Screen____________________\n"<<endl;
cout<<"   1  2  3  4  5  6  7  8  9 10  12 13 14 15 16"<<endl;
cout<<" A         [ ][*][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]"<<endl;
cout<<" B         [ ][ ][ ][ ][ ][ ][*][*][*][*][ ][ ]"<<endl;
cout<<" C         [ ][*][*][*][*][*][*][*][*][*][*][ ]"<<endl;
cout<<" D[ ][ ]   [ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]"<<endl;
cout<<" E[*][*]   [ ][ ][ ][*][*][ ][ ][*][*][*][ ][ ]"<<endl;
cout<<" F[ ][ ]   [ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]"<<endl;
cout<<" G[ ][ ]   [ ][ ][ ][ ][ ][*][*][*][*][*][*][*]"<<endl;
cout<<" H[ ][ ]   [*][*][*][*][*][*][ ][ ][ ][ ][ ][ ]"<<endl;
cout<<"                                               "<<endl;
cout<<" I[*][ ][*][ ][ ][*][ ][ ][*][ ][*][ ][*][ ][*]"<<endl;
    cout<<"How many seats to be booked?\n";
cin>>n;
cout<<"Enter the seat numbers you would like to book\n";
for(int i=0;i<=n-1;i++)
{
    cout<<"Seat no. "<<i+1<<" ";
    cin>>seat[i];

}
        }
else if(choice==4)
        {
           cout<<"Shows available\n";
    cout<<"[Monday]\n[Wednesday]\n[Thursday]\n[Sunday]\n";
    cin>>day;
    if(day=="Monday")
    {
        cout<<"Shows Available on Monday\n9:00\n11:04\n";
    }
    else if(day=="Wednesday")
    {
        cout<<"Shows Available on Wenesday\n9:00\n11:04\n";
    }
   else if(day=="Thursday")
   {
       cout<<"Shows Available on Thursday\n9:00\n11:04\n";
   }
   else if(day=="Sunday")
   {
       cout<<"Shows Available on day\n9:00\n11:04\n";
   }

    cout<<"Enter Desired Showtime: " ;
    cin>>time;

cout<<"  /___________________Screen____________________\n"<<endl;
cout<<"   1  2  3  4  5  6  7  8  9 10  12 13 14 15 16"<<endl;
cout<<" A         [ ][*][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]"<<endl;
cout<<" B         [*][ ][ ][ ][ ][ ][*][*][*][*][ ][*]"<<endl;
cout<<" C         [ ][*][*][*][*][*][*][*][*][*][*][*]"<<endl;
cout<<" D[ ][ ]   [*][ ][ ][ ][ ][ ][*][ ][ ][ ][ ][*]"<<endl;
cout<<" E[*][*]   [ ][ ][ ][*][*][*][ ][*][*][*][ ][*]"<<endl;
cout<<" F[ ][ ]   [*][*][*][ ][ ][ ][ ][ ][ ][ ][ ][*]"<<endl;
cout<<" G[ ][ ]   [ ][ ][ ][*][ ][*][*][*][*][*][*][*]"<<endl;
cout<<" H[ ][ ]   [*][*][*][*][*][*][ ][ ][ ][ ][ ][ ]"<<endl;
cout<<"                                               "<<endl;
cout<<" I[ ][ ][ ][ ][*][*][ ][*][ ][ ][*][*][*][ ][ ]"<<endl;
    cout<<"How many seats to be booked?\n";
cin>>n;
cout<<"Enter the seat numbers you would like to book\n";
for(int i=0;i<=n-1;i++)
{
    cout<<"Seat no. "<<i+1<<" ";
    cin>>seat[i];

}
        }
else if(choice==5)
        {
            cout<<"Shows available\n";
    cout<<"[Monday]\n[Wednesday]\n[Thursday]\n[Sunday]\n";
    cin>>day;
    if(day=="Monday")
    {
        cout<<"Shows Available on Monday\n9:00\n11:04\n";
    }
    else if(day=="Wednesday")
    {
        cout<<"Shows Available on Wenesday\n9:00\n11:04\n";
    }
   else if(day=="Thursday")
   {
       cout<<"Shows Available on Thursday\n9:00\n11:04\n";
   }
   else if(day=="Sunday")
   {
       cout<<"Shows Available on day\n9:00\n11:04\n";
   }

    cout<<"Enter Desired Showtime: " ;
    cin>>time;
    cout<<"Book your Seats from those available at "<<time<<" on "<<day<<endl;
    cout<<"   1  2  3  4  5  6  7  8  9 10  12 13 14 15 16"<<endl;
cout<<"  /___________________Screen____________________\n"<<endl;
cout<<" A         [ ][*][*][*][ ][ ][*][*][ ][ ][*][*]"<<endl;
cout<<" B         [*][ ][*][ ][*][ ][*][*][*][*][ ][ ]"<<endl;
cout<<" C         [ ][*][*][*][*][*][ ][*][*][*][*][ ]"<<endl;
cout<<" D[ ][ ]   [*][ ][*][ ][*][*][ ][ ][ ][ ][ ][ ]"<<endl;
cout<<" E[*][*]   [*][*][*][*][*][*][ ][*][*][*][ ][*]"<<endl;
cout<<" F[ ][ ]   [*][ ][*][ ][*][ ][ ][ ][ ][ ][ ][*]"<<endl;
cout<<" G[ ][ ]   [*][*][*][*][ ][*][*][*][*][*][*][*]"<<endl;
cout<<" H[ ][ ]   [*][*][*][*][*][*][*][*][ ][ ][ ][ ]"<<endl;
cout<<"                                               "<<endl;
cout<<" I[ ][*][ ][*][ ][*][ ][*][*][*][*][ ][*][ ][*]"<<endl;
    cout<<"How many seats to be booked?\n";
cin>>n;
cout<<"Enter the seat numbers you would like to book\n";
for(int i=0;i<=n-1;i++)
{
    cout<<"Seat no. "<<i+1<<" ";
    cin>>seat[i];

}
        }
else if(choice==6)
        {
           cout<<"Shows available\n";
    cout<<"[Monday]\n[Wednesday]\n[Thursday]\n[Sunday]\n";
    cin>>day;
    if(day=="Monday")
    {
        cout<<"Shows Available on Monday\n9:00\n11:04\n";
    }
    else if(day=="Wednesday")
    {
        cout<<"Shows Available on Wenesday\n9:00\n11:04\n";
    }
   else if(day=="Thursday")
   {
       cout<<"Shows Available on Thursday\n9:00\n11:04\n";
   }
   else if(day=="Sunday")
   {
       cout<<"Shows Available on day\n9:00\n11:04\n";
   }

    cout<<"Enter Desired Showtime: " ;
    cin>>time;
    cout<<"Book your Seats from those available at "<<time<<" on "<<day<<endl;
    cout<<"   1  2  3  4  5  6  7  8  9 10  12 13 14 15 16"<<endl;
    cout<<" A         [ ][*][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]"<<endl;
    cout<<" B         [ ][ ][ ][ ][ ][ ][*][*][*][*][ ][ ]"<<endl;
    cout<<" C         [ ][*][*][*][*][*][*][*][*][*][*][ ]"<<endl;
    cout<<" D[ ][ ]   [ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]"<<endl;
    cout<<" E[*][*]   [ ][ ][ ][*][*][ ][ ][*][*][*][ ][ ]"<<endl;
    cout<<" F[ ][ ]   [ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]"<<endl;
    cout<<" G[ ][ ]   [ ][ ][ ][ ][ ][*][*][*][*][*][*][*]"<<endl;
    cout<<" H[ ][ ]   [*][*][*][*][*][*][ ][ ][ ][ ][ ][ ]"<<endl;
    cout<<"                                               "<<endl;
    cout<<" I[ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]\n"<<endl;
    cout<<"How many seats to be booked?\n";
cin>>n;
cout<<"Enter the seat numbers you would like to book\n";
for(int i=0;i<=n-1;i++)
{
    cout<<"Seat no. "<<i+1<<" ";
    cin>>seat[i];

}
        }
else if(choice==7)
        {
            cout<<"Shows available\n";
    cout<<"[Monday]\n[Wednesday]\n[Thursday]\n[Sunday]\n";
    cin>>day;
    if(day=="Monday")
    {
        cout<<"Shows Available on Monday\n9:00\n11:04\n";
    }
    else if(day=="Wednesday")
    {
        cout<<"Shows Available on Wenesday\n9:00\n11:04\n";
    }
   else if(day=="Thursday")
   {
       cout<<"Shows Available on Thursday\n9:00\n11:04\n";
   }
   else if(day=="Sunday")
   {
       cout<<"Shows Available on day\n9:00\n11:04\n";
   }

    cout<<"Enter Desired Showtime: " ;
    cin>>time;
    cout<<"Book your Seats from those available at "<<time<<" on "<<day<<endl;
    cout<<"  /___________________Screen____________________\n"<<endl;
    cout<<"   1  2  3  4  5  6  7  8  9 10  12 13 14 15 16"<<endl;

cout<<" A         [ ][*][*][*][ ][ ][*][*][ ][ ][*][*]"<<endl;
cout<<" B         [*][ ][*][ ][*][ ][*][*][*][*][ ][ ]"<<endl;
cout<<" C         [ ][*][*][*][*][*][ ][*][*][*][*][ ]"<<endl;
cout<<" D[ ][ ]   [*][ ][*][ ][*][*][ ][ ][ ][ ][ ][ ]"<<endl;
cout<<" E[*][*]   [*][*][*][*][*][*][ ][*][*][*][ ][*]"<<endl;
cout<<" F[ ][ ]   [*][ ][*][ ][*][ ][ ][ ][ ][ ][ ][*]"<<endl;
cout<<" G[ ][ ]   [*][*][*][*][ ][*][*][*][*][*][*][*]"<<endl;
cout<<" H[ ][ ]   [*][*][*][*][*][*][*][*][ ][ ][ ][ ]"<<endl;
cout<<"                                               "<<endl;
cout<<" I[ ][*][ ][*][ ][*][ ][*][*][*][*][ ][*][ ][*]"<<endl;
    cout<<"How many seats to be booked?\n";
cin>>n;
cout<<"Enter the seat numbers you would like to book\n";
for(int i=0;i<=n-1;i++)
{
    cout<<"Seat no. "<<i+1<<" ";
    cin>>seat[i];

}
        }


    payment(n);
}
