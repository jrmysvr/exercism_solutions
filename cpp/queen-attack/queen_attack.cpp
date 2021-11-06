#include "queen_attack.h"
#include <utility>

namespace queen_attack {
    piece chess_board::white() const {
        return _white;
    }

    piece chess_board::black() const {
        return _black;
    }

    chess_board::operator std::string() const {
        std::string board;
        for (int r = 0; r < 8; r++) {
            for (int c = 0; c <= 8; c++) {
                if (c == 8) {
                    board += '\n';
                } else if (std::make_pair(r,c) == _white) {
                    board += 'W';
                } else if (std::make_pair(r,c) == _black) {
                    board += 'B';
                } else {
                    board += '_';
                }

                if (c < 7) {
                    board += ' ';
                }
            }
        }
        return board;
    }

    bool chess_board::can_attack() const {
        return (_white.first == _black.first ||
                _white.second == _black.second ||
                abs(_white.first - _black.first) == abs(_white.second - _black.second));
    }
}  // namespace queen_attack
