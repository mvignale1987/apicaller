//
// Created by mauriciovignale on 22/06/16.
//
#include "Api.cpp"

class Method{
private:
    char*   id;
    char*   access;
    //map   headers;
    //map   urlParams;
    char*   httpMethod;
    char*   formData;
    Api*    api;
public:
    char *getId() const {
        return id;
    }

    void setId(char *id) {
        Method::id = id;
    }

    char *getAccess() const {
        return access;
    }

    void setAccess(char *access) {
        Method::access = access;
    }

    char *getHttpMethod() const {
        return httpMethod;
    }

    void setHttpMethod(char *httpMethod) {
        Method::httpMethod = httpMethod;
    }

    char *getFormData() const {
        return formData;
    }

    void setFormData(char *formData) {
        Method::formData = formData;
    }

    Api *getApi() const {
        return api;
    }

    void setApi(Api *api) {
        Method::api = api;
    }
};