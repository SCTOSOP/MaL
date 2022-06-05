#ifndef CODING_BLOCK
#define CODING_BLOCK

#include <string>
#include <unordered_map>

class CBlock
{
public:
    CBlock(CBlock* p = nullptr);
    ~CBlock();

protected:
    std::unordered_map<std::string,size_t> vars;
    std::unordered_map<std::string,size_t> cons;
    CBlock* parent;

};

#endif //  !CODING_BLOCK