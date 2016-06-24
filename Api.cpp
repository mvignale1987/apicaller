//
// Created by mauriciovignale on 21/06/16.
//

#include <cstdio>
#include <malloc.h>
#include <cstring>
#include <iostream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using namespace boost::property_tree;

class Api{
private:
    char* id;
    char* protocol;
    char* host;
    char* port;
    char* baseUrl;
public:

    Api() {
        id = (char * )malloc(20 * sizeof(char*));
        protocol = (char * )malloc(20 * sizeof(char*));
        host = (char * )malloc(20 * sizeof(char*));
        port = (char * )malloc(5 * sizeof(char*));
        baseUrl = (char * )malloc(20 * sizeof(char*));
    }
    Api(ptree pt){
        Api();
        strcpy(id,pt.get("Api"));
        strcpy(protocol,pt.get("Protocol"));
        strcpy(host,pt.get("Host"));
        strcpy(port,pt.get("Port"));
        strcpy(baseUrl,pt.get("BaseUrl"));
    }
    char *getId() const {
        return id;
    }

    void setId(char *id) {
        strcpy(Api::id,id);
    }

    char *getProtocol() const {
        return protocol;
    }

    void setProtocol(char *protocol) {
        strcpy(Api::protocol,protocol);
    }

    char *getHost() const {
        return host;
    }

    void setHost(char *host) {
        strcpy(Api::host,host);

    }

    char *getPort() const {
        return port;
    }

    void setPort(char *port) {
        strcpy(Api::port,port);

    }

    char *getBaseUrl() const {
        return baseUrl;
    }

    void setBaseUrl(char *baseUrl) {
        strcpy(Api::baseUrl,baseUrl);

    }

    char* getApiEndpoint() const {
        char* ret = (char*)malloc(40*sizeof(char*));
        ret[0] = '\0';
        return strcat(strcat(strcat(strcat(strcat(ret,protocol),"://"),host),":"),port);
    }

    std::string str(){
        std::stringstream ss;
        ss << "API "<< id << std::endl << "Endpoint\t"<< getApiEndpoint() << std::endl;
        return ss.str().c_str();
    }

    ptree to_property_tree(){
        ptree pt;
        pt.put("Api",id);
        pt.put("Protocol",protocol);
        pt.put("Host",host);
        pt.put("Port",port);
        pt.put("BaseUrl",baseUrl);
        write_json("test.json", pt);
    }
};