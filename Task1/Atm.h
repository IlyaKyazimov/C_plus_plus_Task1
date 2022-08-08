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

    Atm(const std::string& luno, const std::string& address);

    const int getId() const { return m_id; };

    const std::string& getLuno() const { return m_luno; };

    const std::string& getAddress() const { return m_address; };
};

void print(const Atm& atm);

#endif