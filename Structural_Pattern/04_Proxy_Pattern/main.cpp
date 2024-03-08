#include "proxy_pattern.hpp"

int main(){
    RealSbject* realsbject = new RealSbject();
    Proxy* proxy = new Proxy(realsbject);
    proxy->Function_A();
    proxy->Function_B();
    return 0;
}