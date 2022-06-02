

all:
	g++ -c scr/Errors.cpp
	g++ -c scr/coding_main.cpp
	g++ -c main.cpp
	
	g++ main.o coding_main.o Errors.o -o mal

	@rm main.o Errors.o coding_main.o

clean:
	@rm mal