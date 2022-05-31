#ifndef Errors
#define Errors
#include <string>

class Error
{
public:
    Error(std::string filename, size_t line,  std::string message);

    const char* what();
    void print_what();

protected:
    std::string err;
};

#endif // !Errors
