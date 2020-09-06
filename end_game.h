#ifndef END_GAME_H_INCLUDED
#define END_GAME_H_INCLUDED
#include<iostream>

using namespace std ;

void end_game_kosong( bool &a , int grid[4][4] )
{

      int i , j ;

     for ( j = 0 ; j <= 3 ; j++ )                              // menegak
    {
         for ( i = 0 ; i <= 3 ; i++ )
       {
           if ( grid[i][j] == 0)
         {
                a = true ;

                break ;
         }


        }
    }

}


void end_game_sama_menegak( bool &a , int grid[4][4] )
{
    int j , i ;

   for ( j = 0 ; j <= 3 ; j++)
   {
       for ( i = 0 ; i < 3 ; i++ )
   {
       if ( (grid[i][j]) == (grid[i+1][j]) )
       {
           a = true ;

           break ;
       }

   }
   }


}



void end_game_sama_melintang( bool &a , int grid[4][4] )
{
    int i , j ;

       for( j = 0 ; j <= 3 ; j++ )
   {
            for ( i = 3 ; i > 0 ; i-- )
      {
       if ( (grid[j][i]) == (grid[j][i-1]) )
       {
           a = true ;

           break ;
       }

      }
   }
}


void end_game_2048( bool &a , int grid[4][4] )
{

      int i , j ;

     for ( j = 0 ; j <= 3 ; j++ )                              // menegak
    {
         for ( i = 0 ; i <= 3 ; i++ )
       {
           if ( grid[i][j] == 2048 )
         {
                a = true ;

                break ;
         }

       }
    }

}

#endif // END_GAME_H_INCLUDED
