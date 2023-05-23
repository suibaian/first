#include <iostream>
#include <graphics.h>
#include "tools.h"

using namespace std;

int main(void)
{
	initgraph(500,280);

	//cout << "hello word" << endl;
	IMAGE a;
	loadimage(&a, "еици.png");
	putimagePNG(0, 0, &a);

	system("pause");
	return 0;
}