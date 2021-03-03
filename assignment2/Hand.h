#ifndef HAND_H
#define HAND_H
#include<string>

class Hand{
    public:
        Hand();
        Hand(std::string s);
        std::string getChoice();
    private:
        std::string choice;
};

#endif