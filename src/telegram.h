#include <stdio.h>
#include <curl/curl.h>



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


char* dove_text_to_url_encode( char* msg )
{
    CURL *curl = curl_easy_init();

    if (curl)
    {
        int strg_len = strlen( msg );
        char *output = curl_easy_escape(curl, msg , strg_len);

        if(output) 
        {
            msg = output;
            return msg;
        }
        curl_free(output);
    }
    curl_easy_cleanup(curl);
}


char dove_telegram_text( char* bots_id, char* chat_id, char* message )
{
    // transform message to url encode format 
    char* msg = dove_text_to_url_encode(message);

    // compose text
    char compose[2024];
    snprintf( compose, sizeof(compose), "https://api.telegram.org/bot%s/sendMessage?chat_id=%s&text=%s", bots_id, chat_id, msg );

    // prepare data before send
    char* url = compose;
    dove_telegram_sent(url);
}


