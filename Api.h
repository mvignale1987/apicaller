//
// Created by mauriciovignale on 27/06/16.
//

#ifndef APICALLER_API_H
#define APICALLER_API_H
#include "Method.h"
#include <cstdio>
#include <malloc.h>
#include <cstring>
#include <iostream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/ptr_container/ptr_list.hpp>

using namespace boost::property_tree;

class Api{
private:
    char* id;
    char* protocol;
    char* host;
    char* port;
    char* baseUrl;
public:

    Api();

    Api(ptree pt);

    char *getId() const;

    void setId(char *id);

    char *getProtocol() const;

    void setProtocol(char *protocol);

    char *getHost() const;

    void setHost(char *host);

    char *getPort() const;

    void setPort(char *port);

    char *getBaseUrl() const;

    void setBaseUrl(char *baseUrl);

    char* getApiEndpoint() const;

    std::string str();

    ptree to_property_tree();

};
#endif //APICALLER_API_H
