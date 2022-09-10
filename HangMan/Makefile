#TODO
#• A target to link external libraries and object files.


#DONE
#• A target to install binaries.
#• A target to create object files for the code.
#• A target to delete intermediate files.
#• A target to build the full project.

#target variable 'a'
output: main.o dictio.o game.o
	g++ main.o dictio.o game.o
	
main.o: main.c
	g++ -c main.c
dictio.o: dictio.c dictio.h
	g++ -c dictio.c
game.o: game.c game.h
	g++ -c game.c
	
#delete intermediate files. use 'make clean' 	
clean:
	rm *.o a.out

#install binaries. use 'make install'	
#as there are no files to install are mentioned in the assignment, a replica of what install does usually is given here. 
install:
	cp a.out output.out
	rm a.out
		
