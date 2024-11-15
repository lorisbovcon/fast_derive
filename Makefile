
all: derive

derive: cpp_derive.cpp
	g++ -o txt_derive.txt cpp_derive.cpp
	./txt_derive.txt
