#if !defined(QUEEN_ATTACK_H)
#define QUEEN_ATTACK_H

#include <utility>
#include <type_traits>
#include <stdexcept>
#include <string>

namespace queen_attack {
    using piece = std::pair<int, int>;
    // typedef piece std::pair<int, int>;

    class chess_board {
    private:
        // Default positions
        piece _white = std::make_pair(0,3);
        piece _black = std::make_pair(7,3);

    public:
        chess_board(){};
        chess_board(piece white, piece black):
            _white(white),
            _black(black){
                if (black.first < 0 ||
                    black.first > 7 ||
                    black.second < 0 ||
                    black.second > 7 ||
                    white.first < 0 ||
                    white.first > 7 ||
                    white.second < 0 ||
                    white.second > 7) {
                    throw std::domain_error("Invalid position value");
                }
                else if (white == black) {
                    throw std::domain_error("Positions must be distinct");
                }
            };
        operator std::string() const;
        std::pair<int, int> white() const;
        std::pair<int, int> black() const;
        bool can_attack() const;
    };

}  // namespace queen_attack

#endif // QUEEN_ATTACK_H
