#include "adapter.hpp"

Adapter::Adapter(Adaptee* adaptee_ptr) : adaptee_p(adaptee_ptr)
{
    std::cout << "Adapter constructor" << std::endl;
}

int Adapter::request()
{
    return 3;
}

Adapter::~Adapter()
{
    std::cout << "Adapter Destructor" << std::endl;
}

Target::Target(/* args */)
{
    std::cout << "Target constructor" << std::endl;
}

int Target::request()
{
    return 5;
}

Target::~Target()
{
    std::cout << "Target Destructor" << std::endl;
}

Adaptee::Adaptee(/* args */)
{
    std::cout << "Adaptee constructor" << std::endl;
}

Adaptee::~Adaptee()
{
    std::cout << "Adaptee Destructor" << std::endl;
}

// Call by reference
void ClientCode(Target& target_ptr)
{
    std::cout << target_ptr.request() <<std::endl;
}

// Call by address
void ClientCode(Target* target_ptr)
{
    std::cout << target_ptr->request() <<std::endl;
}

int main()
{
    Target target_obj;
    ClientCode(target_obj);
    Adaptee *adaptee_ptr = new Adaptee;
    Adapter *adapter_ptr = new Adapter(adaptee_ptr);
    ClientCode(adapter_ptr);
    delete adaptee_ptr;
    delete adapter_ptr;
}