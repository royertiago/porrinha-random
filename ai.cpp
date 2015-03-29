#include "random_player.h"
#include "ai.h"

namespace random_player {

    Player * generate( int /*players*/, int /*chopsticks*/ ) {
        return new RandomPlayer;
    }

} // namespace random_player
