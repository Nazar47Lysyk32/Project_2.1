#pragma once
#include "FileSystemObject.h"
#include <string>
#include <vector>
using namespace std;

class Folder : public FileSystemObject {
public:

 // Конструктор для папки з іменем
    Folder(const string& name);

    // Відображення інформації про папку
    void showInfo() const;

    // Отримання розміру папки
    int getSize() const;

    // Додавання файлу до папки
    void addFile(const string& name, int size);

    // Додавання підпапки до папки
    void addFolder(const string& name);

    // Видалення папки та її вмісту
    void remove();

private:
    vector<unique_ptr<FileSystemObject>> contents;
};

