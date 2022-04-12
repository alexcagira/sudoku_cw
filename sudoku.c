#include "sudoku.h"

int UNSOLVED = 81;
int SIZE_ROWS = 9;
int SIZE_COLUMNS = 9;

int main()
{
	int ** frame;
	int progress;
	Sudoku * sudoku;
	
	frame = createFrame();
	
	sudoku = setUpFrame(frame);
	
	printFrame(sudoku->squares);
	
	while(UNSOLVED > 0)
	{
		progress = checkFrame(sudoku->squares, sudoku->boxes);
		
		if(progress == 0)
		{
		printf("\nFailed to solve the sudoku!\n\n");
		break;
		}
	}
	
	printFrame(sudoku->squares);
	
	return 0;
}