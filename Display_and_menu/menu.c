#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#include"menu.h"


void home_page() {

    system("Cls"); //clear the terminal
    int color ;
    for (color = 0 ; color<10 ; color++ ) { //display the logo 10 times 
        if (color % 2 == 0) //if color was even display it with green color
        system("color 0A");
        if (color % 2 == 1) //if it was odd display it with blue color
        system("color 0B");

        printf("\n\n\n\n\n\n\n\n");
        printf(
            "\t\t\t\t\t                                              iiii\n"
            "\t\t\t\t\t                                             i::::i\n"
            "\t\t\t\t\t                                              iiii\n\n"
            "\t\t\t\t\t        eeeeeeeeeeee          ssssssssss    iiiiiii\n"
            "\t\t\t\t\t      ee::::::::::::ee      ss::::::::::s   i:::::i\n"
            "\t\t\t\t\t     e::::::eeeee:::::ee  ss:::::::::::::s   i::::i\n"
            "\t\t\t\t\t    e::::::e     e:::::e  s::::::ssss:::::s  i::::i\n"
            "\t\t\t\t\t    e:::::::eeeee::::::e   s:::::s  ssssss   i::::i\n"
            "\t\t\t\t\t    e:::::::::::::::::e      s::::::s        i::::i\n"
            "\t\t\t\t\t    e::::::eeeeeeeeeee          s::::::s     i::::i\n"
            "\t\t\t\t\t    e:::::::e             ssssss   s:::::s   i::::i\n"
            "\t\t\t\t\t    e::::::::e            s:::::ssss::::::s i::::::i\n"
            "\t\t\t\t\t     e::::::::eeeeeeee    s::::::::::::::s  i::::::i\n"
            "\t\t\t\t\t      ee:::::::::::::e     s:::::::::::ss   i::::::i\n"
            "\t\t\t\t\t        eeeeeeeeeeeeee      sssssssssss     iiiiiiii\n"
        );

        Sleep(200);    //set a 200 ms delay betweeen each display 
        system("cls"); //clear the terminal after each display
    }

    system("cls");  // clear the terminal
    printf("\t\t\t\t\033[96m           Democratic Republic Of Algeria           \033[0m\n");
    printf("\t\t\t\t\033[96mMinistry Of Higher Education And Scientific Research\033[0m\n");
    printf("\t\t\t      \033[96m _______________________________________________________\n");
    printf("\t\t\t      \033[96m|        \033[92m_______\033[0m    \033[91m _______\033[0m    \033[97m _\033[0m                      \033[96m|\n");
    printf("\t\t\t      \033[96m|       \033[92m|  _____|\033[0m   \033[91m|  _____|\033[0m   \033[97m| |\033[0m  \033[92m%ccole nationale\033[0m    \033[96m|\n", 130);
    printf("\t\t\t      \033[96m|       \033[92m| |_____\033[0m    \033[91m| |_____\033[0m    \033[97m| |\033[0m                     \033[96m|\n");
    printf("\t\t\t      \033[96m|       \033[92m|  _____|\033[0m   \033[91m|_____  |\033[0m   \033[97m| |\033[0m  \033[91msup%crieure\033[0m         \033[96m|\n", 130);
    printf("\t\t\t      \033[96m|       \033[92m| |_____\033[0m    \033[91m _____| |\033[0m   \033[97m| |\033[0m                     \033[96m|\n");
    printf("\t\t\t      \033[96m|       \033[92m|_______|\033[0m   \033[91m|_______|\033[0m   \033[97m|_|\033[0m  \033[97md'informatique\033[0m     \033[96m|\n");
    printf("\t\t\t      \033[96m|_______________________________________________________|\033[0m\n\n");

    printf("\t\t\t\t\t\033[96m            1CP - 2023/2024 \n", 138, 130, 130);
    printf("\t\t\t\033[96m ___________________________________________________________________\n");
    printf("\t\t\t\033[96m|                                                                   |\n");
    printf("\t\t\t\033[96m|           REALISED BY :  \033[97m     Hadim Anes Abdelhak\033[96m                 |\n");
    printf("\t\t\t\033[96m|                                        &                          |\n");
    printf("\t\t\t\033[96m|                           \033[97m      Zeghmar Abdellah\033[96m                  |\n");
    printf("\t\t\t\033[96m|                                                                   |\n");
    printf("\t\t\t\033[96m|                                                                   |\n");
    printf("\t\t\t\033[96m|           SECTION :  \033[97mA\033[96m          GROUPE: \033[97m03\033[96m                        |\n");
    printf("\t\t\t\033[96m|                                                                   |\n");
    printf("\t\t\t\033[96m|           TP1 :  \033[97mPrime Numbers And Lists Manipulation\033[96m             |\n");
    printf("\t\t\t\033[96m|                                                                   |\n");
    printf("\t\t\t\033[96m|___________________________________________________________________|\n\n\n");


    printf("\t\t\t                              \033[91mPlease                                \n");
    printf("\t\t\t                   Enter Any Button To Continue...\033[0m               ");
    getch();

    system("cls");
}

