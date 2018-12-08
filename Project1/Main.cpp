#include "Widget.h"
#include "Button.h"
#include "CheckBox.h"


void Draw(void);
void Mouse(unsigned int button, int x, int y);

CheckBox cb = CheckBox();
int main()
{
	zgl_CreateWindow(640, 480, "The W");
	zgl_SetWindowColor(ZGL_GRAY);
	zgl_SetFontColor(ZGL_BLACK);
	zgl_SetDrawColor(ZGL_DARKGRAY);


	zgl_SetUserDrawFunction(Draw);
	zgl_SetUserMouseFunction(Mouse);

	

	return zgl_Main();
}

void Mouse(unsigned int button, int x, int y)
{
	cb.MouseClick(x, y);
}

void Draw(void)
{
	//cb.Draw();
}
