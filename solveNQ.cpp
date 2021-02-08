#include <iostream>
#include "functions.h"

using namespace std;

bool solveNQ()

{

    int board[N][N] = { 0 };

    if (solveNQUtil(board, 0) == false)

    {

        cout << "Solution does not exist" << endl;

        return false;

    }

    printSolution(board);

    return true;

}
