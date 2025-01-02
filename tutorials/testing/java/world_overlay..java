import java.util.ArrayList;
import java.util.Map;
import bridges.connect.Bridges;
import bridges.connect.DataSource;
import bridges.data_src_dependent.USState;
import bridges.data_src_dependent.USCounty;
import bridges.base.SLelement;
import bridges.base.WorldMap;


public class tut_us_map_p3 {
	public static void main(String[] args) throws Exception {

		// create Bridges object
		Bridges bridges = new Bridges (YOUR_ASSSIGNMENT_NUMBER, "YOUR_USER_ID", "YOUR_API_KEY");
		// set title, description
		bridges.setTitle("Tutorial: Drawing US Map with States and Counties");
		bridges.setDescription("3 US  states, with or without Counties, with varied coloring");

		
		// create a USMap object with the map data
		World wm = new WorldMap();

		// pass it to BRIDGES
		bridges.setMap(wm);
    
		// Plot Charlotte, NC 
		SLelement<String>  el0 = new SLelement<String>("Charlotte", "Go Niners!");
		el0.setLocation(-80.8431, 35.2271); //35.2271N, 80.8431W

		// set data structure
		bridges.setDataStructure(el0);

		// visualize
		bridges.visualize();
	}
}
