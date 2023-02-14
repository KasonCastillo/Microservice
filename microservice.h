#ifndef MICROSERVICE_H
#define MICROSERVICE_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>

using namespace std;


string* readFile(int*,string*,int*,string*,string*);
void databaseEditor(int*,int,string,string,string**);
void writeFile(int,string*);

#endif