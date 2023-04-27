#pragma once
#include <iostream>
#include "MPP.h"

using namespace std;
class Sistema
{
private:
	MPP* matriz;
public:
	Sistema();
	void Menu();
	void MenuPartidaPerso();
	void MenuPartidaPrefab();
};

