#include "random_player.h"
#include "ai.h"

namespace random_player {

    Player * generate( cmdline::args&& /*args*/ ) {
        return new RandomPlayer;
    }

} // namespace random_player
