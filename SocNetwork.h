#pragma once
// ����� ������������� �������� ������ "���������� ����" � ��������� ���� ����������� �������.
#include "Group.h"
#include "Member.h"

class SocNetwork
{
public:
	SocNetwork();

	~SocNetwork();

	void AddGroup(const Group &);         // ����� "���������� ������".

	void DeleteGroup(const Group &);      // ����� "�������� ������"


};

