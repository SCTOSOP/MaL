mal:main.o coding_main.o Errors.o REGEXL.o coding_block.o coding_operation.o coding_types.o coding_gds.o
	@g++ build/main.o build/coding_main.o build/Errors.o build/REGEXL.o build/coding_block.o build/coding_operation.o build/coding_types.o build/coding_gds.o -o mal
	@echo ">>>编译成功"

main.o:main.cpp
	@g++ -c -std=c++17 main.cpp -o build/main.o

Errors.o:scr/Errors.cpp include/Errors.h
	@g++ -c -std=c++17 scr/Errors.cpp -o build/Errors.o

coding_main.o:scr/coding_main.cpp include/coding_main.h
	@g++ -c -std=c++17 scr/coding_main.cpp -o build/coding_main.o

REGEXL.o:scr/REGEXL.cpp include/REGEXL.h
	@g++ -c -std=c++17 scr/REGEXL.cpp -o build/REGEXL.o

coding_block.o:scr/coding_block.cpp include/coding_block.h
	@g++ -c -std=c++17 scr/coding_block.cpp -o build/coding_block.o

coding_operation.o:scr/coding_operation.cpp include/coding_operation.h
	@@g++ -c -std=c++17 scr/coding_operation.cpp -o build/coding_operation.o

coding_types.o:scr/coding_types.cpp include/coding_types.h
	@g++ -c -std=c++17 scr/coding_types.cpp -o build/coding_types.o

coding_gds.o:scr/coding_gds.cpp include/coding_gds.h
	@g++ -c -std=c++17 scr/coding_gds.cpp -o build/coding_gds.o

.PHONY:clean_mal
clean_mal:
	@rm mal

.PHONY:clean_build
clean_build:
	@rm build/main.o build/Errors.o build/coding_main.o build/REGEXL.o build/coding_block.o build/coding_operation.o build/coding_types.o build/coding_gds.o

.PHONY:mt
mt:mal
	@./mal 1 test/test1.MaL

.PHONY:test
test:
	@./mal 1 test/test1.MaL