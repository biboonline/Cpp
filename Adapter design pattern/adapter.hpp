#include <iostream>

class Target
{
private:
    /* data */
public:
    Target(/* args */);
    virtual int request();
    ~Target();
};

class Adaptee
{
private:
    /* data */
public:
    Adaptee(/* args */);

    ~Adaptee();
};

class Adapter : public Target
{
private:
    Adaptee* adaptee_p;
public:    
    Adapter(Adaptee* adaptee_ptr);
    int request() override;
    ~Adapter();
};



