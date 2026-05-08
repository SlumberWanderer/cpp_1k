#pragma once
#include <iostream>
#include <string>

struct SystemProcess {
    int pid;
    std::string name;
    
    SystemProcess(int p, std::string n) : pid(p), name(n) {
        std::cout << "[ OK ] Started " << name << " (PID: " << pid << ")\n";
    }
    
    ~SystemProcess() {
        std::cout << "[STOP] Stopped " << name << " (PID: " << pid << ")\n";
    }
    
    void status() const {
        std::cout << "Unit " << name << ".service is active (running)\n";
    }
};