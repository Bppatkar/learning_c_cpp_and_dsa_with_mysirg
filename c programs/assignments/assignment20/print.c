// TODO: Assignment-20: Multi Dimensional Arrays

/* //! 1. Write a program to calculate the sum of two matrices each of order 3x3.
#include <stdio.h>
void creatingMatrix(int a[][3])
{
  int i, j;
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      scanf("%d", &a[i][j]);
  printf("You Entered in matrix: \n");
  // printing matrix
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}
void addmatrices(int a[][3], int b[][3])
{
  int i, j;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d ", a[i][j] + b[i][j]);
    }
    printf("\n");
  }
}
int main()
{
  int a[3][3];
  printf("Enter values in matrix 1: ");
  creatingMatrix(a);
  int b[3][3];
  printf("Enter values in matrix 2: ");
  creatingMatrix(b);
  // now adding two matrices
  addmatrices(a, b);
} */

/* //! 2. Write a program to calculate the product of two matrices each of order 3x3.
#include <stdio.h>
void creatingMatrix(int a[][3])
{
  int i, j;
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      scanf("%d", &a[i][j]);
  printf("You Entered in matrix: \n");
  // printing matrix
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}
void productOfMatrices(int a[][3], int b[][3])
{
  int i, j, k;
  int resultMatrix[3][3] = {0}; // matrix to store the result
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      for (k = 0; k < 3; k++)
      {
        resultMatrix[i][j] += a[i][k] * b[k][j];
      }
    }
    printf("\n");
  }
  // printing matrix
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d ", resultMatrix[i][j]);
    }
    printf("\n");
  }
}
int main()
{
  int a[3][3];
  printf("Enter values in matrix 1: ");
  creatingMatrix(a);
  int b[3][3];
  printf("Enter values in matrix 2: ");
  creatingMatrix(b);
  // now adding two matrices
  productOfMatrices(a, b);
} */
//__________New Approach____________
/* #include <stdio.h>
void creatingMatrix(int a[][3])
{
  int i, j;
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      scanf("%d", &a[i][j]);
  printf("You Entered in matrix: \n");
  // printing matrix
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}
void productOfMatrices(int a[][3], int b[][3])
{
  int i, j, k, sum;
  int resultMatrix[3][3];
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      for (k = 0, sum = 0; k < 3; k++)
      {
        sum = sum + a[i][k] * b[k][j];
      }
      resultMatrix[i][j] = sum;
    }
    printf("\n");
  }
  // printing matrix
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d ", resultMatrix[i][j]);
    }
    printf("\n");
  }
}
int main()
{
  int a[3][3];
  printf("Enter values in matrix 1: ");
  creatingMatrix(a);
  int b[3][3];
  printf("Enter values in matrix 2: ");
  creatingMatrix(b);
  // now adding two matrices
  productOfMatrices(a, b);
} */

/* //! 3. Write a program to print the transpose of a given matrix.
#include <stdio.h>
void creatingMatrix(int a[][3])
{
  int i, j;
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      scanf("%d", &a[i][j]);
  printf("You Entered in matrix: \n");
  // printing matrix
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}
void transposingMatrix(int a[][3])
{
  int i, j;
  int b[3][3];
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      b[j][i] = a[i][j];
    }
    printf("\n");
  }

  // printing array
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d ", b[i][j]);
    }
    printf("\n");
  }
}
int main()
{
  int a[3][3];
  printf("Enter values in matrix 1: ");
  creatingMatrix(a);
  transposingMatrix(a);
} */
//_____________New Approach____________
/* #include <stdio.h>
void transposingArr(int a[][3])
{
  int i, j, k, temp;
  for (i = 0, j = 1, k = 1; k <= 3; k++)
  {
    temp = a[i][j];
    a[i][j] = a[j][i];
    a[j][i] = temp;
    if (j - i == 1)
      j++;
    else
      i++;
  }
  printf("After Transposing\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
      printf("%d ", a[i][j]);
    printf("\n");
  }
}
int main()
{
  int i, j;
  int a[3][3];
  printf("Enter 9 numbers for array");
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      scanf("%d", &a[i][j]);
  printf("You Entered: \n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
      printf("%d ", a[i][j]);
    printf("\n");
  }
  transposingArr(a);
  return 0;
} */

