#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,tekrar,d,kok1,kok2;
    do{ 
    cout<<"X^2 nin kat sayisi=";
    cin>>a;
    cout<<"x in kat sayisi=";
    cin>>b;
    cout<<"sabit sayiyi gir=";
    cin>>c;
    if(a==0)
    {
        cout<<"hata"<<endl<<"Baska soru[evet=1\\hayir=06]";
        cin>>tekrar;
    }
    else{
     d=pow(b,2)-4*a*c;
     if(d<0)
     {
        cout<<"sanal kok var"<<endl<<"Baska soru[evet=1\\hayir=0]";
        cin>>tekrar;
     }else 
     {
     kok1=(-b-sqrt(d))/(float)(a*2);
     kok2=(-b+sqrt(d))/(float)(a*2);
     }
    }
    cout<<"DEnklemin kokleri"<<endl<<kok1<<endl<<kok2<<endl<<"Baska soru[evet=1\\hayir=0]";
    cin>>tekrar;
    
}while(tekrar!=0);
}