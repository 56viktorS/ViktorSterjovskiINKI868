#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Vnesete broj na kamioni: ";
    cin>>n;
    //int kamioni[n];
    int kilometri[n];
    int gorivo[n];
    int vkupnoGorivo = 0;
    int vkupnoPat = 0;
    float prosecnoPat;
    float prosecnoGorivo;
    int maxKilometri = 0;
    int maxKilometriIndeks = 1;
    int minGorivoIndeks = 0;
    int minGorivo = 0;
    for(int i =0;i<n;i++)
    {
        cout<<"Vnesi gi kilometrite na Kamionot broj "<<i+1<<": ";
        cin>>kilometri[i];
        vkupnoPat = vkupnoPat + kilometri[i];
        if(kilometri[i]>maxKilometri)
        {
            maxKilometri = kilometri[i];
            maxKilometriIndeks = i+1;
        }

    }
    for(int i =0;i<n;i++)
    {
        cout<<"Vnesi potroseno gorivo na Kamionot broj "<<i+1<<": ";
        cin>>gorivo[i];
        vkupnoGorivo = vkupnoGorivo + gorivo[i];
        if(i == 0)
        {
            minGorivoIndeks = 0;
            minGorivo = gorivo[0];
        }
        else if(gorivo[i]<minGorivo)
        {
            minGorivo=gorivo[i];
            minGorivoIndeks=i+1;
        }
    }
    prosecnoPat = vkupnoPat / n;
    prosecnoGorivo = (float) vkupnoGorivo / vkupnoPat;

    cout<<"Vkupno pominat pat na site kamioni: "<<vkupnoPat<<" kilometri."<<endl;
    cout<<"Prosecen pominat pat na kamionite: "<<prosecnoPat<<" kilometri."<<endl;
    cout<<"Prosecno potroseno gorivo po kilometar: "<<prosecnoGorivo<<" litri."<<endl;
    cout<<"Indeks na kamionot so najmnogu kilometri: "<<maxKilometriIndeks<<endl;
    cout<<"Indeks na kamion so najekonomicna potrosuvacka: "<<minGorivoIndeks;

     return 0;
}
