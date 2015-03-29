#include "core/util.h"

#include "random_player.h"
#include "random.h"

namespace random_player {
    std::string RandomPlayer::name() const {
        return "Random";
    }

    int RandomPlayer::hand() {
        return random(core::chopsticks(core::index(this)));
    }

    int RandomPlayer::guess( const std::vector<int>& /*other_guesses*/ ) {
        int guess = random(core::chopstick_count());
        while( !core::valid_guess(guess) )
            guess = random(core::chopstick_count());
        return guess;
    }

    void RandomPlayer::settle_round(
        const std::vector<int>& /*hands*/,
        const std::vector<int>& /*guesses*/
    ) {
        // no-op
    }

} // namespace random_player
