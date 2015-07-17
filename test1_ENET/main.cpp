#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

char mesajTest[] = "0746882526;123456789;65498731;4568795421#alloy in desert";
char* ptrMsg = &mesajTest[0];

char primulNr[] = "";
char al2Nr[] = "";
char al3Nr[] = "";
char al4Nr[] = "";
char alarmaMsg[] = "";
char* alrPtr = NULL;

char* mesajTrucat = NULL;
int main()
{

    cout << "Hello Master!!!" << endl;

    cout<<endl<<"Mesajul Brut:"<<mesajTest<<endl;

    mesajTrucat =strtok(ptrMsg, ";#");
    if(mesajTrucat!=NULL)
    {
        cout<<"Primul numar:  "<<mesajTrucat<<endl;
        strcpy(primulNr, mesajTrucat);
        mesajTrucat = strtok(NULL,";#");
    }
     if(mesajTrucat!=NULL)
    {
        cout<<"Al doilea numar:  "<<mesajTrucat<<endl;
        strcpy(al2Nr, mesajTrucat);
        mesajTrucat = strtok(NULL,";#");
    }
       if(mesajTrucat!=NULL)
    {
        cout<<"Al treilea numar:  "<<mesajTrucat<<endl;
        strcpy(al3Nr, mesajTrucat);
        mesajTrucat = strtok(NULL,";#");
    }
        if(mesajTrucat!=NULL)
    {
        cout<<"Al patrulea numar:  "<<mesajTrucat<<endl;
        strcpy(al4Nr, mesajTrucat);
        mesajTrucat = strtok(NULL,";#");
    }
        if(mesajTrucat!=NULL)
    {
        cout<<"Mesajul de alarma:  "<<mesajTrucat<<endl;
        strcpy(alarmaMsg, mesajTrucat);
        alrPtr = &alarmaMsg[0];
        cout<<alarmaMsg<<endl;
        mesajTrucat = strtok(NULL,";#");
    }


    printf("alarma: %s\r\n",alrPtr);
printf("primulNr: %s\r\n",primulNr);





    return 0;
}
