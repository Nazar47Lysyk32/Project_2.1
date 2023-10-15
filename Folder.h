#pragma once
#include "FileSystemObject.h"
#include <string>
#include <vector>
using namespace std;

class Folder : public FileSystemObject {
public:

    // ����������� ��� ����� � ������
    Folder(const string& name);

    // ³���������� ���������� ��� �����
    void showInfo() const;

    // ��������� ������ �����
    int getSize() const;

    // ��������� ����� �� �����
    void addFile(const string& name, int size);

    // ��������� ������� �� �����
    void addFolder(const string& name);

    // ��������� ����� �� �� �����
    void remove();

private:
    vector<unique_ptr<FileSystemObject>> contents;
};

