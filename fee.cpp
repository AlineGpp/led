#include <iostream>
#include<iomanip>


using namespace std;
int main()
{
    setlocale(LC_ALL,"Portuguese");

    float R,V,E12,E24,mA=0.02;
    int Vf;
    char led;

    do
    {
        cout<<"Escolha a tensão da fonte: 5V ou 12V ou 24V"<<endl;
        cin>>Vf;

    }
    while(Vf!=5 && Vf!=12 && Vf!=24);

    do
    {

        cout<<"Escolha a tensão do led: A-1,8V ou B-2,4V ou C-3,6V"<<endl;
        cin>>led;

        led = toupper(led);
    }
    while(led!='A' && led!='B' && led!='C');


    if(Vf==5)
    {
        if(led=='A')
        {
            V=(5-1.8);
            R=V/mA;
            E12=((V*V)/180)*1000;
            E24=((V*V)/160)*1000;
            cout << fixed << setprecision(1);
            cout<<"A diferença das tensões é de "<<V<< "volts"<<endl;
            cout<<"A resistência para o resistor é de "<<R<<" ohms"<<endl;
            cout<<"A potência em mW no padrão E12 é "<<E12<< "mW"<<endl;
            cout<<"A potência em mW no padrão E24 é "<<E24<< "mW"<<endl;
        }
        else if (led=='B')
        {

            V=(5-2.4);
            R=V/mA;
            E12=((V*V)/150)*1000;
            E24=((V*V)/130)*1000;
            cout << fixed << setprecision(1);
            cout<<"A diferença das tensões é de "<<V<< "volts"<<endl;
            cout<<"A resistência para o resistor é de "<<R<<"ohms"<<endl;;
            cout<<"A potência em mW no padrão E12 é "<<E12<< "mW"<<endl;
            cout<<"A potência em mW no padrão E24 é "<<E24<< "mW"<<endl;
        }

        else if (led=='C')
        {
            V=(5-3.6);
            R=V/mA;
            E12=((V*V)/82)*1000;
            E24=((V*V)/75)*1000;
            cout << fixed << setprecision(1);
            cout<<"A diferença das tensões é de "<<V<< "volts"<<endl;
            cout<<"A resistência para o resistor é de "<<R<<"ohms"<<endl;;
            cout<<"A potência em mW no padrão E12 é "<<E12<< "mW"<<endl;
            cout<<"A potência em mW no padrão E24 é "<<E24<< "mW"<<endl;
        }

    }

    else if (Vf==12)
    {
        if(led=='A')
        {
            V=(Vf-1.8);
            R=V/mA;
            E12=((V*V)/560)*1000;
            E24=((V*V)/510)*1000;
            cout << fixed << setprecision(1);
            cout<<"A diferença das tensões é de "<<V<< "volts"<<endl;
            cout<<"A resistência para o resistor é de "<<R<<"ohms"<<endl;;
            cout<<"A potência em mW no padrão E12 é "<<E12<< "mW"<<endl;
            cout<<"A potência em mW no padrão E24 é "<<E24<< "mW"<<endl;
        }
        else if (led=='B')
        {

            V=(Vf-2.4);
            R=V/mA;
            E12=((V*V)/560)*1000;
            E24=((V*V)/510)*1000;
            cout << fixed << setprecision(1);
            cout<<"A diferença das tensões é de "<<V<< "volts"<<endl;
            cout<<"A resistência para o resistor é de "<<R<<"ohms"<<endl;;
            cout<<"A potência em mW no padrão E12 é "<<E12<< "mW"<<endl;
            cout<<"A potência em mW no padrão E24 é "<<E24<< "mW"<<endl;
        }

        else if (led=='C')
        {
            V=(Vf-3.6);
            R=V/mA;
            E12=((V*V)/470)*1000;
            E24=((V*V)/430)*1000;
            cout << fixed << setprecision(1);
            cout<<"A diferença das tensões é de "<<V<< "volts"<<endl;
            cout<<"A resistência para o resistor é de "<<R<<"ohms"<<endl;;
            cout<<"A potência em mW no padrão E12 é "<<E12<< "mW"<<endl;
            cout<<"A potência em mW no padrão E24 é "<<E24<< "mW"<<endl;
        }

    }

    else if (Vf==24)
    {
        if(led=='A')
        {
            V=(Vf-1.8);
            R=V/mA;
            E12=((V*V)/1200)*1000;
            E24=((V*V)/1200)*1000;
            cout << fixed << setprecision(1);
            cout<<"A diferença das tensões é de "<<V<< "volts"<<endl;
            cout<<"A resistência para o resistor é de "<<R<<"ohms"<<endl;;
            cout<<"A potência em mW no padrão E12 é "<<E12<< "mW"<<endl;
            cout<<"A potência em mW no padrão E24 é "<<E24<< "mW"<<endl;
        }
        else if (led=='B')
        {

            V=(Vf-2.4);
            R=V/mA;
            E12=((V*V)/1200)*1000;
            E24=((V*V)/1100)*1000;
            cout << fixed << setprecision(1);
            cout<<"A diferença das tensões é de "<<V<< "volts"<<endl;
            cout<<"A resistência para o resistor é de "<<R<<"ohms"<<endl;;
            cout<<"A potência em mW no padrão E12 é "<<E12<< "mW"<<endl;
            cout<<"A potência em mW no padrão E24 é "<<E24<< "mW"<<endl;
        }

        else if (led=='C')
        {
            V=(Vf-3.6);
            R=V/mA;
            E12=((V*V)/1200)*1000;
            E24=((V*V)/1100)*1000;
            cout << fixed << setprecision(1);
            cout<<"A diferença das tensões é de "<<V<< "volts"<<endl;
            cout<<"A resistência para o resistor é de "<<R<<"ohms"<<endl;;
            cout<<"A potência em mW no padrão E12 é "<<E12<< "mW"<<endl;
            cout<<"A potência em mW no padrão E24 é "<<E24<< "mW"<<endl;
        }

    }

    else
        cout<<"Os valores não estão na tabela!"<<endl;

}









