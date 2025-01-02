#include <string>

using namespace std;

#include "Bridges.h"
#include "DataSource.h"
#include "WorldMap.h"

using namespace bridges;

int main(int argc, char **argv) {

	// create bridges object
	Bridges bridges (YOUR_ASSSIGNMENT_NUMBER, "YOUR_USER_ID", "YOUR_API_KEY");

	// set title
	bridges.setTitle("Using World Map overlay");

	DataSource ds(&bridges);
	WorldMap wm;
	
	bridges.setMap(wm);
	
	bridges.setDataStructure(&wm);
	bridges.visualize();
	
	return 0;
}