/* //! 4. Four players are playing a tournament of Chess with the round robin method (each player will play with every other player).
//! Each win has 2 points, a draw has 1 point, and a loss has 0 points. Declare a score_board two-dimensional array to store the scores of the players against each player.
#include <stdio.h>
int fact(int n)
{
  int sum = 1;
  while (n)
  {
    sum *= n;
    n--;
  }
  return sum;
}
int playerMatchCalc(int n)
{
  int matchCalc;
  int r = 2;
  int nFact = fact(n);
  int rFact = fact(r);
  int diff = fact(n - r);
  matchCalc = nFact / (rFact * diff);
  return matchCalc;
}
void inputScoreBoard(int a[4][4])
{
  int i, j;
  printf("Enter value in row and in column: ");
  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      if (i == j)
        a[i][j] = 0;
      else
        scanf("%d", &a[i][j]);
    }
  }
}
void printScoreBoard(int a[4][4])
{
  int i, j;
  printf("Printing ScoreBoard...\n");
  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
}
void calculatingRowWiseData(int a[4][4], int playerData[4][2])
{
  int sum, i, j;
  for (i = 0; i < 4; i++)
  {
    sum = 0;
    for (j = 0; j < 4; j++)
    {
      if (i != j)
        sum += a[i][j];
    }
    playerData[i][0] = i + 1;
    playerData[i][1] = sum;
  }
}
void sortScoresDescending(int playerData[4][2])
{
  int i, j, tempPlayer, tempScore;
  for (i = 0; i < 4 - 1; i++)
  {
    for (j = 0; j < 4 - 1 - i; j++)
    {
      if (playerData[j][1] < playerData[j + 1][1])
      {
        // Swapping scores
        tempScore = playerData[j][1];
        playerData[j][1] = playerData[j + 1][1];
        playerData[j + 1][1] = tempScore;

        // Swap player numbers as well
        tempPlayer = playerData[j][0];
        playerData[j][0] = playerData[j + 1][0];
        playerData[j + 1][0] = tempPlayer;
      }
    }
  }
}
void printRankedPlayers(int playerData[4][2])
{
  printf("\nPlayers ranked by total score (Descending):\n");
  for (int i = 0; i < 4; i++)
  {
    printf("Rank %d: Player %d's Total Score: %d\n", i + 1, playerData[i][0], playerData[i][1]);
  }
}
void calcSumOfScore(int a[4][4])
{
  int total = 0, i, j;
  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      total += a[i][j];
    }
  }
  printf("%d", total);
}
int getPlayerScore(int player, int playerData[4][2]) {
    // `playerData` is structured as [player number][score]
    for (int i = 0; i < 4; i++) {
        if (playerData[i][0] == player) { // Find the row for the given player
            return playerData[i][1]; // Return the score
        }
    }
    return -1; // Return -1 if player not found (invalid player number)
}

int main()
{
  int totalMatches = playerMatchCalc(4);
  printf("Total matches: %d\n", totalMatches);
  int a[4][4];
  inputScoreBoard(a);
  printScoreBoard(a);
  int playerData[4][2]; // [player number][score]
  calculatingRowWiseData(a, playerData);

  int specificPlayer = 2; // Change this to any player number (1-4)
  int score = getPlayerScore(specificPlayer, playerData);
  if (score != -1)
    printf("Player %d's Total Score: %d\n", specificPlayer, score);
  else
    printf("Player %d not found.\n", specificPlayer);

  sortScoresDescending(playerData);
  // Print the ranked players
  printRankedPlayers(playerData);
  calcSumOfScore(a);
  return 0;
} */

//! 5. For que-4, define a function to update score_board after each match result.
// inputScoreBoard
// we already make this function

//! 6. For que-4, define a function to display score_board.
// printScoreBoard function, which prints the entire score board of players.

/* //! 7. For que-4, define a function that returns the score of a specific player.
int getPlayerScore(int player, int playerData[4][2])
{
  return playerData[player - 1][1]; // player - 1 because array index starts from 0
} */

/* //! 8. For que-4, define a function to find the winner of the tournament.
void printWinner(int playerData[4][2])
{
  printf("\nWinner of the Tournament: Player %d with %d points.\n", playerData[0][0], playerData[0][1]);
} */

