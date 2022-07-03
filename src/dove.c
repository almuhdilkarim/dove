#include <stdio.h>
#include <curl/curl.h>
#include <string.h>

// char contional : error segmentaion fault
// https://bytes.com/topic/c/answers/162182-argv-2-comparing-d
 
int main( int argc, char* argv[] )
{
    if ( argc > 1 )
    {
        if ( strcmp(argv[1], "-a") == 0) 
        {
            // audio operation
            printf("audio \n");
            printf("Audio argument is: %s\n", argv[2]);  
        }
        else if ( strcmp(argv[1], "-d") == 0 ) 
        {
            // document operation
            printf("document \n");
            printf("Docs argument is: %s\n", argv[2]);  
        }
        else if ( strcmp(argv[1], "-l") == 0 ) 
        {
            // location operation
            printf("location \n");
            printf("Loc argument is: %s\n", argv[2]);  
        }
        else if ( strcmp(argv[1], "-p") == 0 ) 
        {
            // photo operation
            printf("photo \n");
            printf("Image argument is: %s\n", argv[2]);  
        }
        else if ( strcmp(argv[1], "-t") == 0 ) 
        {
            // photo operation
            printf("text \n");
            printf("Text argument is: %s\n", argv[2]);  
        }
        else if ( strcmp(argv[1], "-v") == 0 ) 
        {
            // video operation
            printf("video \n");
            printf("Video argument is: %s\n", argv[2]);  
        }
        else 
        {
            printf("format arguments not found \n");
        }
    }
    else
    {
        printf("Error Incomplete Arguments , use --help to see all options \n");
    }
    return 0;
}