#include <stdio.h>
#include <curl/curl.h>
#include "url/url_encode.h"


char dov_telegram_main() {
    
}


char dove_telegram_sent( char* url )
{
    CURL *curl = curl_easy_init();
    CURLcode res;

    if(curl) 
    {
        // sent data
        curl_easy_setopt(curl, CURLOPT_URL, url );

        // example.com is redirected, so we tell libcurl to follow redirection 
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);

        // Perform the request, res will get the return code 
        res = curl_easy_perform(curl);

        // Check for errors 
        if(res != CURLE_OK)
        fprintf(stderr, "curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));

        // always cleanup 
        curl_easy_cleanup(curl);
    } 
}


char* dove_text_prep( char* raw )
{
    int i=0;
    
    while(raw[i]!='\0')
    {
        // space encode
        if( raw[i]=='n' && raw[i-1]=='\\' )
        {       
            /*
            raw[i+6]=0; 
            raw[i+5]=raw[i+4]; 
            raw[i+4]=raw[i+3]; 
            raw[i+3]=raw[i+2]; 
            raw[i+2]=raw[i+1]; 
            raw[i+1]=' '; 
            */
            printf( "%d", i );
        }
       
        i++;
    }
    // return raw;
}


// send text message to telegram boot
char dove_telegram_text( char* bots_id, char* chat_id, char *message )
{
    // message procesor
    dove_text_prep(message);
 

    // url encode
    // char* enc = url_encoder(pre);
    
    // url sanitize
    // char* msg = url_escape(enc);

    // compose text
    // char compose[2024];
    // snprintf( compose, sizeof(compose), "https://api.telegram.org/bot%s/sendMessage?chat_id=%s&text=%s", bots_id, chat_id, enc );

    // prepare data before send
    // char* url = compose;
    // dove_telegram_sent(url);
}

// send image to telegram boot
char dove_telegram_image() 
{

}

// send image to telegram boot
char dove_telegram_audio()
{

}

