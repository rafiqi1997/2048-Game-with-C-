#ifndef SWAP_AND_TAMBAH_H_INCLUDED
#define SWAP_AND_TAMBAH_H_INCLUDED
#include <iostream>
#include<time.h>
#include<stdlib.h>
#include"check.h"

using namespace std ;

void down_key( int grid[4][4] , int &markah , bool &pergerakan , bool &tambah )
{

    bool  check_b = false , check_a = false ;

    int counter = 0 , i ,j  ;

    for(j=0;j<=3;j++)
{

    counter = 0 ;

  do
  {

       do
    {

        for ( i = 0 ; i < 3 ; i++ )
        {

           if ( (grid[i][j]>0) && (grid[i+1][j]==0) )

          {
             int temporary ;

            temporary = grid[i][j] ;

            grid[i][j] = 0 ;

            grid[i+1][j] = temporary ;

            pergerakan = true ;
          }

        }


  check_a = check_bawah(grid,j) ;

    } while(check_a==true);


 if (counter == 0)
 {
    for ( i = 3 ; i > 0 ; i-- )
   {
       if ( (grid[i][j]) == (grid[i-1][j]) )
       {
           grid[i][j] = (grid[i][j]) + (grid[i-1][j]) ;

           markah = markah + grid[i][j] ;

           grid[i-1][j] = 0 ;

           if ( grid[i][j] != 0) tambah = true ;
       }
   }
 }

   counter = 1 ;

   check_b = check_bawah(grid,j) ;


   }while(check_b==true);
  }
}


void up_key( int grid[4][4] , int &markah , bool &pergerakan , bool &tambah )
{
    bool  check_b = false , check_a = false ;

    int counter = 0 , i ,j  ;

    for(j=0;j<=3;j++)
{

    counter = 0 ;

  do         // function untuk check grid                 // funtion untuk  tambah dan swap
  {

       do
    {

        for ( i = 3 ; i > 0 ; i-- )
        {

           if ( (grid[i][j]>0) && (grid[i-1][j]==0) )

          {
             int temporary ;

            temporary = grid[i][j] ;

            grid[i][j] = 0 ;

            grid[i-1][j] = temporary ;

            pergerakan = true ;

          }

        }


  check_a = check_atas(grid,j) ;

    } while(check_a==true);


 if (counter == 0)
 {
    for ( i = 0 ; i < 3 ; i++ )
   {
       if ( (grid[i][j]) == (grid[i+1][j]) )
       {
           grid[i][j] = (grid[i][j]) + (grid[i+1][j]) ;

           markah = markah + grid[i][j] ;

           grid[i+1][j] = 0 ;

           if ( grid[i][j] != 0) tambah = true ;
       }
   }
 }

   counter = 1 ;

   check_b = check_atas(grid,j) ;


     }while(check_b==true);

   }

}


void right_key(int grid[4][4] , int &markah , bool &pergerakan , bool &tambah )
{
     bool  check_b = false , check_a = false ;

    int counter = 0 , i ,j  ;

    for(j=0;j<=3;j++)
{

    counter = 0 ;

  do                                                               // function untuk check grid                 // funtion untuk  tambah dan swap
  {

       do
    {

        for ( i = 0 ; i < 3 ; i++ )
        {

           if ( (grid[j][i]>0) && (grid[j][i+1]==0) )

          {
             int temporary ;

            temporary = grid[j][i] ;

            grid[j][i] = 0 ;

            grid[j][i+1] = temporary ;

            pergerakan = true ;

          }

        }


  check_a = check_kanan(grid,j) ;

    } while(check_a==true);


 if (counter == 0)
 {
    for ( i = 3 ; i > 0 ; i-- )
   {
       if ( (grid[j][i]) == (grid[j][i-1]) )
       {
           grid[j][i] = (grid[j][i]) + (grid[j][i-1]) ;

           markah = markah + grid[j][i] ;

           grid[j][i-1] = 0 ;

          if ( grid[j][i] != 0) tambah = true ;
       }
   }
 }

   counter = 1 ;

   check_b = check_kanan(grid,j) ;


     }while(check_b==true);

    }
}



void left_key( int grid[4][4] , int &markah , bool &pergerakan , bool &tambah )
{
    bool  check_b = false , check_a = false ;

    int counter = 0 , i ,j  ;

    for(j=0;j<=3;j++)
{

    counter = 0 ;

  do                                                               // function untuk check grid                 // funtion untuk  tambah dan swap
  {

       do
    {

        for ( i = 3 ; i > 0 ; i-- )   // move
        {

           if ( (grid[j][i]>0) && (grid[j][i-1]==0) )

          {
             int temporary ;

            temporary = grid[j][i] ;

            grid[j][i] = 0 ;

            grid[j][i-1] = temporary ;

            pergerakan = true ;

          }

        }


  check_a = check_kiri(grid,j) ;

    } while(check_a==true);


 if (counter == 0)
 {
    for ( i = 0 ; i < 3 ; i++ )
   {
       if ( (grid[j][i]) == (grid[j][i+1]) )
       {
           grid[j][i] = (grid[j][i]) + (grid[j][i+1]) ;

           markah = markah + grid[j][i] ;

           grid[j][i+1] = 0 ;

           if ( grid[j][i] != 0) tambah = true ;
       }
   }
 }

   counter = 1 ;

   check_b = check_kiri(grid,j) ;


}while(check_b==true);

}
}











#endif // SWAP_AND_TAMBAH_H_INCLUDED
