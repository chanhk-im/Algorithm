#pragma once

template <typename T>
class Test {
private:
    int a;
    int b;
    T c;

public:
    Test();
    int getAdd();
    T getc();
    void setNum(int a, int b);
};