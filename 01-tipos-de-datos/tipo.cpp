#include<cassert>
#include<iostream>
#include<iomanip>
#include<string>


int main()
{
    assert(2==1+1);
    assert(false == false);
// prueba de tipo de dato double
assert(1.0==0.0+1.0);
assert(0.1==1.0/10.0);
//assert(1.0== 0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);
//std:: cout << std::setprecision(17)<<1.0/5.0<<'\n';

//prueba de string
assert("\"pacheco\"s==\"pa\"s+\"checo\"s");

}