#include "stdafx.h"
#include "Draw.h"


Draw::Draw()
{

}



bool Draw::setxychar(int x, int y, const char* pBuf, int len, WORD ColorAttrib)
{
	HANDLE console_handle;
	COORD cursor_coord;
	DWORD actual = 0;

	console_handle = GetStdHandle(STD_OUTPUT_HANDLE);
	cursor_coord.X = x;        // (40-(strlen(buffer)/2)); 
	cursor_coord.Y = y;

	CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
	GetConsoleScreenBufferInfo(console_handle, &csbiInfo);
	WORD wOldColorAttrs;
	wOldColorAttrs = csbiInfo.wAttributes;

	if (ColorAttrib != NULL)
		SetConsoleTextAttribute(console_handle, ColorAttrib);

	//This would be the equivalent to gotoxy(x,y).
	if (SetConsoleCursorPosition(console_handle, cursor_coord))
	{
		// Look up this function in your VC++ help/index
		WriteConsole(console_handle, pBuf, len, &actual, NULL);
		SetConsoleTextAttribute(console_handle, wOldColorAttrs);
		return true;
	}

	SetConsoleTextAttribute(console_handle, wOldColorAttrs);
	return false;
}

// setxychar()  - Overloaded
// this method allows you to print a single character at a location
bool Draw::setxychar(int x, int y, char Buf, WORD ColorAttrib)
{
	return(setxychar(x, y, &Buf, 1));
}

void Draw::gotoxy(int column, int line)
{
	COORD coord;
	coord.X = column;
	coord.Y = line;
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE),
		coord
	);
}



Draw::~Draw()
{
}
