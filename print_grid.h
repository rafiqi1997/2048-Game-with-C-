#ifndef PRINT_GRID_H_INCLUDED
#define PRINT_GRID_H_INCLUDED
#include<iostream>
#include<iomanip>


void print_grid( int grid[4][4])
{
    int i , j ;

  for ( i = 0 ; i<=3 ; i++)                         // function untuk print grid
    {
        for ( j = 0 ; j<=3 ; j++)
        {
          if((grid[i][j])==0)
          {
              cout <<  setw(5) << "|" << setw(5) << " "  ;
          }
          else   cout <<  setw(5) << "|" << setw(5) << grid[i][j]  ;
        }
        cout << setw(5) << "|" << "\n" ;
        cout << "\n" <<  "    *****************************************" << "\n" ;
    }

}

void print_grid_undo( int memory[4][4])
{
    int i , j ;

  for ( i = 0 ; i<=3 ; i++)                         // function untuk print grid
    {
        for ( j = 0 ; j<=3 ; j++)
        {
          if((memory[i][j])==0)
          {
              cout <<  setw(5) << "|" << setw(5) << " "  ;
          }
          else   cout <<  setw(5) << "|" << setw(5) << memory[i][j]  ;
        }
        cout << setw(5) << "|" << "\n" ;
        cout << "\n" <<  "    *****************************************" << "\n" ;
    }

}


#endif // PRINT_GRID_H_INCLUDED
