#ifndef SIZE_T
#define SIZE_T unsigned long long
#endif // !SIZE_T

#ifndef Errors
#define Errors
#include <string>

class Error
{
public:
    Error(std::string filename, SIZE_T line,  std::string message);

    const char* what();
    void print_what();

protected:
    std::string err;
};

#endif // !Errors
