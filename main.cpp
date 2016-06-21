#include <iostream>

#include <stdio.h>
#include <curl/curl.h>
#include <cstring>
//#include <boost/property_tree/ptree.hpp>
//#include <boost/property_tree/json_parser.hpp>
//#include <boost/filesystem/fstream.hpp>


using namespace std;

void show_usage() {
    cout << "usage: apicaller <command>" << endl << endl;
    cout << "This are most notable apicaller commands:" << endl;
    cout << "create\t\t\tcreates an API profile, launches a wizard" << endl;
    cout << "delete <id>\t\tdeletes an API profile" << endl;
    cout << "add\t\t" << endl;
    cout << "remove\t\t" << endl;
}

int main(int argc, char *argv[]) {

    if (argc == 1) {
        show_usage();
        return 0;
    } else {
        if (strcmp(argv[0], "create")) {
            return 0;
        } else if (strcmp(argv[0], "delete")) {

        } else if (strcmp(argv[0], "add")) {

        } else if (strcmp(argv[0], "remove")) {

        } else {
            show_usage();
            return 0;
        }
    }


    return 0;
}