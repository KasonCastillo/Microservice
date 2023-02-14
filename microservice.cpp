#include "microservice.h"


string* readFile(int* it, string* entry, int* id, string* mode, string* tData) {
	fstream predata;
	string temp;
	(*it) = 0;
	predata.open("database.txt",fstream::in);
	bool end = predata.eof();
	while(!end) {
		getline(predata, temp);
		(*it)++;
		end = predata.eof();
	}
	predata.close();
	string* database = new string[(*it)];
	
	fstream data;
	data.open("database.txt",fstream::in);
	
	data >> (*entry);
	*id = stoi((*entry));
	data >> *mode;
	getline(data,(*tData));
	(*tData).erase(0,1);
	
	
	*it = 0;
	end = data.eof();
	while(!end) {
		getline(data, database[(*it)]);
		(*it)++;
		end = data.eof();
	}
	
	data.close();
	return database;
}


void databaseEditor(int* it, int id, string mode, string tData, string** database) {
	if (mode == "A") {
		(*database)[(*it)] = tData;
		(*it)++;
	}
	if (mode == "E") {
		(*database)[(id)] = tData;
	}
}


void writeFile(int it, string* database) {
	fstream data;
	data.open("database.txt", fstream::out | fstream::trunc);
	for (int i = 0; i < it; i++) {
		data << database[i] << endl;
	}
	data.close();
}