//
// Created by mauriciovignale on 22/06/16.
//
#include "Method.h"


char *Method::getId() const {
    return id;
}

void Method::setId(char *id) {
    Method::id = id;
}

char *Method::getAccess() const {
    return access;
}

void Method::setAccess(char *access) {
    Method::access = access;
}

char *Method::getHttpMethod() const {
    return httpMethod;
}

void Method::setHttpMethod(char *httpMethod) {
    Method::httpMethod = httpMethod;
}

char *Method::getFormData() const {
    return formData;
}

void Method::setFormData(char *formData) {
    Method::formData = formData;
}
