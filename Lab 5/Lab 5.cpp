#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class Ссавці {
public:
    virtual string опис() = 0;
};

class Тварини : public Ссавці {
public:
    virtual string опис() = 0;
};
class Коні : public Тварини {
public:
    string опис() override {
        return "Це кінь. Він має гриву та хвіст.";
    }
};
class Корови : public Тварини {
public:
    string опис() override {
        return "Це корова. Вона дає молоко.";
    }
};
class Люди : public Ссавці {
public:
    string опис() override {
        return "Це людина. Вона ходить як мавпа.";
    }
};
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Коні кінь;
    Корови корова;
    Люди людина;

    cout << кінь.опис() << endl;
    cout << корова.опис() << endl;
    cout << людина.опис() << endl;

    return 0;
}