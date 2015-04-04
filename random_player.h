#ifndef RANDOM_PLAYER_H
#define RANDOM_PLAYER_H

#include "player.h"

namespace random_player {

    struct RandomPlayer : public Player {
        std::string name() const override;
        int hand() override;
        int guess() override;
        void settle_round() override;
    };

} // namespace random_player

#endif // RANDOM_PLAYER_H
