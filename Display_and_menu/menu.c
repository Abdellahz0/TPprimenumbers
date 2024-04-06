#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#include"menu.h"


void home_page() {  //displays ESI logo

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

void loading_page() { //displays a simple loading animation

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

void hold_results() { //to let the user see the results before clearing the terminal
    printf("\npress Enter to continue");
    getch();
    system("Clr");
}

cell* main_menu() { //the menu where the user manipulates the differente questions in the TP
    
    cell* head=NULL; //the head of the list 
    bool decision=false; //for menu logic Q2
    //Q3 must not be executed unless Q2 is executed
    bool decision1=false; // for menu logic Q4
    //Q4 must not be executed unless Q2 and Q3 are executed 
    bool decision2=false; //for menu logic Q5 
    //Q5 must not be executed unless Q2 and Q4 are executed
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
                    //if the option is not accessable display it with red otherwise display it with blue
                    if (choice<=2 || (choice==3 && decision) || (choice==4 && decision1) || (choice==5 && decision2)) {
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
        int size; //the upper bound for Q2 dynamic
        int range,max_ran; //to index the list
        int iter1=0,iter2=0,iter3=0; //number of iterations in Q6 
        
        switch (choice)
        {
          case 1:  //Q1 not data structures 
              printf("enter the upper bound : "); 
              scanf("%d",&n);
              display_prime(n,&iter1);
              printf("the number of iterations is %d",iter1);
              hold_results();
              break;
          case 2: //Q2 with data structures
              size=sub_menu_1(&head,&decision,&iter3,&iter2);
              break;
          case 3: //Q3 index the list
              if (decision) //index the list only if it exists (Q2 executed) 
              {
                max_ran=index_list(head,&range);
                decision1=true; //to open Q4 for the user
                //some explanations on how we understood Q3 and how we did it 
                printf("to index the list we choosed to put in each range %d prime numbers\n",range);
                printf("for example the first range is from 2 to %d\n",value(nextind(head)));
                printf("but it contains the following %d primes :\n",range);
                display_by_range(head,1,range,max_ran);
                printf("\nindexed list efficiency :\n");
                printf("let's take for example the number %d\n",size);
                cell* test=search_by_range(head,size);
                printf("to get the address of the cell helding it which is %p\n",test);
                printf("we will iterate %d times using the normal list but %d times using the indexed one\n",size-2,max_ran);
                hold_results();
                sub_menu_2(head,range,max_ran,size); //some modules that uses the indexed list
              }
              else{
                printf("You have to create the linked list first in question 2 dynamic implementation\n");
                hold_results();
              }
              break;
          case 4:
              if (decision && decision1) //if Q2 and Q3 were executed
              {
               //Q3 is not necessary for creating the prime products inner_lists but some displaying modules in Q4 uses the indexed list
               createprime_prod(head);
               decision2=true; //open Q5 for the user
               sub_menu_3(head,size);
              }
             else {
               if (!decision){ //if Q2 and Q3 are both not executed
                 printf("You have to create the linked list first in question 2 dynamic implementation\n");
                 printf("then index it in Q3\n");
               } else { //if Q2 was executed but Q3 is not
                 printf("you have to index the list in Q3\n");
               }
               hold_results();
             }
              break;
          case 5:
                if (decision && decision2) //if Q2 ,Q3 and Q4 are already executed
              {
                sub_menu_4(head,size);
              }
             else {
                //the reason why we need Q4 to be executed is that we are using the prime product lists to determine co-prime numbers
                //and the reason why we need Q3 is because some modules uses the indexed list for searching values addresses
                if(!decision){
                  printf("You have to create the linked list first in question 2 dynamic implementation\n then create the prime product sub-list in question 4 after indexing the list\n");
               } else if (!decision1) {
                  printf("You have to index the list in question 3 and create the prime product in question 4\n");
               } else {
                  printf("You have to create the prime product sub-list in question 4\n");
               }
               hold_results();
             }
              break;
        }
    } while(choice != 6);


    // End of Program
    system("cls");
    printf("\n\n        thank you for using our program\n\n");
    printf("        Press enter to quite the program . . .");
    getch();
    return head;
}

//sub-menus logic same as the main-menu to get the arrow animation

int sub_menu_1(cell** head,bool* decision,int *iter3,int *iter2) {
    
    int choice = 1;                             
    int max_choice = 3;                       
    char c;   

    int array_size; //the upper bound for the array
    int size; //the upper bound for the list

    do {
        
        do
        {

            system("cls");

            printf("########################################################################################################################\n");
            printf("#%118c#\n",32);
            printf("#%30cQ2) Search primes using the two data structures%41c\033[0m#\n",32,32);
            printf("#%118c#\n",32);
            printf("########################################################################################################################\n");
            printf("#%118c#\n",32);
            printf("#%47cchoose an option:%54c#\n",32,32);
            printf("#%118c#\n",32);
            int i ;
            for (i = 1; i <= max_choice; i++)
            {
                if (i == choice)
                {
                    printf("#\033[34m --> ");
                } else {
                    printf("#     "); 
                }
                switch (i)
                {
                case 1:
                    printf("1) Static implementation%89c\033[0m#\n",32);
                    break;
                case 2:
                    printf("2) Dynamic implementation (Linked list)%74c\033[0m#\n",32);
                    break;
                case 3:
                    printf("3) Return to main menu%91c\033[0m#\n",32);
                    break;
                }
            }

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
        
        switch  (choice)
        {
        case 1:
            printf("enter the upper bound : ");
            scanf("%d",&array_size);
            primes* Array;
            createprime_array(&Array,array_size);
            check_primes(Array,array_size,&(*iter3));
            print_prime(Array,array_size);
            free(Array);
            printf("the number of iterations is %d",*iter3);
            *iter3=0;
            hold_results();
            break;
        case 2:
            printf("enter the upper bound : ");
            scanf("%d",&size);
            create_prime_list(size-1,&(*head));
            check_prime(*head,&(*iter2));
            printprime_list(*head);
            printf("the numeber of iterations is %d",*iter2);
            *iter2=0;
            *decision=true;
            hold_results();
            break;
        }
    }while (choice != 3);

    return size;
}

void sub_menu_2(cell* head,int range,int max_ran,int size) {

    int choice = 1;                             
    int max_choice = 4;                       
    char c;   

    do {
        
        do
        {

            system("cls");

            printf("########################################################################################################################\n");
            printf("#%118c#\n",32);
            printf("#%47cQ3) Index the list%53c\033[0m#\n",32,32);
            printf("#%118c#\n",32);
            printf("########################################################################################################################\n");
            printf("#%118c#\n",32);
            printf("#%47cchoose an option:%54c#\n",32,32);
            printf("#%118c#\n",32);
            int i ;
            for (i = 1; i <= max_choice; i++)
            {
                if (i == choice)
                {
                    printf("#\033[34m --> ");
                } else {
                    printf("#     "); 
                }
                switch (i)
                {
                case 1:
                    printf("1) Display all ranges%92c\033[0m#\n",32);
                    break;
                case 2:
                    printf("2) Display a chosen range%88c\033[0m#\n",32);
                    break;
                case 3:
                    printf("3) Display prime numbers between two values%70c\033[0m#\n",32);
                    break;
                case 4:
                    printf("4) Return to main menu%91c\033[0m#\n",32);
                    break;
                }
            }

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
            case 52:
             choice = 4;
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
        int pos; 
        
        switch  (choice)
        {
        case 1:
            display_all_ranges(head);
            hold_results();
            break;
        case 2:
             do {
                printf("which range you want to print : ");
                scanf("%d",&pos);  
            } while (pos>max_ran || pos<1);
            display_by_range(head,pos,range,max_ran);
            hold_results();
            break;
        case 3:
            display_primes_by_range(head,size);
            hold_results();
            break;
        }
    } while (choice != 4);
}

void sub_menu_3(cell* head,int size) {
    int val;
    int choice = 1;                             
    int max_choice = 3;                       
    char c;   

    do {
        
        do
        {

            system("cls");

            printf("########################################################################################################################\n");
            printf("#%118c#\n",32);
            printf("#%37cQ4) Express each number as a prime product%39c\033[0m#\n",32,32);
            printf("#%118c#\n",32);
            printf("########################################################################################################################\n");
            printf("#%118c#\n",32);
            printf("#%47cchoose an option:%54c#\n",32,32);
            printf("#%118c#\n",32);
            int i ;
            for (i = 1; i <= max_choice; i++)
            {
                if (i == choice)
                {
                    printf("#\033[34m --> ");
                } else {
                    printf("#     "); 
                }
                switch (i)
                {
                case 1:
                    printf("1) Display all prime products%84c\033[0m#\n",32);
                    break;
                case 2:
                    printf("2) Display the prime product of a chosen number%66c\033[0m#\n",32);
                    break;
                case 3:
                    printf("3) Return to main menu%91c\033[0m#\n",32);
                    break;
                }
            }

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
        
        switch  (choice)
        {
        case 1:
            print_primeprod(head);
            hold_results();
            break;
        case 2:
            do {
              printf("between 2 and %d ",size);
              printf("Enter the number you want to know its prime product :");
              scanf("%d",&val);
            } while (val<2 || val>size);
            print_primeprod_num(head,val);
            hold_results();
            break;
        }
    }while (choice != 3);
}

void sub_menu_4(cell* head,int size) {

    int choice = 1;                             
    int max_choice = 3;                       
    char c;   

    do {
        
        do
        {

            system("cls");

            printf("########################################################################################################################\n");
            printf("#%118c#\n",32);
            printf("#%45cQ5) Find all co-prime numbers%44c\033[0m#\n",32,32);
            printf("#%118c#\n",32);
            printf("########################################################################################################################\n");
            printf("#%118c#\n",32);
            printf("#%47cchoose an option:%54c#\n",32,32);
            printf("#%118c#\n",32);
            int i ;
            for (i = 1; i <= max_choice; i++)
            {
                if (i == choice)
                {
                    printf("#\033[34m --> ");
                } else {
                    printf("#     "); 
                }
                switch (i)
                {
                case 1:
                    printf("1) Display all co-prime numbers%82c\033[0m#\n",32);
                    break;
                case 2:
                    printf("2) Display the co-prime numbers with a chosen number%61c\033[0m#\n",32);
                    break;
                case 3:
                    printf("3) Return to main menu%91c\033[0m#\n",32);
                    break;
                }
            }

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
        
        switch  (choice)
        {
        case 1:
            find_all_coprime(head);
            hold_results();
            break;
        case 2:
            find_coprime(head,size);
            hold_results();
            break;
        }
    }while (choice != 3);
}