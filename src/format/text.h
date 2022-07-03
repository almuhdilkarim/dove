#include <stdio.h>
#include <curl/curl.h>

int main(void)
{
    // curl example
    // https://riptutorial.com/curl/example/18971/use-the-libcurl-easy-c-api-to-get-a-remote-resource
    /* 
    CURL *curl;
    CURLcode res;

    curl = curl_easy_init();

    if(curl) 
    {
        curl_easy_setopt(curl, CURLOPT_URL, "https://api.telegram.org/bot870824884:AAFE4ryWK9mYCpJAfjteJeL4PiCHRmPFwLk/sendMessage?chat_id=-1001722017609&text=test%20on%20c%20native");

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
    } */
}
