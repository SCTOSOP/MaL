mal:main.o coding_main.o Errors.o REGEXL.o coding_block.o coding_operation.o coding_types.o
	@g++ main.o coding_main.o Errors.o REGEXL.o coding_block.o coding_operation.o coding_types.o -o mal
	@echo ">>>编译成功"

main.o:main.cpp
	@g++ -c -std=c++17 main.cpp

Errors.o:scr/Errors.cpp include/Errors.h
	@g++ -c -std=c++17 scr/Errors.cpp

coding_main.o:scr/coding_main.cpp include/coding_main.h
	@g++ -c -std=c++17 scr/coding_main.cpp

REGEXL.o:scr/REGEXL.cpp include/REGEXL.h
	@g++ -c -std=c++17 scr/REGEXL.cpp

coding_block.o:scr/coding_block.cpp include/coding_block.h
	@g++ -c -std=c++17 scr/coding_block.cpp

coding_operation.o:scr/coding_operation.cpp include/coding_operation.h
	@@g++ -c -std=c++17 scr/coding_operation.cpp

coding_types.o:scr/coding_types.cpp include/coding_types.h
	@g++ -c -std=c++17 scr/coding_types.cpp

.PHONY:clean
clean:
	@rm main.o Errors.o coding_main.o REGEXL.o coding_block.o
	@rm mal

.PHONY:mt
mt:mal
	@./mal 1 test/test1.MaL

.PHONY:test
test:
	@./mal 1 test/test1.MaL