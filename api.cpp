//
// Created by mauriciovignale on 21/06/16.
//

class api{
private:
    char* protocol;
    char* host;
    char* port;
    char* baseUrl;
    char* api;
public:
    char* getEndpoint(){
        return protocol + "://"+host+":"+port;
    }

};