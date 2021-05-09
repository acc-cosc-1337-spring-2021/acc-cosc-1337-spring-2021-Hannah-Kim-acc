//h
#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <string>
using std::string;

#include <vector>
using std::vector;


class TicTacToe 
{

  friend std::ostream& operator<<(std::ostream& out, const TicTacToe &game);
  friend std::istream& operator>>(std::istream& is, TicTacToe & game);

  public:
    TicTacToe(int size): pegs(size * size, " "){}
    virtual ~TicTacToe(){}

    bool game_over();
    string get_player()const{return player;}
    //void display_board()const;
    string get_winner()const{return winner;}
    void mark_board(int position);
    void start_game(string first_player);
    
  private:

    //class private data
    string player;
    string winner;

    bool check_board_full()const;
    void clear_board();

    void set_next_player();
    void set_winner();
    bool is_position_empty(int position);

  protected:
    vector<string> pegs;

    virtual bool check_column_win()=0;
    virtual bool check_row_win()=0;
    virtual bool check_diagonal_win()=0;

};

#endif