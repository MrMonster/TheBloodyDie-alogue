#include "stateManager.h"

int i = 0;
int main()
{
	
	int boxes[10] = {0,1,2,3,4,5,6,7,8,9};
	int units[8] = {0,1,2,3,4,5,6,7};
	bool quit = false;
	State currentState = COMBAT;

	init(currentState, boxes, units, quit);

	cout << "out of update loop" << endl;

	return 0;
}

void init(State currentState, int boxes[], int units[], bool& quit)
{
	cout << "init" << endl;
	cout << currentState << endl;
	cout << boxes[i] << endl;
	cout << units[i] << endl;
	
	currentState = MENU;
	cout << "quit a" << quit << endl;

	while(!quiting(quit))
	{
		update(currentState, boxes, units, quit);
	}

}

void update(State currentState, int boxes[], int units[], bool& quit)
{
	cout << "update" << endl;
	cout << currentState << endl;
	cout << boxes[i] << endl;
	cout << units[i] << endl;
	currentState = DIALOGUE;
	i++;
	
	quit = _eventHandler.isQuiting(cin, cout);
	cout << "quit b" << quit << endl;
	
	//quiting(quit);

	quiting(quit);
	cout << "quit c" << quit << endl;
	cout << "quit d" << quit << endl;
}

bool quiting(bool& quit)
{
	if(quit)
	{
		return true;
	}//cout << "quit d" << quit << endl;
	else
	{
		return false;
	}
	
}
