#include "declaration.h"
#include "EventHandler.h"

EventHandler _eventHandler;

enum State{MENU, COMBAT, DIALOGUE};

void init(State currentState, int boxes[], int units[], bool& quit);
void update(State currentState, int boxes[], int units[], bool& quit);
bool quiting(bool& quit);

