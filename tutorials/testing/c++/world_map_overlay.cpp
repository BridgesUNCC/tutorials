#include <string>

using namespace std;

#include "Bridges.h"
#include "DataSource.h"

using namespace bridges;

int main(int argc, char **argv) {

	// create bridges object
	Bridges bridges (YOUR_ASSSIGNMENT_NUMBER, "YOUR_USER_ID", "YOUR_API_KEY");

	// set title
	bridges.setTitle("Using World Map overlay");

	DataSource ds(&bridges);

	bridges.setMapOverlay(true);
	bridges.setCoordSystemType("equirectangular");
	bridges.setMap("all");
	
	SLelement<string>  *el0 = new SLelement<string> ("Charlotte", "Go Niners!");
	el0->setLocation(-80.8431, 35.2271); //35.2271N, 80.8431W
	
	
	bridges.setDataStructure(el0);
	bridges.visualize();

	return 0;
}