//-----------------------------------------------//-----------------------------------------------//

void loading_page() {

    //just displaying a diffrent frame after each 300ms
    //and clear the terminal after each frame 

    system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");

    printf("\t\t\t\t\t\t|||                                                 5%%  ");
    Sleep(300);
    system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t|||||                                               20%%  ");
    Sleep(300);
    system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t||||||||||||||||                                    30%%  ");
    Sleep(300);
    system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t|||||||||||||||||||||||||                           45%%  ");
    Sleep(300);
    system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t|||||||||||||||||||||||||||||||                     60%%  ");
    Sleep(300);
    system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t||||||||||||||||||||||||||||||||||||||||            80%%  ");
    Sleep(300);
    system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t||||||||||||||||||||||||||||||||||||||||||||||||||  100%% ");
    system("cls");
}

//-----------------------------------------------//-----------------------------------------------//

cell* main_menu() {
    cell* head=NULL; //the head of the list 
    bool decision=false; //for menu logic 
    //Q3,Q4,Q5 must not be executed unless Q2 is executed
    int choice = 1;            //the option choosed (set default to one)
    int choice2=1;
    int max_choice = 5;        //the total number of options
    char c;                    //the keyboard key pressed by the user
         //loop until the user press ESC
    do
    {
            //loop until the user press Enter
        do
        {
            // display the menu each time the user updates his choice
            system("cls");

            printf("########################################################################################################################\n");
            printf("#%118c#\n",32);
            printf("#%52cMAIN MENU%57c#\n",32,32);
            printf("#%118c#\n",32);
            printf("########################################################################################################################\n");
            printf("#%118c#\n",32);
            printf("#%49cChoose an option:%52c#\n",32,32);
            printf("#%118c#\n",32);
            //the arrow will be before the choosed option 
            int i ;
            for (i = 1; i <= max_choice; i++)
            {
                if (i == choice)
                {
                    if (choice<=2 || (choice>2 && decision)) {
                       printf("#\033[34m --> ");
                    } else {
                        printf("#\033[31m --> ");
                    }
                } else {
                    printf("\033[0m#     "); 
                }
                switch (i)
                {
                  case 1:
                      printf("Q1) Search primes without using any structures%67c\033[0m#\n",32);
                      break;
                  case 2:
                      printf("Q2) Search primes using the two data structures%66c\033[0m#\n",32);
                      break;
                  case 3:
                      printf("Q3) Index the list%95c\033[0m#\n",32);
                      break;
                  case 4:
                      printf("Q4) Express each number as a prime product%71c\033[0m#\n",32);
                      break;
                  case 5:
                      printf("Q5) Find all co-prime numbers%84c\033[0m#\n",32);
                      break;
                }
            }

            printf("#%118c#\n",32);
            printf("#%118c#\n",32);
            printf("#%118c#\n",32);
            printf("########################################################################################################################\n");
            printf("#%118c#\n",32);
            printf("#%36c\033[31mHow to navigate throught the menu\033[0m%49c#\n",32,32);
            printf("#%26c\033[31mUse the Up and Down arrows or the numbers from 1 to %d\033[0m%39c#\n",32,max_choice,32);
            printf("#%26c\033[31mPress enter to choose the option after selecting it\033[0m%41c#\n",32,32);
            printf("#%36c\033[31mTo quite the program press 'Esc'\033[0m%50c#\n",32,32);
            printf("#%118c#\n",32);
            printf("########################################################################################################################\n");

            // get the keyboard key pressed by the user
      Read: c = getch();

            // change the arrow position or quite the program based on the c value (the key pressed)
            switch (c)
            {
            case 72: //Arrow Up
                if (choice > 1)
                {
                    choice--; //go up
                } else if (choice == 1)
                {
                    choice = max_choice; //or go to the last option (circularly)
                }
                break;
            case 80: // Arrow Down
                if (choice < max_choice)
                {
                    choice++; // go down
                } else if (choice == max_choice)
                {
                    choice = 1;  //or go to the first option (circularly)
                }
                break;
            case 49: //for the number '1'
                choice = 1;
                break;
            case 50: // '2'
                choice = 2;
                break;
            case 51: //'3'
                choice = 3;
                break;
            case 52: //'4'
                choice = 4;
                break;
            case 53: // '5'
                choice = 5;
                break;
            case 13:    // confirm the choice with Enter
                c = 13;
                break;
            case 27:    // quite the program after pressing ESC
                choice = 6;
                c = 13;
                break;
            default:
                goto Read;// Ignorer les autres touches et relire le choice
                break;
            }
      } while (c != 13); //repeat this loop until the key pressed is ESC
        // execute the user's choice
        system("Cls");
        int n; //the upper bound for Q1
        int range,max_ran; //to index the list
        
        switch (choice)
        {
          case 1:   
              printf("enter the upper bound : ");
              scanf("%d",&n);
              display_prime(n);
              printf("Press enter to continue :");
              getch();
              system("Cls");
              break;
          case 2:
              sub_menu_1(&head,&decision);
              break;
          case 3:
              if (decision)
              {
                max_ran=index_list(head,&range); 
                display_all_ranges(head);
                display_by_range(head,range,max_ran);
              }
              else{
                printf("You have to create the linked list first in question 2 dynamic implementation\n");
              }
              printf("Press enter to continue :");
              getch();
              system("Cls");
              break;
          case 4:
              if (decision)
              {
               createprime_prod(head);
               print_primeprod(head);
              }
             else{
                printf("You have to create the linked list first in question 2 dynamic implementation\n");
              }
              printf("Press enter to continue :");
              getch();
              system("Cls");
              break;
          case 5:
                if (decision)
              {
                find_coprime(head);
              }
             else{
                printf("You have to create the linked list first in question 2 dynamic implementation\n");
             }
             printf("Press enter to continue :");
             getch();
             system("Cls");
              break;
        }
    } while(choice != 6);


    // End of Program
    system("cls");
    printf("\n\n        thank you for using our program\n\n");
    printf("        Press enter to quite the program . . .");
    getchar();
    return head;
}

