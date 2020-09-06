#include <iostream>
#include<time.h>
#include<stdlib.h>
#include"check.h"
#include"swap_and_tambah.h"
#include"print_grid.h"
#include"update_grid.h"
#include"end_game.h"
#include<conio.h>


using namespace std;

void start_game() ;

void introduction() ;

void undo(int grid[4][4] , int cermin[4][4]) ;

void memory_1( int cermin[4][4] , int memory[4][4]) ;

int main()
{
     int pilihan ;

     char z ;

    cout <<  "\n\n\n" << setw(40) << "2048 GAMES\n" ;
    cout <<  "\n" << setw(43) << "---------------------" ;
    cout <<  "\n" << setw(45) << " 1. START GAME     \n\n" ;
    cout <<  "\n" << setw(47) << " 2. HOW TO PLAY      \n\n" ;
    cout <<  "\n" << setw(47) << " 3. EXIT              \n" ;
    cout <<  "\n" << setw(43) << "---------------------" << endl ;

    cout << "\nCREATED BY MUHAMAD RAFIQI BIN RUSLAN\n\nENTER YOUR CHOICE :" ;

    cin >> pilihan ;

    switch(pilihan)
    {
        case 1 :
                 start_game() ;
                 break ;

        case 2 :  introduction() ;
                  break ;

       default : break ;
    }



     return 0 ;

}


void start_game()
{


    int grid[4][4] = {} ,  a , b , start_grid , i , j  , markah = 0 , pilihan  ;

       bool pergerakan , tambah , end_game = false , menang , restart ;

       char z ;

do
    {



        for (i=0;i<=3;i++)
       {
            for(j=0;j<=3;j++)
          {
                grid[i][j]= 0 ;

         }
       }



        system("CLS") ;

        restart = false ;

        srand(time(0)) ;

       for( i = 0 ; i < 2 ; i++ )              // start game function
       {
            a = rand()%4 ;

            b = rand()%4 ;

        do
            {
             start_grid = (rand()%4) + 1 ;

            } while( start_grid % 2 != 0) ;

            grid[a][b] = start_grid ;
        }



    do
    {
        bool  sama  , sama_1  , kosong  ;



        sama = false ;

        sama_1 = false ;

        kosong = false ;

        pergerakan = false ;

        tambah = false ;

        menang = false ;

        pilihan = 0 ;

        print_grid(grid) ;

      cout << "\n\t  w\n\n\ta   d\n\n\t  s"  << "\t\t SCORE - " << markah << "    NEW GAME - r   MAIN MENU - b " << endl  ;

      z = getch() ;

      switch (z)
      {
          case 'a' : left_key(grid , markah , pergerakan , tambah) ;

                     break ;

          case 'w' : up_key(grid , markah , pergerakan , tambah) ;

                     break ;

          case 'd' : right_key(grid , markah , pergerakan , tambah) ;

                     break ;

          case 'r' : restart = true ;

                     break ;



          case 's'  : down_key(grid , markah , pergerakan , tambah) ;

                     break ;

          default   : break ;
      }


    if ( ( pergerakan == true ) || ( tambah == true ) ) update_grid(grid) ;

      end_game_sama_melintang( sama , grid ) ;

      end_game_sama_menegak( sama_1 , grid ) ;

      end_game_kosong( kosong , grid ) ;

      end_game_2048( menang , grid ) ;

      if ( ( ( sama == false ) && ( sama_1 == false ) && ( kosong == false ) ) || ( menang == true ) )  end_game = true ;

      system("CLS") ;

      } while ( (end_game == false) && (restart==false) && (z!= 'b')  ) ;

     }while(restart==true);

    if(z!='b') print_grid(grid) ;


    if(z!='b') { if ( menang == true) cout << "YOU WIN !!!!!" ;
    else cout << "\nGAME OVER ! YOU LOST !!!\n\n" ; }

    if(z!='b') system("PAUSE") ;

    system("CLS") ;

    main() ;

}


void introduction()
{
    system("CLS") ;

   cout << "\n\n\n" ;

    cout <<"                \t  2048 - How to play?\n\n" ;

   cout << " \tThe objective of the game is to get the number 2048 using\n" ;
   cout << " \tadditions of the number two and its multiples.\n" ;

   cout << " \tYou will have a grid of 16 tiles. Two numbers will be \n" ;
   cout << " \tgiven: usually two number twos, maybe number four. \n" ;

   cout << " \tMove up or down, left or right trying to join two equal numbers.\n" ;

   cout << " \tWhen two equal numbers are in touch, they will add up.\n";

   cout << " \tIf we are run out of equal numbers on our grid, or we can not \n" ;
   cout << " \tput them in touch, the game will provide us another two, a four\n" ;
   cout << " \tor even an eight so we can keep on playing. If there are no free\n" ;
   cout << " \ttiles on our grid, the game ends.\n" << endl ;

   system("PAUSE") ;

   system("CLS") ;

   main() ;

  }





