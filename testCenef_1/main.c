#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

typedef uint8_t u8;

u8 buffer[20];

int main(void)
{
    buffer[0] = 1;
    buffer[1] = 3;
    buffer[2] = 8;
    buffer[3] = 0;
    buffer[4] = 0;
    buffer[5] = 0;
    buffer[6] = 0;
    buffer[7] = 0;
    buffer[8] = 3;
    buffer[9] = 0x82;
    buffer[10] = 0xe2;
    buffer[11] = 131;
    buffer[12] = 158;
    u8 * ptrBuffer = &buffer[7];
    u8 * ptrBuffer2 = &buffer[0];
    int i,j;
    for(i=0;i<13;i++)
    {

        printf("buffer[%d]=%x\r\n",i,buffer[i]);

    }
    u8 buf[4];
    buf[0] = buffer[7];
    buf[1] = buffer[8];
    buf[2] = buffer[9];
    buf[3] = buffer[10];
    u8* bufPtr =NULL;
    long int data =0;
    char myS[20];

    for(i=0;i<4;i++)
    {
        //strcat(myS,(char*)&buf[i]);
        printf("buf[%d]=%x\r\n",i,buf[i]);
       // printf("myS = %s\r\n",myS);
    }


        sprintf(&myS[0]," %x ",buf[0]);
        sprintf(&myS[1],"%x",buf[1]);
        sprintf(&myS[2],"%x",buf[2]);
        sprintf(&myS[3],"%x",buf[2]);
        sprintf(&myS[4],"%x",buf[3]);

        char* pEnd;
        printf("myS = \"%s\"\r\n",myS);
        data = strtol(myS,&pEnd,16);
        printf("data = %d\r\n",data);


    return 0;
}
    /*
    int menuswitch=1;
    int amountofstudents;
    char fname[50][100];
    char lname[50][100];
    char grade[50][100];
    int i;
    char studentinfo[100];
    printf("Enter Amount of Students: ");
    scanf("%d\r\n", &amountofstudents);
    printf("Introduceti: Prenumele;Numele;Clasa;\r\n ");
    for (i=0;i<amountofstudents;i++)
    {

        gets(studentinfo);
        strcpy(fname[i], strtok(studentinfo, " ;"));
        strcpy(lname[i], strtok(NULL, " ;"));
        strcpy(grade[i], strtok(NULL, " ;"));
        printf("fname: %s\r\n", fname);
        printf("lname: %s\r\n", lname);
        printf("grade: %s\r\n", grade);
    }
    printf("fname: %s\r\n", fname);
    printf("lname: %s\r\n", lname);
    printf("grade: %s\r\n", grade);
    return 0;
}
*/
/*
char mesajTest[] = "0746882526;123456789;65498731;4568795421#alloy in desert";
char* ptrMsg = &mesajTest[0];

static char primulNr[200];
static char al2Nr[] = "";
static char al3Nr[] = "";
static char al4Nr[] = "";
static char alarmaMsg[] = "";
char dest[] = "";


char* mesajTrucat = NULL;

int main()
{
    printf("ptrMsg is %s\r\n",ptrMsg);
    printf("Hello world!\n");
    mesajTrucat =strtok(ptrMsg, "#");
    printf("mesajTrucat = %s\r\n",mesajTrucat);
    char* nrTelefon= (char*)malloc(strlen(mesajTrucat)+1);
    nrTelefon= mesajTrucat;
    printf("nrTelefon = %s \r\n",nrTelefon);
    printf("nr de telefon: %d\r\n", strlen(nrTelefon));
    mesajTrucat = strtok(ptrMsg, ";#");
    if(mesajTrucat!=NULL)
    {
        //cout<<"Primul numar:  "<<mesajTrucat<<endl;
        strcpy(primulNr, mesajTrucat);
        //const char* nrTelefon2 =
        mesajTrucat = strtok(NULL,";#");
    }
    printf("primul nr: %s\r\n", primulNr);
     if(mesajTrucat!=NULL)
    {
        //cout<<"Al doilea numar:  "<<mesajTrucat<<endl;
        strcpy((char*)al2Nr, (char*)mesajTrucat);
        //memcpy(dest, (char*)mesajTrucat, strlen(al2Nr)+1);
        mesajTrucat = strtok(NULL,";#");
    }
       if(mesajTrucat!=NULL)
    {
        //cout<<"Al treilea numar:  "<<mesajTrucat<<endl;
        strcpy(al3Nr, mesajTrucat);
        printf("al3Nr: %s\r\n", al3Nr);
        mesajTrucat = strtok(NULL,";#");
    }
        printf("al3Nr: %s\r\n", al3Nr);
        if(mesajTrucat!=NULL)
    {
        //cout<<"Al patrulea numar:  "<<mesajTrucat<<endl;
        strcpy(al4Nr, mesajTrucat);
        mesajTrucat = strtok(NULL,";#");
    }
        if(mesajTrucat!=NULL)
    {
        //cout<<"Mesajul de alarma:  "<<mesajTrucat<<endl;
        strcpy(alarmaMsg, mesajTrucat);
        printf("alarmaMsg = %s\r\n",alarmaMsg);
        //cout<<alarmaMsg<<endl;
        //mesajTrucat = strtok(NULL,";#");
    }
    printf("nr de telefon: %s\r\n", nrTelefon);
    printf("nr de telefon: %s\r\n", nrTelefon);
    printf("nr de telefon: %d\r\n", &nrTelefon[0]);
    printf("nr de telefon: %d\r\n", &nrTelefon[strlen(nrTelefon)+1]);
    printf("nr de telefon: %d\r\n", strlen(nrTelefon));
    printf("primul nr: %s\r\n", primulNr);
    printf("primul nr: %c\r\n", primulNr[3]);
    free(nrTelefon);
    return 0;
}
*/
