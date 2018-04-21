#pragma once
// ����� ������������� �������� ������ "������" � ��������� ���� ����������� �������.
#include "Member.h"

class Group
{
public:
	Group();                                         // ����������� �� ���������.

	~Group();                                        // ����������.

	void AddMember(const Member &);                  // ����� "���������� ���������".

	void DeleteMember(const Member &);               // ����� "�������� ���������".

private:
	int membersCount;                                // ����� ���-�� ���������� � ������
	char groupName;                                  // ��� ������
	Member member;                                   // �������� ������
};

