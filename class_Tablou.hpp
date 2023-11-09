#ifndef CLASS_TABLOU_HPP
#define CLASS_TABLOU_HPP

//#include "Class_2.hpp"


class Nothing;

class Tablou
{


    private:
            int dimensiune;
        int *tablou;
    public:
        int operatie;


    Tablou( int dim )                               //constructprul implicit
    {
         
        dimensiune = dim;  
        tablou = new int[dimensiune];          

        
        }


Tablou (const Tablou &other)                           //cpnstructorul de copiere
{
        this->dimensiune = other.dimensiune;
        this-> tablou = new int[other.dimensiune];

        for (int i=0;i<other.dimensiune;i++)
        {
                this->tablou[i] = other.tablou[i];
        }
}


~Tablou()          //destructor
{
delete[] tablou;
}






void setValues()
{
        cout<<"Seteaza valorile pentru Tablou:"<<endl;
        for (int i=0;i<dimensiune;i++)
        {
                cin>>tablou[i];
        }

}

void getValues()
{
        cout << "Tabloul creat:"<<endl;
 for (int i=0;i<dimensiune;i++)
        {
                cout<<tablou[i]<<" ";
        }
}


Tablou& operator = (const Tablou &other)   //supraincqarcarea ===
{
        cout<<"merge"<<endl;
        this->dimensiune = other.dimensiune;

        

        for(int i=0;i<dimensiune;i++)
        {
                this->tablou[i]=other.tablou[i];
        }

        return *this;
        }


 Tablou& operator+=(const Tablou& other) {
    if (dimensiune != other.dimensiune) {
        
        cout << "Dimensiunile tablourilor sunt diferite!" << endl;
    } else {
        for (int i = 0; i < dimensiune; i++) {
            tablou[i] += other.tablou[i];
        }
    }
    return *this;
}


  Tablou& operator-=(const Tablou& other) {
    if (dimensiune != other.dimensiune) {
        
        cout << "Dimensiunile tablourilor sunt diferite" << endl;
    } else {
        for (int i = 0; i < dimensiune; i++) {
            tablou[i] -= other.tablou[i];
        }
    }
    return *this;
}


friend Tablou operator+(const Tablou& x, int y);
friend Tablou operator-(const Tablou& x, int y);
friend Tablou operator*(const Tablou& x, int y);

        };


        #endif