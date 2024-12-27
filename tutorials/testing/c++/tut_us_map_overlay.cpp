#include <string>

using namespace std;

#include "Bridges.h"
#include "DataSource.h"
#include "data_src/USState.h"
#include "data_src/USCounty.h"
#include "USMap.h"

using namespace bridges;

// this program illustrates how to access the data of the US state county
// maps and apply attributes to them
int main(int argc, char **argv) {

	// create bridges object
	Bridges bridges (YOUR_ASSSIGNMENT_NUMBER, "YOUR_USER_ID", "YOUR_API_KEY");

	// set title
	bridges.setTitle("Overlaying Data Structure on a US Map");
	bridges.setDescription("All US states, No Counties");
	
	//Some BRIDGES visualization with location
	SLelement<string>  *el0 = new SLelement<string> ("Charlotte", "Go Niners!");
	el0->setLocation(-80.8431, 35.2271); //35.2271N, 80.8431W
	el0->setSize(.1);
	bridges.setDataStructure(el0);

	//Getting map
	DataSource ds(&bridges);
	vector<bridges::dataset::USState> map_data = ds.getUSMapCountyData (); 

	//Styling Mecklenburg County, NC
	for (auto& s : map_data) {
	  if (s.getStateName() == "North Carolina") {
	    auto& mecklenburg = s.accessCounties()["37119"]; //access by fips code
	    mecklenburg.setFillColor(Color(0,255,0));
	  }	    
	}
	//Setting Map overlay
	USMap us_maps(map_data);
	bridges.setMap (us_maps);

	//Visualize!
	bridges.visualize();

	delete el0;
	
	return 0;
}
