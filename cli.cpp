#include <iostream>
#include <cstring>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/filesystem/fstream.hpp>

#include "Api.cpp"

using namespace std;

void show_usage() {
    cout << "usage: apicaller <command>" << endl << endl;
    cout << "This are most notable apicaller commands:" << endl;
    cout << "create\t\t\tcreates an API profile, launches a wizard" << endl;
    cout << "delete <id>\t\tdeletes an API profile" << endl;
    cout << "add\t\t" << endl;
    cout << "remove\t\t" << endl;
}
void create_wizard(){
    Api * api = new Api();
    char* command = (char *) malloc(40 * sizeof(char*));
    cout << "insert an Id for this API :" << endl;
    cin >> command; api->setId(command); command[0]= '\0';

    cout << "insert an IP/host for this API :" << endl;
    cin >> command; api->setHost(command); command[0]= '\0';

    cout << "insert a port for this API :" << endl;
    cin >> command; api->setPort(command); command[0]= '\0';

    cout << "insert a base URL (the fixed part of the URL) for this API :" << endl;
    cin >> command; api->setBaseUrl(command); command[0]= '\0';

    api->setProtocol("http");

    cout << api->str();
    ptree pt = api->to_property_tree();
    write_json(std::cout,pt);
    ptree otroTree;
    read_json("test.json",otroTree);
    Api* otraApi = new Api(otroTree);
    free(command);
}

int main(int argc, char *argv[]) {

    if (argc == 1) {
        show_usage();
    } else {
        if (strcmp(argv[0], "create")) {
            create_wizard();
        } else if (strcmp(argv[0], "delete")) {
//            create_wizard();
        } else if (strcmp(argv[0], "add")) {
//            create_wizard();
        } else if (strcmp(argv[0], "remove")) {
//            create_wizard();
        } else {
            show_usage();
        }
    }


    return 0;
}