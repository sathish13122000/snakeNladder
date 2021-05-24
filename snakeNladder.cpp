#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    srand(time(NULL));
    int n=6;
    int r=0;
    int c,count=0;
    do{
    r = rand() % n + 1;
    cout<<"Result: "<<r<<"\n";
    count+=r;
    cout<<"Moved "<<r<<" Steps & Reached "<<count<<"-th Position";
    if(count==12 || count== 23 || count==18) cout<<"\nReaches Lader - ";
    else if(count==9 || count==15 || count ==21) cout<<"\nBite by Snake - ";
    switch(count)
    {
        //lader climbing 
        case 12:
        {
            count+=10;
            cout<<"Reached "<<count<<"-th Postion";
            break;
        }
        case 18:
        {
            count+=9;
            cout<<"Reached "<<count<<"-th Postion";
            break;
        }
        case 23:
        {
            count+=17;
            cout<<"Reached "<<count<<"-th Postion";
            break;
        }

        //snake bites
        case 9:
        {
            count-=5;
            cout<<"Downed to "<<count<<"-th Postion";
            break;
        }
        case 15:
        {
            count-=9;
            cout<<"Downed to "<<count<<"-th Postion";
            break;
        }
        case 21:
        {
            count-=17;
            cout<<"Downed to "<<count<<"-th Postion";
            break;
        }
        default:
        {
            //cout<<"\nTry again...";
            break;
        }
    }
    if(count==50){
        cout<<"\n\n$$$$$$ HURRAY YOU WON THE MATCH !!! $$$$$$\n\n";
        break;
    }
    if(count>50){
        cout<<"\nInvalid Position...Try again...";
        count-=r;
    }
    cout<<"\n";
    cin>>c;
    }while(c==0); //Enter 0 to throw the dice other wise the game discontinued
}