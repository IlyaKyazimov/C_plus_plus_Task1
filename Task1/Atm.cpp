#include "Atm.h"

Atm::Atm(std::string luno, std::string address) try
{
    if (luno.length() != 9)
    {
        throw 1;
    }
    m_luno = luno;
    m_address = address;
    m_id = s_num++;
}
catch (int)
{
    std::cerr << "LUNO is not correct\n";
};

void print(Atm atm)
{
    std::cout << atm.getId() << ". " << atm.getLuno() << " - " << atm.getAddress() << std::endl;
};