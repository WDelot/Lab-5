#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class ������ {
public:
    virtual string ����() = 0;
};

class ������� : public ������ {
public:
    virtual string ����() = 0;
};
class ��� : public ������� {
public:
    string ����() override {
        return "�� ���. ³� �� ����� �� ����.";
    }
};
class ������ : public ������� {
public:
    string ����() override {
        return "�� ������. ���� �� ������.";
    }
};
class ���� : public ������ {
public:
    string ����() override {
        return "�� ������. ���� ������ �� �����.";
    }
};
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ��� ���;
    ������ ������;
    ���� ������;

    cout << ���.����() << endl;
    cout << ������.����() << endl;
    cout << ������.����() << endl;

    return 0;
}