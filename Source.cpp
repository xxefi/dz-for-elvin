#include <iostream>
using namespace std;
/*
В прошлый раз я написал вам дз по частям компьютера.

Как вы уже поняли, там надо создавать много структур с одинаковыми полями. Реализуйте там наследование.
*/

class Component {
private:
    string model;
public:
    Component(const string& model) : model(model){}
    string getModel() const {
        return model;
    }
};


class Processor : public Component {
private:
    double frequency;
public:
    Processor(const string& model, const double& frequency) : Component(model), frequency(frequency){}
    double getFrequency() const {
        return frequency;
    }
};

class Memory : public Component {
private:
    int capacity;
public:
    Memory(const string& model, const int& capacity) : Component(model), capacity(capacity){}
    int getCapacity() const {
        return capacity;
    }
};

class Storage : public Component {
private:
    int volume;
public:
    Storage(const string& model, const int& volume) : Component(model), volume(volume) {}
    int getVolume() const {
        return volume;
    }
};

class SSD : public Component {
private:
    int volumeSSD;
public:
    SSD(const string& model, const int& volumeSSD) : Component(model), volumeSSD(volumeSSD){}
    int getVolumeSSD() const {
        return volumeSSD;
    }
};

class Computer {
private:
    Processor processor;
    Memory memory;
    Storage storage;
    SSD ssd;
public:
    Computer(const Processor& processor, const Memory& memory, const Storage& storage, const SSD& ssd) : processor(processor), memory(memory), storage(storage), ssd(ssd){}
    void getInfo() {
        cout << "Характеристики: " << endl;
        cout << "Процессор: " << processor.getModel() << " " << processor.getFrequency() << " GHz" << endl;
        cout << "Оперативная память: " << memory.getModel() << " " << memory.getCapacity() << " Гб" << endl;
        cout << "Жёсткий диск: " << storage.getModel() << " " << storage.getVolume() << " Гб" << endl;
        cout << "SSD: " << ssd.getModel() << " " << ssd.getVolumeSSD() << " Гб" << endl;
    }
};


int main() {
    setlocale(LC_ALL, "ru");
    Processor processor("Intel Core i9-9900K", 2.7);
    Memory memory("HYPERX", 16);
    Storage storage("KINGSTON", 500);
    SSD ssd("KINGSTON SSD", 750);
    Computer computer(processor, memory, storage, ssd);
    computer.getInfo();
}
