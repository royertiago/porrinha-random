#include "random_player.h"
#include "random.h"

namespace random_player {
    std::string RandomPlayer::name() const {
        return "Random";
    }

    int RandomPlayer::hand() {
        return random(3);
    }

    int RandomPlayer::guess( const std::vector<int>& /*other_guesses*/ ) {
        return random(9);
    }

    void RandomPlayer::settle_round(
        const std::vector<int>& /*hands*/,
        const std::vector<int>& /*guesses*/
    ) {
        // no-op
    }

} // namespace random_player
