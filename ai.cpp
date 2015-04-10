#include "random_player.h"
#include "ai.h"

namespace random_player {

    Player * generate( int /*argc*/, char ** /*argv*/ ) {
        return new RandomPlayer;
    }

} // namespace random_player
