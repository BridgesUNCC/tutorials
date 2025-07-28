#include <string>

using namespace std;

#include "Bridges.h"
#include "DataSource.h"
#include "WorldMap.h"
#include "SLelement.h"

using namespace bridges;

int main(int argc, char **argv) {

	// create bridges object
	Bridges bridges (YOUR_ASSSIGNMENT_NUMBER, "YOUR_USER_ID", "YOUR_API_KEY");

	// set title
	bridges.setTitle("Drawing a World Map");

	// set description
	bridges.setDescription("This example illustrates how to draw a world map of all countries");

	// create a data source
	DataSource ds(&bridges);

	// the following call without arguments will get the data for all countries. Alternately
	// you can specify that with an argument such {"all"}
	vector<Country>  wm_data = ds.getWorldMapData();

	// declare the world map object with the map data	
	WorldMap wm;

	SLelement<string>  *el0 = new SLelement<string> ("Charlotte", "Go Niners!");
    el0->setLocation(-80.8431, 35.2271); //35.2271N, 80.8431W
    
	
	// visualize
	bridges.setMap(wm);
	bridges.setDataStructure(el0);
	bridges.visualize();

    delete el0;
	
	return 0;
}
