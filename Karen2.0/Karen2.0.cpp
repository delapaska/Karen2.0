// Karen2.0.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include "Karen.h"
int main()
{
    Karen kar;
    kar.setFunName("debug");
    kar.complain(kar.getFunName());
    kar.setFunName("error");
    kar.complain(kar.getFunName());
    kar.setFunName("something another");
    kar.complain(kar.getFunName());
}


