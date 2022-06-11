mal:main.o
	@g++ build/main.o -o mal

main.o:main.cpp
	@g++ -c -std=c++17 main.cpp -o build/main.o

.PHONY:clean_build
clean_build:
	@rm build/main.o

.PHONY:clean_mal
clean_mal:
	@rm mal