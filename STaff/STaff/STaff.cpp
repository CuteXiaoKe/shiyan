#include "STaff.h"
#include "AddSTaff.h"
#include "ChangeSTaff.h"
#include "deleteStaff.h"
#include  "findOne.h"
#include "Exit.h"
#include <iostream>
using namespace std;
STaff::STaff(){
    menu.append(new AddSTaff());
    menu.append(new ChangeSTaff());
    menu.append(new deleteSTaff());
	menu.append(new findOne());
    menu.append(new Exit());
}
void STaff::run(){
	staffhouse.readin();
	menu.run();
}