#ifndef RANDOM_PLAYER_H
#define RANDOM_PLAYER_H

#include "player.h"

namespace random_player {

    struct RandomPlayer : public Player {
        std::string name() const override;
        int hand() override;
        int guess( const std::vector<int>& other_guesses ) override;
        void settle_round(
            const std::vector<int>& hands,
            const std::vector<int>& guesses
        ) override;
    };

} // namespace random_player

#endif // RANDOM_PLAYER_H
