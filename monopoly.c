#include <stdio.h>
#include <stdint.h>

typedef struct{
    uint8_t player_tokens;
    uint8_t house;
    uint8_t hotels;
    uint16_t money;
} player;

typedef struct {
    uint8_t dices;  
    uint8_t title_deeds_cards;
    uint8_t chance_cards;
} boarditems;


typedef enum {
    streets,
    chances,
    gotojail,
    vistingjail,
    go,
    parkfree,
    trains,
    communitychest,
    taxes
} tile_types;

typedef struct {
    tile_types type;
    char street_name[22];
} board_tile;

typedef struct{
    board_tile tiles[40];
} board;

int main(void) {
    board boards = {
        .tiles = {
            (board_tile){go, " "},
            (board_tile){streets, "Västerlånggatan"}
        }
    };

    printf("%s\n", boards[0].street_name);
    
    return 0;
}
