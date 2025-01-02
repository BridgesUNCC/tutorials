#include <string>

using namespace std;

#include "Bridges.h"
#include "DataSource.h"
#include "WorldMap.h"

#include "USMap.h"

using namespace bridges;

// this program illustrates how to access the data of the US state county
// maps and apply attributes to them
int main(int argc, char **argv) {

	// create bridges object
	Bridges bridges (YOUR_ASSSIGNMENT_NUMBER, "YOUR_USER_ID", "YOUR_API_KEY");

	// set title
	bridges.setTitle("Accessing US State County Maps");

	DataSource ds(&bridges);

	cout << "Retrieving US State County Map Data" << endl;


	// case 1 : map and counties  of  a few states

	bridges.setMap(WorldMap());
	  
	SLelement<string>  *el0 = new SLelement<string> ("Charlotte", "Go Niners!");
	el0->setLocation(-80.8431, 35.2271); //35.2271N, 80.8431W

	for (int k = 0; k < 101; k++) {
		if (k) {
			SLelement<string>  *el = new SLelement<string> ("Charlotte", "Go Niners!");
			el->setLocation(-80.8431, 35.2271); //35.2271N, 80.8431W

			el->setNext(el0);
			el0 = el;
		}
	}

	bridges.setDataStructure(el0);

	bridges.visualize();

	
	return 0;
}
