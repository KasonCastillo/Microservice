#include "microservice.h"


int main() {
	int it;
	string entry;
	int id;
	string mode;
	string tData;
	
	string* database = readFile(&it,&entry,&id,&mode,&tData);
	
	databaseEditor(&it,id,mode,tData,&database);
	
	writeFile(it,database);
	
	delete[] database;
	delete database;
	return 0;
}