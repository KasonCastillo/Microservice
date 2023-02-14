# Microservice for clinical trial database
REQUEST DATA:
	The data will be requested through a file named database.txt
	The first line of the text file should be changed to:
		index of changed entry + mode + updated entry
		ex:5 A Phase 3 Cancer Ongoing Houston
	
	The rest of the lines will be the printed database, which will simply have their entries as simple text
		ex:
		   Clinical Trial 1
		   Clinical Trial 2
		   Clinical Trial 3
		   Clinical Trial 4
	Modes:
		A is for Add, the index provided does not matter for add because it will automatically add it to
		the end of the file.
		E is for Edit, the index provided will be the entry that is changed.
	After ensuring that database.txt is formatted correctly, open the program microservice.exe


RECEIVE DATA:
	The data will be recieved from the text file database.txt.
	The data will be the updated database printed to the file.
	ex:
		Clinical Trial 1
		Clinical Trial 2
		Clinical Trial 3
		Clinical Trial 4
		Phase 3 Cancer Ongoing Houston


BUGS/FEATURES/POTENTIAL ISSUES:
	Behavior unknown when database is empty.
	Behavior unknown when first line is not exactly as formatted.
	Behavior unknown when empty lines are in text file.
	Program will likely crash or worse if database.txt is not present in directory.
	Program only runs once, then closes. Everytime you want to run the program you must re-open the program
	after printing the command and database to the text file.
	Only one command can be taken at a time.
