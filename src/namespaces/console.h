#ifndef C82323FE_3053_4AEF_996B_66D8898CABAE
#define C82323FE_3053_4AEF_996B_66D8898CABAE

#include <string>

class Console {
private:
    Console() = delete;
    Console(const Console&) = delete;
    Console& operator=(const Console&) = delete;

public:
    static void writeLine(const std::string& message);
    static void write(const std::string& message);
    static void readLine(std::string& message,std::string& data);
};

#endif /* C82323FE_3053_4AEF_996B_66D8898CABAE */
