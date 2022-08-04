#ifndef ATM_H
#define ATM_H

#include <iostream>

class Atm
{
private:
    static int s_num;
    int m_id;
    std::string m_luno;
    std::string m_address;

public:
    Atm(std::string luno, std::string address);

    int getId() { return m_id; };
    std::string getLuno() { return m_luno; };
    std::string getAddress() { return m_address; };
};

void print(Atm atm);

#endif