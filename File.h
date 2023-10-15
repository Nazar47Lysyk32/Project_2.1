#pragma once
#include "FileSystemObject.h"
#include <vector>
#include <string>
using namespace std;

class File : public FileSystemObject {
public:

    // ����������� ��� ����� � ������ � �������
    File(const string& name, int size);

    // ³���������� ���������� ��� ����
    void showInfo() const;

    // ��������� ������ �����
    int getSize() const;

private:
    int size;// ����� �����
};

