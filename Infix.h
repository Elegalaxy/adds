#ifndef Infix_H
#define Infix_H
#include <string>

class Infix{
    public:
        Infix();
        Infix(std::string s);
        void setNot(std::string s); //Setter
        std::string getNot(); //Getter
        void convert(); //Convert prefix into infix
    private:
        std::string note; //Notation
};

#endif