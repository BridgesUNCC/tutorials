from bridges.bridges import *
from bridges.data_src_dependent import *
from bridges.dl_element import *
from bridges.world_map import *

def main():
    # create the Bridges object, set credentials
    bridges = Bridges(YOUR_ASSSIGNMENT_NUMBER, "YOUR_USER_ID", "YOUR_API_KEY")

    # set title, description
    bridges.set_title("World Map Using BRIDGES")
    bridges.set_description("Draws all countries and their boundaries in a default color")

    # with no arguments to the function, gets all countries of the world
    country_data = get_world_map_data()
    wm = WorldMap()

    #visualizes world map
    bridges.set_map(wm);
    bridges.set_data_structure(wm)
    bridges.visualize()

if __name__ == '__main__':
    main()
