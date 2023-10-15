#pragma once
#include "FileSystemObject.h"
#include <vector>
#include <string>
using namespace std;

class File : public FileSystemObject {
public:

    // Конструктор для файлу з іменем і розміром
    File(const string& name, int size);

    // Відображення інформації про файл
    void showInfo() const;

    // Отримання розміру файлу
    int getSize() const;

private:
    int size;// Розмір файлу
};

