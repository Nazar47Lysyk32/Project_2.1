#include "FileSystemObject.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

FileSystemObject::FileSystemObject(const string& name) : name(name) {}

void FileSystemObject::showInfo() const {
    cout << "Name: " << name << endl;
}

void FileSystemObject::rename(const string& new_name) {
    name = new_name;
}

void FileSystemObject::remove() {
    // Реалізація видалення об'єкта з файлової системи
}

int FileSystemObject::getSize() const {
    return 0;
}
