all:
	g++ -c -std=c++17 scr/Errors.cpp
	g++ -c -std=c++17 scr/coding_main.cpp
	g++ -c -std=c++17 scr/REGEXL.cpp
	g++ -c -std=c++17 main.cpp
	
	g++ main.o coding_main.o Errors.o REGEXL.o -o mal

	@rm main.o Errors.o coding_main.o REGEXL.o

clean:
	@rm mal