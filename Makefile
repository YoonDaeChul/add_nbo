all: add-nbo

add-nbo : add_nbo.o main.o get_num.o
		g++ -o add-nbo add_nbo.o main.o get_num.o


main.o : add_nbo.h main.cpp

add_nbo.o : add_nbo.h add_nbo.cpp

get_num.o : add_nbo.h get_num.cpp

clean :
		rm -f add-nbo
		rm -f *o