//! 9. For que-4, define a function to display the rank of the players.
// we  already have the logic to input the match results using the inputScoreBoard function. This can be expanded to repeatedly ask for each match result and update the score board after every game For example, you can loop through all pairs of players, ask the user for results (win/loss/draw), and then call the function to update the score board

//! 10. For que-4, define a function to run the tournament, in which the user has to enter the result of each game and update the score_board using the function.
// Run the tournament to get match results
// runTournament(a, playerData);
//? calling this fucntion from main
/* void runTournament(int a[4][4], int playerData[4][2]) {
    int i, j, result;
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 4; j++) {
            printf("Enter result for match between Player %d and Player %d (1 for win, 0 for draw, -1 for loss):\n", i + 1, j + 1);
            scanf("%d", &result);

            // Update the score based on the result
            if (result == 1) {
                a[i][j] = 2;  // Player i wins
                a[j][i] = 0;  // Player j loses
            } else if (result == 0) {
                a[i][j] = 1;  // Draw
                a[j][i] = 1;  // Draw
            } else {
                a[i][j] = 0;  // Player i loses
                a[j][i] = 2;  // Player j wins
            }
        }
    }

    // After all matches, calculate the total scores
    calculatingRowWiseData(a, playerData);
}*/

//?????? here is complete code for solving all questions from Question 4 to Question 10

