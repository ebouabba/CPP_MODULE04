#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(std::string idea);
    Brain(const Brain &c);
    Brain &operator=(const Brain &c);
    std::string *getidea();
    ~Brain();
};

#endif