//
// Created by mauriciovignale on 22/06/16.
//
#ifndef APICALLER_METHOD_H
#define APICALLER_METHOD_H
#include "Api.h"

class Method{
private:
    char*   id;
    char*   access;
    //map   headers;
    //map   urlParams;
    char*   httpMethod;
    char*   formData;
public:
    char *getId() const;

    void setId(char *id);

    char *getAccess() const;

    void setAccess(char *access);

    char *getHttpMethod() const;

    void setHttpMethod(char *httpMethod);

    char *getFormData() const;

    void setFormData(char *formData);

};

#endif //APICALLER_METHOD_H