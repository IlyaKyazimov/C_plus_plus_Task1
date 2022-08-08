#include <exception>
#include "Atm.h"

int Atm::s_num = 1;

Atm::Atm(const std::string& luno, const std::string& address) try
{
    if (luno.length() != 9)
    {
        throw std::invalid_argument("LUNO is not correct\n");
    }

    m_luno = luno;
    m_address = address;
    m_id = s_num++;
}
catch (const std::exception& err)
{
    std::cerr << err.what();
};

void print(const Atm& atm)
{
    std::cout << atm.getId() << ". " << atm.getLuno() << " - " << atm.getAddress() << std::endl;
};
