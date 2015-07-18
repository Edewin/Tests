/*
 ============================================================================
 Name        : test1.c
 Author      : Eduard Soltuzu
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef uint u8;

u8 buffer[13]={1,3,8,0,0,0,0,0,3,0x88,0xe2,131,158};

int main(void)
{


    int i;

    for(i=0;i<13;i++)
    {

        printf("buffer[%d]=%x\r\n",i,buffer[i]);

    }

    int buf[4];
    buf[0] = buffer[7];
    buf[1] = buffer[8];
    buf[2] = buffer[9];
    buf[3] = buffer[10];


    long int data =0;

    char myS[20];
    char myS1[4];
    char myS2[4];
    char myS3[4];
    char myS4[4];

    printf("\n\r*******Data*********\n\r");
    for(i=0;i<4;i++)
    {
        printf("buf[%d]=%x\r\n",i,buf[i]);
    }
    printf("********************\n\r");

    	//pun intr-un string valoare unui registru
        sprintf(myS1,"%x",buf[0]);
        sprintf(myS2,"%x",buf[1]);
        sprintf(myS3,"%x",buf[2]);
        sprintf(myS4,"%x",buf[3]);


        printf("myS1=%s\r\n",myS1);
        printf("myS2=%s\r\n",myS2);
        printf("myS3=%s\r\n",myS3);
        printf("myS4=%s\r\n",myS4);

        //aduna toate string-urile intr-unul singur
        strcpy(myS, myS1);
        strcat(myS, myS2);
        strcat(myS, myS3);
        strcat(myS, myS4);

        char* pEnd;
        printf("\n\r*******Result*********\n\r");
        printf("myS = \"%s\"(string hex)\r\n",myS);

        data = strtol(myS,&pEnd,16); //convert string to long int

        printf("data = %d (long int)\r\n",data);
        printf("********************\n\r");

    return 0;
}
