import bridges.connect.Bridges;
import bridges.base.WorldMap;


public class world_map {
	public static void main(String[] args) throws Exception {

		// create Bridges object
		Bridges bridges = new Bridges (YOUR_ASSSIGNMENT_NUMBER, "YOUR_USER_ID", "YOUR_API_KEY");
		// set title, description
		bridges.setTitle("Using World Map");
		
		// create a USMap object with the map data
		WorldMap wm = new WorldMap();

		// set data structure
		bridges.setDataStructure(wm);

		// visualize
		bridges.visualize();
	}
}
