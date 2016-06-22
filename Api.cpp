//
// Created by mauriciovignale on 21/06/16.
//

#include <cstdio>

class Api{
private:
    char* protocol;
    char* host;
    char* port;
    char* baseUrl;
    char* api;
public:
    char* getEndpoint(){
//        return protocol + "://"+host+":"+port;
        return NULL;
    }

    char *getProtocol() const {
        return protocol;
    }

    void setProtocol(char *protocol) {
        Api::protocol = protocol;
    }

    char *getHost() const {
        return host;
    }

    void setHost(char *host) {
        Api::host = host;
    }

    char *getPort() const {
        return port;
    }

    void setPort(char *port) {
        Api::port = port;
    }

    char *getBaseUrl() const {
        return baseUrl;
    }

    void setBaseUrl(char *baseUrl) {
        Api::baseUrl = baseUrl;
    }

    char *getApi() const {
        return api;
    }

    void setApi(char *api) {
        Api::api = api;
    }
};