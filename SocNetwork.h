#pragma once
// Здесь представленно описание класса "Социальная сеть" и прототипы всех необходимых методов.
#include "Group.h"
#include "Member.h"

class SocNetwork
{
public:
	SocNetwork();

	~SocNetwork();

	void AddGroup(const Group &);         // Метод "Добавление группы".

	void DeleteGroup(const Group &);      // Метод "Удаление группы"


};

