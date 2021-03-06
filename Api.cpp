//
// Created by mauriciovignale on 21/06/16.
//
#include "Api.h"

Api::Api() {
    id = (char *) malloc(20 * sizeof(char *));
    id[0] = '\0';
    protocol = (char *) malloc(20 * sizeof(char *));
    protocol[0] = '\0';
    host = (char *) malloc(20 * sizeof(char *));
    host[0] = '\0';
    port = (char *) malloc(5 * sizeof(char *));
    port[0] = '\0';
    baseUrl = (char *) malloc(20 * sizeof(char *));
    baseUrl[0] = '\0';
}

Api::Api(ptree pt) {
    id = (char *) malloc(20 * sizeof(char *));
    id[0] = '\0';
    protocol = (char *) malloc(20 * sizeof(char *));
    protocol[0] = '\0';
    host = (char *) malloc(20 * sizeof(char *));
    host[0] = '\0';
    port = (char *) malloc(5 * sizeof(char *));
    port[0] = '\0';
    baseUrl = (char *) malloc(20 * sizeof(char *));
    baseUrl[0] = '\0';
    strcpy(id, pt.get<std::string>("Api").c_str());
    strcpy(protocol, pt.get<std::string>("Protocol").c_str());
    strcpy(host, pt.get<std::string>("Host").c_str());
    strcpy(port, pt.get<std::string>("Port").c_str());
    strcpy(baseUrl, pt.get<std::string>("BaseUrl").c_str());
}

char *Api::getId() const {
    return id;
}

void Api::setId(char *id) {
    strcpy(Api::id, id);
}

char *Api::getProtocol() const {
    return protocol;
}

void Api::setProtocol(char *protocol) {
    strcpy(Api::protocol, protocol);
}

char *Api::getHost() const {
    return host;
}

void Api::setHost(char *host) {
    strcpy(Api::host, host);

}

char *Api::getPort() const {
    return port;
}

void Api::setPort(char *port) {
    strcpy(Api::port, port);

}

char *Api::getBaseUrl() const {
    return baseUrl;
}

void Api::setBaseUrl(char *baseUrl) {
    strcpy(Api::baseUrl, baseUrl);

}

char *Api::getApiEndpoint() const {
    char *ret = (char *) malloc(40 * sizeof(char *));
    ret[0] = '\0';
    return strcat(strcat(strcat(strcat(strcat(ret, protocol), "://"), host), ":"), port);
}

std::string Api::str() {
    std::stringstream ss;
    ss << "API " << id << std::endl << "Endpoint\t" << getApiEndpoint() << std::endl;
    return ss.str().c_str();
}

ptree Api::to_property_tree() {
    ptree pt;
    pt.put("Api", id);
    pt.put("Protocol", protocol);
    pt.put("Host", host);
    pt.put("Port", port);
    pt.put("BaseUrl", baseUrl);
    write_json("test.json", pt);
    return pt;
}