void sub_menu_1(cell** head,bool* decision) {

    int choice = 1;                             
    int max_choice = 3;                       
    char c;   

    do {
        
        do
        {

            system("cls");

            printf("########################################################################################################################\n");
            printf("#%118c#\n",32);
            printf("Q2) Search primes using the two data structures%66c\033[0m#\n",32);
            printf("#%118c#\n",32);
            printf("########################################################################################################################\n");
            printf("#%118c#\n",32);
            printf("#%47cchoose an option:%47c#\n",32,32);
            printf("#%118c#\n",32);
            int i ;
            for (i = 1; i <= max_choice; i++)
            {
                if (i == choice)
                {
                    printf("\033[34m# --> ");
                } else {
                    printf("#     "); 
                }
                switch (i)
                {
                case 1:
                    printf("1) Static implementation%93c\033[0m#\n",32);
                    break;
                case 2:
                    printf("2) Dynamic implementation (Linked list)%78c\033[0m#\n",32);
                    break;
                case 3:
                    printf("3) Return to main menu%83c\033[0m#\n",32);
                    break;
                }
            }

            // La suite de l'affichage
            printf("#%118c#\n",32);
            printf("#%118c#\n",32);
            printf("#%118c#\n",32);
            printf("#%118c#\n",32);
            printf("#%118c#\n",32);
            printf("#%118c#\n",32);
            printf("#%118c#\n",32);
            printf("#%118c#\n",32);
            printf("#%118c#\n",32);
            printf("#%118c#\n",32);
            printf("########################################################################################################################\n");
            printf("#%118c#\n",32);
            printf("#%36c\033[31mHow to navigate throught the menu\033[0m%49c#\n",32,32);
            printf("#%26c\033[31mUse the Up and Down arrows or the numbers from 1 to %d\033[0m%39c#\n",32,max_choice,32);
            printf("#%26c\033[31mPress enter to choose the option after selecting it\033[0m%41c#\n",32,32);
            printf("#%36c\033[31mTo quite the program press 'Esc'\033[0m%50c#\n",32,32);
            printf("#%118c#\n",32);
            printf("########################################################################################################################\n");

            
 Read1 :   c = getch();

            
            switch (c)
            {
            case 72: 
                if  (choice > 1)
                {
                 choice--; 
                } else if (choice == 1)
                {
                 choice = max_choice; 
                }
                break;
            case 80: 
                if (choice < max_choice)
                {
                 choice++; 
                } else if  (choice == max_choice)
                {
                 choice = 1;  
                }
                break;
            case 49:
             choice = 1;
                break;
            case 50:
             choice = 2;
                break;
            case 51:
             choice = 3;
                break;
            case 13:  
                c = 13;
                break;
            default:
            goto Read1;
                break; 
            }
        }while (c != 13); 

        system("cls");
        int array_size; //the upper bound for the array
        int size; //the upper bound for the list
        
        switch  (choice)
        {
        case 1:
            printf("enter the upper bound : ");
            scanf("%d",&array_size);
            primes* Array;
            createprime_array(&Array,array_size);
            check_primes(Array,array_size);
            print_prime(Array,array_size);
            free(Array);
            printf("Press enter to continue :");
            getch();
            system("Cls");
            break;
        case 2:
            printf("enter the upper bound : ");
            scanf("%d",&size);
            create_prime_list(size-1,&(*head));
            check_prime(*head);
            printprime_list(*head);
            *decision=true;
            printf("Press enter to continue :");
            getch();
            system("Cls");
            break;
        }
    }while (choice != 3);
}