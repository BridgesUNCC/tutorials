from bridges.bridges import *
from bridges.data_src_dependent import *
from bridges.dl_element import *
from bridges.world_map import *

def main():
    # create the Bridges object, set credentials
    bridges = Bridges(YOUR_ASSSIGNMENT_NUMBER, "YOUR_USER_ID", "YOUR_API_KEY")

    # set title, description
    bridges.set_title("World Map Using BRIDGES")

    #country_data = get_world_map_data(['Australia', 'Germany', 'France'])
    country_data = get_world_map_data()
    wm = WorldMap(country_data)
    
    #visualizes world map
    bridges.set_data_structure(wm)
    bridges.set_json_flag(True)
    bridges.visualize()

if __name__ == '__main__':
    main()
