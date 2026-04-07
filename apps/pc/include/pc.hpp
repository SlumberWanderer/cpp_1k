#pragma once 
#include <iostream>
#include <string>
using namespace std;

class pc {
private:
    string processor;
    int ram;
    int storage;
    string gpu;

public:
    pc(const string& proc, int r, int stor, const string& g)
        : processor(proc), ram(r), storage(stor), gpu(g) {
    }

    string getProcessor() const { return processor;}
    int getRam() const { return ram;}
    int getStorage() const { return storage;}
    string getGpu() const { return gpu;}

    void print() const {
        cout << "Info of PC" << endl;
        cout << "Processor: " << processor << endl;
        cout << "RAM: " << ram << endl;
        cout << "Storage: " << storage << endl;
        cout << "GPU: " << gpu << endl;  
    }
};