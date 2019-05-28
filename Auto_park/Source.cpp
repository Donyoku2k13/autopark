#include "AutoPark.h"
#include "bus.h"
#include <string.h>
using namespace std;
void main() {
	AutoPark a("almatinskiy");
	a.addBus(bus("Vaslily I.P.", 6642, 66, "Youngman", 2001, 1000));
	a.addBus(bus("Vaslily I.I.", 3214, 66, "Youngman", 1990, 10000));
	a.addBus(bus("Evgeniy A.A.", 5463, 66, "Youngman", 2005, 1500));
	a.addBus(bus("Alexandr V.I.", 8798, 66, "Youngman", 1996, 11000));



	system("pause");
}