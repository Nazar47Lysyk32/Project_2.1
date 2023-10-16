#pragma once
#include <string>
#include <string>
#include <vector>
using namespace std;

class FileSystemObject {
public:

    // Конструктор для ініціалізації імені об'єкта
    FileSystemObject(const string& name);

    // Відображення інформації про об'єкт
    void showInfo() const;

   // Перейменування об'єкта
    void rename(const string& new_name);

    // Видалення об'єкта
    void remove();

    // Отримання розміру об'єкта
    int getSize() const;


protected:
    string name;
};
