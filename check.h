#ifndef CHECK_H_INCLUDED
#define CHECK_H_INCLUDED
#include<iostream>

using namespace std ;

bool check_kiri(int grid[4][4],int j)
{

    bool check_grid = false ;

    int i ;


     for ( i = 3 ; i > 0 ; i-- )
   {
        if ( (grid[j][i] > 0) && (grid[j][i-1] == 0) )
       {
          check_grid = true ;

           break ;
        }
        else check_grid = false ;


    }

    return check_grid ;
}


bool check_kanan(int grid[4][4],int j)
{

    bool check_grid = false ;

    int i ;

     for ( i = 0 ; i < 3 ; i++ )
   {
        if ( (grid[j][i] > 0) && (grid[j][i+1] == 0) )
       {
          check_grid = true ;

           break ;
        }
        else check_grid = false ;


    }

    return check_grid ;
}


bool check_bawah(int grid[4][4],int j)
{

    bool check_grid = false ;

    int i ;


     for ( i = 0 ; i < 3 ; i++ )
   {
        if ( (grid[i][j] > 0) && (grid[i+1][j] == 0) )
       {
          check_grid = true ;

           break ;
        }
        else check_grid = false ;


    }

    return check_grid ;
}


bool check_atas(int grid[4][4],int j)
{

    bool check_grid = false ;

    int i ;


     for ( i = 3 ; i > 0 ; i-- )
   {
        if ( (grid[i][j] > 0) && (grid[i-1][j] == 0) )
       {
          check_grid = true ;

           break ;
        }
        else check_grid = false ;


    }

    return check_grid ;
}





#endif // CHECK_H_INCLUDED
