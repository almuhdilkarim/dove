#include<stdio.h>


char* url_encoder( char* msg )
{
    int i=0;


    while(msg[i]!='\0')
    {
       
        // space encode
        if(msg[i]=='\\' && msg[i+1]=='n')
        {
            msg[i]='%';
        }
        else if(msg[i]=='n' && msg[i-1]=='%')
        {
            msg[i]= '0';
            msg[i+1]= 'A';
        }
        
        i++;
    }
    // printf( "%s", message );

    return msg;
}