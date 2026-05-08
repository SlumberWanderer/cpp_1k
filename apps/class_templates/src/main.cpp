#include "app.hpp"

int main() {
    std::cout << "StaticArray (Fixed Buffers)" << std::endl;
    StaticArray<int, 4> sArr;
    for (size_t i = 0; i < sArr.size(); ++i) sArr[i] = (i + 1) * 100;
    for (size_t i = 0; i < sArr.size(); ++i) std::cout << sArr[i] << " ";
    
    std::cout << std::endl;
    std::cout << "\nDynamicArray (Heap Management)" << std::endl;
    DynamicArray<std::string> d1(2);
    d1[0] = "network-manager";
    d1[1] = "display-manager";
    
    DynamicArray<std::string> d2 = std::move(d1);
    std::cout << "Active: " << d2[0] << ", " << d2[1] << std::endl;
    std::cout << "Original size: " << d1.getSize() << std::endl ;

    std::cout << std::endl;
    std::cout << "SharedPointer (Resource Tracking)" << std::endl;
    {
        SharedPointer<SystemProcess> p1(new SystemProcess(1, "systemd"));
        std::cout << "Subscribers: " << p1.use_count() << std::endl;
        {
            SharedPointer<SystemProcess> p2 = p1;
            std::cout << "Subscribers (sub-shell): " << p1.use_count() << std::endl;
            p2->status();
        }
        std::cout << "Subscribers (after exit): " << p1.use_count() << std::endl;
    }

    return 0;
}