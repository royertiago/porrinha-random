#include <chrono>
#include <random>
#include "random.h"

namespace random_player {
    std::mt19937 random_engine;
    bool engine_initialized = false;

    int random( int max ) {
        if( !engine_initialized )
            random_engine.seed(
                std::chrono::system_clock::now().time_since_epoch().count()
            );

        return std::uniform_int_distribution<int>(0, max)( random_engine );
    }
} // namespace random_player
