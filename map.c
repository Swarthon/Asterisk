#include "main.h"

// EXAMPLE MAP DEF
map_t example_map = {4,
                             4,
                            {0, 0, 0, 0,
                             0, 1, 2, 1,
                             0, 0, 1, 0,
                             1, 0, 0, 2},
                            {false, false, false, false,
                             false, false, false, false,
                             false, true, false, false,
                             false, false, false, false},
                            {true, false, false, false,
                             false, false, false, false,
                             false, false, false, false,
                             false, false, false, false} };
coord_t example_map_start = {3, 2};
npc_t example_map_npc ( unsigned int x, unsigned int y ){
    npc_t a = {1432, 988, 7, 1, {5763, 42, "Legendary", 9}, false, false, true, 1, 1, 0 };
    npc_t b = {-1, 0, 0, 0, {-1, 0, ' ', 0}, false, false, false, 0, -1, -1};
    if (x == 2 && y == 3){
        return a;
    }
    return b;
}

// TEST MAP DEF
map_t test_map = {6,
                        6,
                       {0, 0, 0, 0, 5, 0,
                        0, 1, 2, 1, 5, 0,
                        0, 0, 1, 0, 0, 5,
                        1, 0, 0, 2, 5, 2,
                        0, 0, 0, 5, 5, 5,
                        5, 0, 0, 0, 3, 0 },
                       {false, false, false, false,
                        false, false, false, false,
                        false, true, false, false,
                        false, false, false, false},
                       {true, false, false, false,
                        false, false, false, false,
                        false, false, false, false,
                        false, false, false, false} };
coord_t test_map_start = {3, 2};
npc_t test_map_npc ( unsigned int x, unsigned int y ){
    npc_t a = {9107, 988, 7, 3, {{5763, 42, "Legendary", 9}, {5763, 42, "oWo What", 8}, {5763, 42, "Test", 4}}, true, false, true, 1, 5, 5 };
    npc_t b = {-1, 0, 0, 0, {-1, 0, ' ', 0}, false, false, false, 0, -1, -1 };
    if (x == 2 && y == 3){
        return a;
    }
    return b;
}

int master_index = 0;
map_t cached_map;
map_master rogue_map_master[NUM_MAPS];
npc_function_ft rogue_npc_master[NUM_MAPS];

void init_maps(){

    // do nothing
    cached_map = example_map;

    // set up master record for maps
    rogue_map_master[0] = (map_master) { example_map, example_map_start };
    rogue_map_master[1] = (map_master) { test_map, test_map_start };

    // set up master record for NPC functions
    rogue_npc_master[0] = example_map_npc;
    rogue_npc_master[1] = test_map_npc;
}
