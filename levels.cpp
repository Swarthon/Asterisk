#include "struct.hpp"
#include "main.hpp"
#include <iostream>
using namespace std;


/*
===================================================================================================
Level Definition Guidelines:
===================================================================================================
const int level_X_S[10][10] is the definition for the warp quadrant.
        X is the level number and S is the sector (0 - 3)
        Values 0 - 4 are allowed:
            0: Nothing
            1: Station
            2: Ice field
            3: Nebula
            4: Planetary System
const level_data * level_X_S_N_level_data is a variable length array of data for flight level view
        N is the corresponding entry number in the corresponding level_X_S_tile_data array
        The type field in struct level_data defines the following values
            0: station
            1: asteroid group
            2: enemy
            3: debris
        if the type is 1 or 3 then the last value, char num, must be the number of the asteroids or debris wanted.
        if the type is 4 then the last value, char num represents the mass of the star / 1000;
const tile_data level_0_0_tile_data[10] is the data for viewing at the pre-warp level. There must be 10 and only ten entries that have detailed info.
        If an undefined tile is warped to (meaning there is no corresponding tile_data object for it, an empty asteroid field will be generated,
            along with suitable "flavor" material
*/

/*
===================================================================================================
LEVEL 0 DATA - Epsilon Quadrant
===================================================================================================
*/

