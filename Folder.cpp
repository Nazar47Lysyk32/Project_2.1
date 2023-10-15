#include "Folder.h"
#include <iostream>
#include <string>
#include <vector>
#include "File.h"
using namespace std;

Folder::Folder(const string& name) : FileSystemObject(name) {}

void Folder::showInfo() const {
    cout << "Folder: " << name << endl;
}

int Folder::getSize() const {
    int totalSize = 0;
    for (const auto& item : contents) {
        totalSize += item->getSize();
    }
    return totalSize;
}

void Folder::addFile(const string& name, int size) {
    contents.push_back(make_unique<File>(name, size));
}

void Folder::addFolder(const string& name) {
    contents.push_back(make_unique<Folder>(name));
}

void Folder::remove() {
    for (auto& item : contents) {
        item->remove();
    }
    // Видалення самої папки
}