/* #include <stdio.h>
// Function to calculate factorial
int fact(int n) {
    int sum = 1;
    while (n) {
        sum *= n;
        n--;
    }
    return sum;
}

// Function to calculate total matches in a round-robin format
int playerMatchCalc(int n) {
    int matchCalc;
    int r = 2;
    int nFact = fact(n);
    int rFact = fact(r);
    int diff = fact(n - r);
    matchCalc = nFact / (rFact * diff);
    return matchCalc;
}

// Function to input the scoreboard
void inputScoreBoard(int a[4][4]) {
    int i, j;
    printf("Enter value in row and in column: ");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i == j)
                a[i][j] = 0;
            else
                scanf("%d", &a[i][j]);
        }
    }
}

// Function to print the scoreboard
void printScoreBoard(int a[4][4]) {
    int i, j;
    printf("Printing ScoreBoard...\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

// Function to calculate row-wise player data
void calculatingRowWiseData(int a[4][4], int playerData[4][2]) {
    int sum, i, j;
    for (i = 0; i < 4; i++) {
        sum = 0;
        for (j = 0; j < 4; j++) {
            if (i != j)
                sum += a[i][j];
        }
        playerData[i][0] = i + 1;
        playerData[i][1] = sum;
    }
}

// Function to sort players by scores in descending order
void sortScoresDescending(int playerData[4][2]) {
    int i, j, tempPlayer, tempScore;
    for (i = 0; i < 4 - 1; i++) {
        for (j = 0; j < 4 - 1 - i; j++) {
            if (playerData[j][1] < playerData[j + 1][1]) {
                // Swapping scores
                tempScore = playerData[j][1];
                playerData[j][1] = playerData[j + 1][1];
                playerData[j + 1][1] = tempScore;

                // Swap player numbers as well
                tempPlayer = playerData[j][0];
                playerData[j][0] = playerData[j + 1][0];
                playerData[j + 1][0] = tempPlayer;
            }
        }
    }
}

// Function to print ranked players
void printRankedPlayers(int playerData[4][2]) {
    printf("\nPlayers ranked by total score (Descending):\n");
    for (int i = 0; i < 4; i++) {
        printf("Rank %d: Player %d's Total Score: %d\n", i + 1, playerData[i][0], playerData[i][1]);
    }
}

// Function to calculate the sum of all scores in the scoreboard
void calcSumOfScore(int a[4][4]) {
    int total = 0, i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            total += a[i][j];
        }
    }
    printf("Total Sum of Scores: %d\n", total);
}

// Function to get the score of a specific player
int getPlayerScore(int player, int playerData[4][2]) {
    for (int i = 0; i < 4; i++) {
        if (playerData[i][0] == player) {
            return playerData[i][1];
        }
    }
    return -1;
}

// Function to find the winner of the tournament
int findWinner(int playerData[4][2]) {
    return playerData[0][0]; // Player with the highest score is at index 0 after sorting
}

// Function to update the scoreboard after a match
void updateScoreBoard(int a[4][4], int player1, int player2, int result) {
    if (result == 1) {
        a[player1][player2] = 2;
        a[player2][player1] = 0;
    } else if (result == 0) {
        a[player1][player2] = 1;
        a[player2][player1] = 1;
    } else if (result == -1) {
        a[player1][player2] = 0;
        a[player2][player1] = 2;
    }
}

// Function to run the tournament
void runTournament(int a[4][4], int playerData[4][2]) {
    int i, j, result;
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 4; j++) {
            printf("Enter result for match between Player %d and Player %d (1 for win, 0 for draw, -1 for loss):\n", i + 1, j + 1);
            scanf("%d", &result);
            updateScoreBoard(a, i, j, result);
        }
    }
    calculatingRowWiseData(a, playerData);
}

int main() {
    int totalMatches = playerMatchCalc(4);
    printf("Total matches: %d\n", totalMatches);

    int a[4][4] = {0}; // Initialize score board
    int playerData[4][2]; // Player data

    runTournament(a, playerData);

    printScoreBoard(a);

    sortScoresDescending(playerData);
    printRankedPlayers(playerData);

    int winner = findWinner(playerData);
    printf("\nWinner of the tournament: Player %d\n", winner);

    int specificPlayer = 2;
    int score = getPlayerScore(specificPlayer, playerData);
    if (score != -1)
        printf("\nPlayer %d's Total Score: %d\n", specificPlayer, score);
    else
        printf("\nPlayer %d not found.\n", specificPlayer);

    calcSumOfScore(a);

    return 0;
} */
//__________New Approach_____________
/* #include <stdio.h>
void sort(int scores[], int n, int player_index[])
{
  int i, j, temp;
  for (i = 0; i < n - 1; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (scores[i] < scores[j])
      {
        temp = scores[i];
        scores[i] = scores[j];
        scores[j] = temp;
        temp = player_index[i];
        player_index[i] = player_index[j];
        player_index[j] = temp;
      }
    }
  }
}
int get_player_score(int player, int score_board[][4])
{
// solving 7th question
  int j, sum = 0;

  for (j = 0; j <= 3; j++)
    sum += score_board[player][j];
  return sum;
}
void show_rank(int score_board[][4])
{
  // solving 9th question   {display rank means sorting}
  int player_score[4], scores[4], player_index[4];
  int i;
  for (i = 0; i <= 3; i++)
  {
    player_score[i] = get_player_score(i, score_board);
    scores[i] = player_score[i];
    player_index[i] = i;
  }

  // now we have score of all 4 player... we need to sort them only
  sort(scores, 4, player_index);
  // now we have to print scores array and check inside player array so we get index
  for (i = 0; i <= 3; i++)
  {
    printf("%d) %d - Score %d\n", i + 1, player_index[i], scores[i]);
  }
}
int find_winner(int score_board[][4])
{
  // solving 8th question
  int player, score, winner, gps;
  player = 0;
  winner = player;
  score = get_player_score(player, score_board);
  for (++player; player <= 3; player++)
  {
    gps = get_player_score(player, score_board);
    if (score < gps)
    {
      winner = player;
      score = gps;
    }
  }
  return winner;
}
void display_score_board(int score_board[][4])
{
  // solving 6th question
  int i, j;
  printf("\nPrinting score board\n");
  for (i = 0; i <= 3; i++)
  {
    for (j = 0; j <= 3; j++)
    {
      printf("%d ", score_board[i][j]);
    }
    printf("\n");
  }
}
void update_score_board(int p1, int p2, int result, int score_board[][4])
{
  // solving 5th question
  score_board[p1][p2] = result;
  score_board[p2][p1] = 2 - result;
}
void solvingByNewApproach()
// solving 4rth question
{
  int score_board[4][4] = {0}; // initialize from 0
  update_score_board(0, 1, 2, score_board);
  update_score_board(0, 2, 1, score_board);
  update_score_board(0, 3, 2, score_board);
  update_score_board(1, 2, 1, score_board);
  update_score_board(1, 3, 0, score_board);
  update_score_board(2, 3, 0, score_board);
  show_rank(score_board);
}
int main()
{
  solvingByNewApproach();
  return 0;
} */