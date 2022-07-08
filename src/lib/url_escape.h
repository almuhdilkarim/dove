#include <curl/curl.h>
#include <string.h>

char* url_escape( char* msg )
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
