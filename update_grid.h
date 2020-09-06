#ifndef UPDATE_GRID_H_INCLUDED
#define UPDATE_GRID_H_INCLUDED
#include <iostream>
#include<time.h>
#include<stdlib.h>
#include"check.h"
#include"swap_and_tambah.h"
#include"print_grid.h"

using namespace std ;

void update_grid( int grid[4][4] )
{
    int counter2 = 0 , update[16] = {} , loop = 0   ,  c = 0 , nombor_baru , i ,j  ;


     do
    {
        c = 0 ;
        for (i=0;i<=3;i++)
       {
            for(j=0;j<=3;j++)
          {
               if ( grid[i][j]==0)
              {
                  grid[i][j] = update[c] ;

                  counter2 = counter2 + 1 ;

                  ++c ;
              }
         }

        }


        nombor_baru = rand()% counter2 ;

        if ( loop == 0 )
       {

             do
            {
               update[nombor_baru] = (rand()%4) + 1 ;

            } while ( ( update[nombor_baru] % 2 ) != 0 ) ;

        }

       loop++ ;

      } while ( loop <= 1 ) ;

}

#endif // UPDATE_GRID_H_INCLUDED