const int level_0_0[10][10] = { { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                { 0, 5, 0, 5, 0, 3, 0, 0, 0, 0},
                                { 0, 1, 0, 3, 3, 0, 0, 0, 0, 0},
                                { 0, 0, 5, 0, 3, 0, 0, 0, 0, 0},
                                { 0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
                                { 0, 0, 0, 0, 0, 0, 0, 4, 0, 0},
                                { 2, 0, 0, 0, 0, 0, 0, 0, 0, 1},
                                { 0, 0, 2, 0, 0, 0, 0, 0, 1, 0},
                                { 0, 0, 0, 0, 0, 0, 5, 0, 0, 0},
                                { 0, 0, 4, 0, 0, 0, 0, 0, 0, 0}};

const level_data level_0_0_0_level_data[3] = { {30, 30, "Abandoned C. R.", true, 0, 0, false},
                                            {31, 31, "Asteroids", false, 1, 10, false},
                                            {23, 7, "Debris", false, 3, 5, false}};

const level_data level_0_0_1_level_data[2] = { {30, 30, "Asteroids", true, 1, 20, false}};

const level_data level_0_0_2_level_data[3] = { {30, 30, "Abandoned C. R.", true, 0, 0, false},
                                            {31, 31, "Asteroids", false, 1, 10, false},
                                            {23, 7, "Debris", false, 3, 5, false}};

const tile_data level_0_0_tile_data[10] = { {0, 0, "Abandoned C. R.", 3, level_0_0_2_level_data},
                                            {1, 2, "Abandoned C. R.", 3, level_0_0_0_level_data},
                                            {7, 5, "Gau-4 System", 1, level_0_0_1_level_data},
                                            {6, 0, "Tin mining base", 1, level_0_0_1_level_data},
                                            {2, 9, "Gau-13 System", 1, level_0_0_1_level_data},
                                            {3, 4, "Abandoned C. R.", 1, level_0_0_1_level_data},
                                            {9, 6, "Tr. Post 143-k", 1, level_0_0_1_level_data},
                                            {8, 7, "Abandoned R. S.", 1, level_0_0_1_level_data},
                                            {4, 2, "Horse Nebula", 1, level_0_0_1_level_data},
                                            {5, 1, "Camel Nebula", 1, level_0_0_1_level_data}};

const int level_0_1[10][10] = { { 0, 0, 0, 0, 0, 0, 0, 3, 3, 4},
                                { 0, 0, 0, 1, 0, 0, 0, 0, 3, 1},
                                { 0, 0, 2, 0, 0, 5, 0, 3, 3, 0},
                                { 0, 1, 2, 0, 0, 0, 3, 3, 4, 0},
                                { 0, 2, 0, 0, 0, 3, 3, 0, 0, 0},
                                { 0, 0, 0, 0, 4, 3, 0, 0, 0, 0},
                                { 0, 0, 3, 3, 3, 3, 3, 3, 2, 0},
                                { 0, 0, 3, 3, 0, 0, 0, 0, 5, 0},
                                { 0, 3, 4, 5, 0, 0, 2, 0, 2, 0},
                                { 4, 0, 0, 0, 0, 0, 0, 0, 2, 1}};

const level_data level_0_1_0_level_data[2] = { {30, 30, "Asteroids", true, 1, 20},
                                            {30, 30, "Asteroids", true, 3, 20}};

const level_data level_0_1_1_level_data[2] = { {30, 30, "Asteroids", true, 1, 10}};

const level_data level_0_1_2_level_data[2] = { {30, 30, "Asteroids", true, 1, 20},
                                            {10, 10, "Enemy", true, 2, 5}};

const level_data level_0_1_3_level_data[2] = { {30, 30, "Tr. Post 27-f", true, 0, 10}};

const level_data level_0_1_4_level_data[2] = { {30, 30, "Frontier St. 13", true, 0, 10}};

const tile_data level_0_1_tile_data[10] = { {3, 1, "Enemy Base 14-g", 2, level_0_1_2_level_data},
                                            {7, 0, "Adla Seng Neb.", 1, level_0_1_1_level_data},
                                            {9, 1, "Tr. Post 27-f", 1, level_0_1_3_level_data},
                                            {8, 3, "Keng-2 System", 1, level_0_1_1_level_data},
                                            {9, 0, "Keng-7 System", 1, level_0_1_1_level_data},
                                            {9, 9, "Frontier St. 13", 1, level_0_1_4_level_data},
                                            {0, 9, "Ebla-3 System", 1, level_0_1_1_level_data},
                                            {2, 8, "Ebla-17 System", 1, level_0_1_1_level_data},
                                            {1, 4, "Apollo Iron", 2, level_0_1_0_level_data },
                                            {4, 5, "Jenja System", 1, level_0_1_1_level_data}};

const int level_0_2[10][10] = { { 0, 2, 0, 0, 0, 0, 0, 0, 0, 0},
                                { 0, 0, 0, 0, 2, 0, 0, 0, 0, 0},
                                { 0, 5, 0, 0, 0, 2, 2, 0, 0, 0},
                                { 0, 0, 0, 0, 0, 0, 0, 5, 0, 0},
                                { 1, 0, 0, 0, 1, 2, 0, 0, 0, 0},
                                { 0, 0, 0, 0, 2, 2, 2, 0, 0, 0},
                                { 0, 2, 0, 0, 0, 0, 2, 3, 0, 3},
                                { 0, 2, 2, 0, 0, 0, 0, 3, 3, 0},
                                { 3, 3, 2, 0, 0, 0, 0, 0, 3, 3},
                                { 4, 3, 5, 0, 0, 0, 0, 0, 3, 3}};

const level_data level_0_2_0_level_data[2] = { {30, 30, "F. Inc. Mn.", true, 1, 20},
                                            {20, 20, "F. Inc. Mn.", true, 3, 20}};

const level_data level_0_2_1_level_data[1] = { {30, 30, "Asteroids", true, 1, 20} };

const level_data level_0_2_2_level_data[1] = { {30, 30, "Enemy", true, 2, 10} };

const tile_data level_0_2_tile_data[10] = { {1, 0, "F. Inc. Mn.", 2, level_0_2_0_level_data},
                                            {0, 4, "Enemy Base", 1, level_0_2_2_level_data},
                                            {0, 9, "Hepler 2 Sys.", 1, level_0_2_1_level_data},
                                            {4, 4, "Enemy Base", 1, level_0_2_2_level_data},
                                            {7, 7, "Ice Nebula", 1, level_0_2_1_level_data},
                                            {9, 9, "Ked Nebula", 1, level_0_2_1_level_data},
                                            {8, 8, "Ged Nebula", 1, level_0_2_1_level_data},
                                            {6, 2, "F. Inc. Mn.", 1, level_0_2_0_level_data},
                                            {5, 2, "Abandoned C. R.", 2, level_0_0_0_level_data},
                                            {9, 6, "Old Nebula", 1, level_0_2_1_level_data}};


const int level_0_3[10][10] = { { 0, 2, 2, 0, 0, 0, 0, 0, 0, 0},
                                { 0, 1, 0, 0, 0, 0, 0, 5, 0, 0},
                                { 0, 0, 0, 0, 1, 0, 2, 0, 0, 0},
                                { 0, 0, 0, 3, 3, 3, 0, 0, 3, 0},
                                { 0, 0, 0, 5, 3, 4, 0, 3, 0, 0},
                                { 0, 0, 2, 3, 3, 3, 3, 3, 0, 0},
                                { 0, 0, 2, 2, 0, 0, 0, 5, 0, 0},
                                { 0, 0, 0, 2, 0, 0, 0, 2, 0, 0},
                                { 0, 0, 5, 0, 2, 0, 2, 2, 0, 0},
                                { 0, 0, 0, 0, 0, 2, 0, 0, 0, 1}};

const level_data level_0_3_0_level_data[4] = { {30, 30, "Home", true, 0, 1},
                                            {20, 30, "Repair St.", true, 0, 1},
                                            {20, 20, "Refuel St.", true, 0, 1},
                                            {30, 20, "Armory St.", true, 0, 1}};

const level_data level_0_3_1_level_data[1] = { {30, 30, "Enemy", true, 2, 6} };

const level_data level_0_3_2_level_data[1] = { {30, 30, "Asteroids", true, 1, 20} };

const level_data level_0_3_3_level_data[1] = { {30, 30, "Comm Station", true, 0, 3} };

const level_data level_0_3_4_level_data[1] = { {30, 30, "Comm Station", true, 0, 3} };

const tile_data level_0_3_tile_data[10] = { {1, 1, "Enemy Base 7-m", 1, level_0_3_1_level_data},
                                            {1, 0, "Ice Field", 1, level_0_3_1_level_data},
                                            {5, 4, "Kentak-2 Sys.", 1, level_0_3_2_level_data},
                                            {2, 5, "J. Inc Lead Mn.", 1, level_0_3_2_level_data},
                                            {2, 0, "Ice Field", 1, level_0_3_2_level_data},
                                            {9, 9, "Comm Station 17", 1, level_0_3_3_level_data},
                                            {0, 9, "Ice Field", 1, level_0_3_2_level_data},
                                            {4, 2, "Comm Station 16", 1, level_0_3_3_level_data},
                                            {3, 3, "Jelge Nebula", 1, level_0_3_2_level_data},
                                            {4, 5, "Home", 4, level_0_3_0_level_data}};


void search_and_build(const tile_data * tiledata){
    cout << "SECTOR: "  << sector_s << endl;

    // init vairables
    bool exists = false;
    int i = 0;

    // search
    for ( ; i < 10; i++){
        if (tiledata[i].x == sector_y && tiledata[i].y == sector_x){
            exists = true;
            cout << " FOUND W DESC: " << tiledata[i].data  << " I: " << i << endl;
            break;
        }
    }
    cout << "EXISTS " << ((exists) ? 1 : 0) << endl;

    // create entities
    if (exists){
        cout << "EXISTS!! NUM: " << tiledata[i].num_level_data << " I:" << i << endl;
        for(int j = 0; j < tiledata[i].num_level_data; j++){
            cout << "LOOKING AT J:" << j << endl;
            switch(tiledata[i].flight_data[j].type){
                case 0: // station
                    cout << "SPAWN STATION AT X:" << tiledata[i].flight_data[j].x;
                    cout << " Y: " << tiledata[i].flight_data[j].y << endl;

                    // create entity listing
                    entities[num_entities].id = id_entity_last;
                    entities[num_entities].x = tiledata[i].flight_data[j].x;
                    entities[num_entities].y = tiledata[i].flight_data[j].y;
                    entities[num_entities].type = 0;
                    for (int k = 0; k < 16; k++){
                        entities[num_entities].data[i] = tiledata[i].flight_data[j].data[i];
                    }
                    entities[num_entities].vx = 0;
                    entities[num_entities].vy = 0;
                    if (num_entities < MAX_ENTITIES) num_entities++;
                    id_entity_last++;
                    break;
                case 1: //asteroid
                    cout << "SPAWN ASTEROID AT X:" << tiledata[i].flight_data[j].x;
                    cout << " Y: " << tiledata[i].flight_data[j].y << endl;
                    for (int m = 0; m < tiledata[i].flight_data[j].num; m++){
                        entities[num_entities].id = id_entity_last;
                        entities[num_entities].x = rand() % WIDTH;
                        entities[num_entities].y = rand() % HEIGHT;
                        entities[num_entities].type = 1;
                        for (int k = 0; k < 16; k++){
                            entities[num_entities].data[i] = tiledata[i].flight_data[j].data[i];
                        }
                        entities[num_entities].vx = (rand() % 5) - 2;
                        entities[num_entities].vy = (rand() % 5) - 2;
                        if (num_entities < MAX_ENTITIES) {
                            num_entities++;
                        }
                        id_entity_last++;
                    }
                    break;
                case 2: // enemy
                    cout << "SPAWN ENEMY AT X:" << tiledata[i].flight_data[j].x;
                    cout << " Y: " << tiledata[i].flight_data[j].y << endl;
                    for (int m = 0; m < tiledata[i].flight_data[j].num; m++){
                        entities[num_entities].id = id_entity_last;
                        entities[num_entities].x = tiledata[i].flight_data[j].x;
                        entities[num_entities].y = tiledata[i].flight_data[j].y;
                        entities[num_entities].type = 2;
                        for (int k = 0; k < 16; k++){
                            entities[num_entities].data[i] = tiledata[i].flight_data[j].data[i];
                        }
                        entities[num_entities].vx = (rand() % 10 > 5) ? -1 : 1;
                        entities[num_entities].vy = (rand() % 10 > 5) ? -1 : 1;
                        if (num_entities < MAX_ENTITIES) num_entities++;
                    }
                    break;
                case 3: // debris
                    cout << "SPAWN DEBRIS AT X:" << tiledata[i].flight_data[j].x;
                    cout << " Y: " << tiledata[i].flight_data[j].y << endl;
                    for (int m = 0; m < tiledata[i].flight_data[j].num; m++){
                        entities[num_entities].id = id_entity_last;
                        entities[num_entities].x = rand() % WIDTH;
                        entities[num_entities].y = rand() % HEIGHT;
                        entities[num_entities].type = 3;
                        for (int k = 0; k < 16; k++){
                            entities[num_entities].data[i] = tiledata[i].flight_data[j].data[i];
                        }
                        entities[num_entities].vx = 0;
                        entities[num_entities].vy = 0;
                        if (num_entities < MAX_ENTITIES) num_entities++;
                        id_entity_last++;
                    }
                    break;
                default:
                    cout << "FAILED WITH: " << tiledata[i].flight_data[j].type << endl;
            }
        }
    } else {
        cout << "SPAWNING NOTHING" << endl;
    }
}
