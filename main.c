#include"Display_and_menu\menu.h"


int main() {
  home_page();
  loading_page();
  cell* head=main_menu();
  free_innerlists(head);
  free_list(head);
  return 0;
}


// to be added later


// void sous_menu_1() {
      
// };

// void sous_menu_2() {
//     if (1){
//         // D�finir les variables
//         int choise = 1;                             // Option s�lectionn�e par d�faut
//         int max_choise = 9;                        // Nombre total d'options
//         char c;                                    // Variable d'entr�e utilisateur

//         // Boucler jusqu'� ce que l'utilisateur s�lectionne le retoure au menu principale
//         do {
//             // Boucler jusqu'� ce que l'utilisateur s�lectionne une option
//             do
//             {
//                 // Effacer l'�cran et afficher le menu avec l'option s�lectionn�e mise en �vidence
//                 system("cls");

//                 printf("########################################################################################################################\n");
//                 printf("#%118c#\n",32);
//                 printf("#%48cAfficher la structure%49c#\n",32,32);
//                 printf("#%118c#\n",32);
//                 printf("########################################################################################################################\n");
//                 printf("#%118c#\n",32);
//                 printf("#%47cS%clectionnez une option:%47c#\n",32,130,32);
//                 printf("#%118c#\n",32);
//                 int i ;
//                 for (i = 1; i <= max_choise; i++)
//                 {
//                     if (i == choise)
//                     {
//                         printf("# --> "); // Mettre en �vidence l'option s�lectionn�e
//                     } else {
//                         printf("#     "); // Mettre en �vidence l'option non s�lectionn�e
//                     }
//                     switch (i)
//                     {
//                     case 1:
//                         printf("1) Afficher toute la structure simplement%72c#\n",32);
//                         break;
//                     case 2:
//                         printf("2) Afficher toute la structure en ordre croissant en detail%54c#\n",32);
//                         break;
//                     case 3:
//                         printf("3) Afficher toute la structure en ordre croissant sans detail%52c#\n",32);
//                         break;
//                     case 4:
//                         printf("4) Afficher toute la structure en ordre decroissant sans detail%50c#\n",32);
//                         break;
//                     case 5:
//                         printf("5) Afficher les mots qui commencent par une lettre donn%ce en ordre croissant en detail%27c#\n",130,32);
//                         break;
//                     case 6:
//                         printf("6) Afficher les mots qui commencent par une lettre donn%ce en ordre croissant sans detail%25c#\n",130,32);
//                         break;
//                     case 7:
//                         printf("7) Afficher un mot sp%ccifique et ses syllabes%68c#\n",130,32);
//                         break;
//                     case 8:
//                         printf("8) Afficher les statistiques du dictionnaire%69c#\n",32);
//                         break;
//                     case 9:
//                         printf("9) Retourner au menu principal%83c#\n",32);
//                         break;
//                     }
//                 }

//                 // La suite de l'affichage
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("########################################################################################################################\n");
//                 printf("#%118c#\n",32);
//                 printf("#%53c\033[31mNote d'usage\033[0m%53c#\n",32,32);
//                 printf("#%27c\033[31mUtilisez les fl%cches haut et bas du clavier ou les chiffres pour\033[0m%27c#\n",32,138,32);
//                 printf("#%26c\033[31ms%clectionner votre choise, puis appuyez sur Entr%ce pour confirmer. \033[0m%26c#\n",32,130,130,32);
//                 printf("#%118c#\n",32);
//                 printf("########################################################################################################################\n");

//                 // Attendre l'entr�e utilisateur
//     Read2:      c = getch();

//                 // Mettre � jour l'option s�lectionn�e en fonction de l'entr�e utilisateur
//                 switch (c)
//                 {
//                 case 72: // Fl�che vers le haut
//                     if (choise > 1)
//                     {
//                         choise--; // D�placer la s�lection vers le haut
//                     } else if (choise == 1)
//                     {
//                         choise = max_choise; // Revenir circulerement
//                     }
//                     break;
//                 case 80: // Fl�che vers le bas
//                     if (choise < max_choise)
//                     {
//                         choise++; // D�placer la s�lection vers le bas
//                     } else if (choise == max_choise)
//                     {
//                         choise = 1;  // Revenir circulerement
//                     }
//                     break;
//                 case 49:
//                     choise = 1;
//                     break;
//                 case 50:
//                     choise = 2;
//                     break;
//                 case 51:
//                     choise = 3;
//                     break;
//                 case 52:
//                     choise = 4;
//                     break;
//                 case 53:
//                     choise = 5;
//                     break;
//                 case 54:
//                     choise = 6;
//                     break;
//                 case 55:
//                     choise = 7;
//                     break;
//                 case 56:
//                     choise = 8;
//                     break;
//                 case 57:
//                     choise = 9;
//                     break;
//                 case 13:    // La confirmation du choise
//                     c = 13;
//                     break;
//                 default:
//                     goto Read2;
//                     break; // Ignorer les autres touches
//                 }
//             } while (c != 13); // Continuer la boucle jusqu'� ce que l'utilisateur appuie sur la touche Entr�e

//             int i;
//             char h;
//             // Traiter le choise final de l'utilisateur
//             switch (choise)
//             {
//             case 1:
//                 system("cls");
//                 // Affiche_mots_simple();
//                 printf("        Clicker sur Entrer pour retourner . . .");
//                 getchar();
//                 break;
//             case 2:
//                 system("cls");
//                 // for (i = 0 ; i < LETTER_ALPHABETIC ; i++) {
//                 //     Affiche_liste_mots_n_details(i);
//                 // }
//                 printf("        Clicker sur Entrer pour retourner . . .");
//                 getchar();
//                 break;
//             case 3:
//                 system("cls");
//                 // for (i = 0 ; i < LETTER_ALPHABETIC ; i++) {
//                 //     Affiche_liste_mots_n(i);
//                 // }
//                 printf("        Clicker sur Entrer pour retourner . . .");
//                 getchar();
//                 break;
//             case 4:
//                 system("cls");
//                 // for (i = 0 ; i < LETTER_ALPHABETIC ; i++) {
//                 //     Affiche_liste_mots_inv_n(i);
//                 // }
//                 printf("        Clicker sur Entrer pour retourner . . .");
//                 getchar();
//                 break;
//             case 5:
//                 system("cls");
//                 printf("Donnez la lettre que vous voullez afficher :");
//                 scanf("%c",&h);
//                 getchar();
//                 // Affiche_liste_mots_n_details(tolower(h) - 97);
//                 printf("        Clicker sur Entrer pour retourner . . .");
//                 getchar();
//                 break;
//             case 6:
//                 system("cls");
//                 printf("Donnez la lettre que vous voullez afficher :");
//                 scanf("%c",&h);
//                 getchar();
//                 if (1) {
//                     // Affiche_liste_mots_n(tolower(h) - 97);
//                 }
//                 printf("        Clicker sur Entrer pour retourner . . .");
//                 getchar();
//                 break;
//             case 7:
//                 system("cls");
//                 // Affiche_mots_simple();
//                 printf("Donner le mot que vous voullais afficher : ");
//                 char M[25]; // Le mot a rechercher
//                 fgets(M , 25 , stdin);
//                 // M[strlen(M)] = '\0';
//                 // supp_no_alpha(M);
//                 // ptrwords k; // Le pointeur vers le mot
//                 // k = Rech_mot(M);
//                 if (1) {
//                     printf("Le mot n'existe pas\n");
//                 } else {
//                     // Affiche_mot(k);
//                     // Affiche_liste_syl(k);
//                 }
//                 printf("        Clicker sur Entrer pour retourner . . .");
//                 getchar();
//                 break;
//             case 8:
//                 system("cls");
//                 printf("        Les statistiques du dictionnaire\n");
//                 int cpt = 0;
//                 // for (i = 0 ; i < LETTER_ALPHABETIC ; i++) {
//                 //     cpt = cpt + T[i].nb_word;
//                 // }
//                 // printf(" O Le nombre de mots : %d\n", cpt);
//                 // printf(" O Le nombre de sous liste de question 1 : %d\n", size1);
//                 // printf(" O Le nombre de sous liste de question 2 : %d\n", size2);
//                 // printf(" O Le nombre de sous liste de question 3 : %d\n", size3);
//                 // printf(" O Le nombre de sous liste de question 4 : %d\n", size4);
//                 // printf(" O Le nombre de sous liste de question 5 : %d\n", size5);
//                 printf("        Clicker sur Entrer pour retourner . . .");
//                 getchar();
//                 break;
//             default:
//                 break;
//             }
//         }while(choise != 9);
//     } else {
//         system("cls");
//         printf("Executer d'abord l'option 1 pour cr%cer la sturcutre .",130);
//         getchar();
//     }
// };

// void sous_menu_3() {
//     if (1){
//         char mot[25];
//         char c = 'y';
//         // ptrwords g;
//         while(c == 'y' || c == 'Y') {
//             system("cls");

//             printf("        Ajouter des mots:\n");

//             // Affiche_mots_simple();

//             printf("Veuillez taper le mot %c ajouter puis la touche Entrer pour valider: ",133);
//             fgets(mot , 25 , stdin);
//             // if (1 < strlen(mot) && mot[strlen(mot) - 1] == '\n' )
//             // {
//             //     mot[strlen(mot) - 1] = '\0'; // Supprime le caract�re de nouvelle ligne � la fin
//             // }
//             // if (isalpha(mot[0]))
//             // {
//             //     // g = Rech_mot(mot);
//             //     if (1)
//             //         printf("Le mot \"%s\" existe !\n",mot);
//             //     else
//             //     {
//             //         reinit_base_donnees();
//             //         ajout_mot(mot);
//             //         // Remplire_sous_chaine(&size1);
//             //         // Remplire_ED_ING(&size2);
//             //         // Remplir_sequences_mots(&size3);
//             //         // Remplir_prochelex(&size4);
//             //         // Remplir_anagrammes(&size5);
//             //         system("cls");
//             //         Affiche_mots_simple();
//             //     }
//             // }
//             printf("Voulez-vous ajouter un autre mot (tapez y pour oui ou n pour non) ? ");
//             c = getchar();
//             getchar(); // Consomme le caract�re de nouvelle ligne

//             while(c != 'y' && c != 'Y' && c != 'n' && c != 'N') {
//                 printf("Veuillez taper y pour oui ou n pour non : ");
//                 c = getchar();
//                 getchar(); // Consomme le caract�re de nouvelle ligne
//             }
//         }

//         // Attendre que l'utilisateur appuie sur une touche pour retourner au menu principal
//         printf("        Cliquer sur Entrer pour retourner au menu principal . . .");
//         getchar();
//     } else {
//         system("cls");
//         printf("Executer d'abord l'option 1 pour cr%cer la sturcutre .",130);
//         getchar();
//     }
// }

// void sous_menu_4() {
//     if (1){
//         char mot[25];
//         char c = 'y';
//         // ptrwords g;
//         while(c == 'y' || c == 'Y') {
//             system("cls");

//             printf("        Supprimer des mots:\n");

//             // Affiche_mots_simple();

//             printf("Veuillez taper le mot %c supprimer puis la touche Entrer pour valider: ",133);
//             fgets(mot , 25 , stdin);
//             // if (1 < strlen(mot) && mot[strlen(mot) - 1] == '\n' )
//             // {
//             //     mot[strlen(mot) - 1] = '\0'; // Supprime le caract�re de nouvelle ligne � la fin
//             // }

//             // // g = Rech_mot(mot);
//             if (1)
//                 printf("Le mot \"%s\" n'existe pas !\n",mot);
//             else
//             {
//                 // Supp_mot(g);
//                 // reinit_base_donnees();
//                 // Remplire_sous_chaine(&size1);
//                 // Remplire_ED_ING(&size2);
//                 // Remplir_sequences_mots(&size3);
//                 // Remplir_prochelex(&size4);
//                 // Remplir_anagrammes(&size5);
//                 system("cls");
//                 // Affiche_mots_simple();
//             }
//             printf("Voulez-vous supprimer un autre mot (tapez y pour oui ou n pour non) ? ");
//             c = getchar();
//             getchar(); // Consomme le caract�re de nouvelle ligne

//             while(c != 'y' && c != 'Y' && c != 'n' && c != 'N') {
//                 printf("Veuillez taper y pour oui ou n pour non : ");
//                 c = getchar();
//                 getchar(); // Consomme le caract�re de nouvelle ligne
//             }
//         }

//         // Attendre que l'utilisateur appuie sur une touche pour retourner au menu principal
//         printf("        Cliquer sur Entrer pour retourner au menu principal . . .");
//         getchar();
//     } else {
//         system("cls");
//         printf("Executer d'abord l'option 1 pour cr%cer la sturcutre .",130);
//         getchar();
//     }
// }

// void sous_menu_5() {
//     if (1){
//         // D�finir les variables
//         int choise = 1;                             // Option s�lectionn�e par d�faut
//         int max_choise = 3;                        // Nombre total d'options
//         char c;                                    // Variable d'entr�e utilisateur

//         // Boucler jusqu'� ce que l'utilisateur s�lectionne le retoure au menu principale
//         do {
//             // Boucler jusqu'� ce que l'utilisateur s�lectionne une option
//             do
//             {
//                 // Effacer l'�cran et afficher le menu avec l'option s�lectionn�e mise en �vidence
//                 system("cls");

//                 printf("########################################################################################################################\n");
//                 printf("#%118c#\n",32);
//                 printf("#%39cLes mots + participe pass%ce + forme ing%40c#\n",32,130,32);
//                 printf("#%118c#\n",32);
//                 printf("########################################################################################################################\n");
//                 printf("#%118c#\n",32);
//                 printf("#%47cS%clectionnez une option:%47c#\n",32,130,32);
//                 printf("#%118c#\n",32);
//                 int i ;
//                 for (i = 1; i <= max_choise; i++)
//                 {
//                     if (i == choise)
//                     {
//                         printf("# --> "); // Mettre en �vidence l'option s�lectionn�e
//                     } else {
//                         printf("#     "); // Mettre en �vidence l'option non s�lectionn�e
//                     }
//                     switch (i)
//                     {
//                     case 1:
//                         printf("1) Afficher les mots%93c#\n",32);
//                         break;
//                     case 2:
//                         printf("2) Afficher le nombre de sous liste%78c#\n",32);
//                         break;
//                     case 3:
//                         printf("3) Retourner au menu principal%83c#\n",32);
//                         break;
//                     }
//                 }

//                 // La suite de l'affichage
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("########################################################################################################################\n");
//                 printf("#%118c#\n",32);
//                 printf("#%53c\033[31mNote d'usage\033[0m%53c#\n",32,32);
//                 printf("#%27c\033[31mUtilisez les fl%cches haut et bas du clavier ou les chiffres pour\033[0m%27c#\n",32,138,32);
//                 printf("#%26c\033[31ms%clectionner votre choise, puis appuyez sur Entr%ce pour confirmer. \033[0m%26c#\n",32,130,130,32);
//                 printf("#%118c#\n",32);
//                 printf("########################################################################################################################\n");

//                 // Attendre l'entr�e utilisateur
//     Read5 :    c = getch();

//                 // Mettre � jour l'option s�lectionn�e en fonction de l'entr�e utilisateur
//                 switch (c)
//                 {
//                 case 72: // Fl�che vers le haut
//                     if (choise > 1)
//                     {
//                         choise--; // D�placer la s�lection vers le haut
//                     } else if (choise == 1)
//                     {
//                         choise = max_choise; // Revenir circulerement
//                     }
//                     break;
//                 case 80: // Fl�che vers le bas
//                     if (choise < max_choise)
//                     {
//                         choise++; // D�placer la s�lection vers le bas
//                     } else if (choise == max_choise)
//                     {
//                         choise = 1;  // Revenir circulerement
//                     }
//                     break;
//                 case 49:
//                     choise = 1;
//                     break;
//                 case 50:
//                     choise = 2;
//                     break;
//                 case 51:
//                     choise = 3;
//                     break;
//                 case 13:    // La confirmation du choise
//                     c = 13;
//                     break;
//                 default:
//                 goto Read5;
//                     break; // Ignorer les autres touches
//                 }
//             } while (c != 13); // Continuer la boucle jusqu'� ce que l'utilisateur appuie sur la touche Entr�e

//             // Traiter le choise final de l'utilisateur
//             switch (choise)
//             {
//             case 1:
//                 system("cls");
//                 // Affiche_mot_ed_ing(size2);
//                 printf("        Clicker sur Entrer pour retourner . . .");
//                 getchar();
//                 break;
//             case 2:
//                 system("cls");
//                 printf(" O Le nombre de sous liste de ed et ing : %d\n",2);
//                 printf("        Clicker sur Entrer pour retourner . . .");
//                 getchar();
//                 break;
//             default:
//                 break;
//             }
//         }while(choise != 3);
//     } else {
//         system("cls");
//         printf("Executer d'abord l'option 1 pour cr%cer la sturcutre .",130);
//         getchar();
//     }
// }
// void sous_menu_6() {
//     if (Creation_structure){
//         // D�finir les variables
//         int choise = 1;                             // Option s�lectionn�e par d�faut
//         int max_choise = 3;                        // Nombre total d'options
//         char c;                                    // Variable d'entr�e utilisateur

//         // Boucler jusqu'� ce que l'utilisateur s�lectionne le retoure au menu principale
//         do {
//             // Boucler jusqu'� ce que l'utilisateur s�lectionne une option
//             do
//             {
//                 // Effacer l'�cran et afficher le menu avec l'option s�lectionn�e mise en �vidence
//                 system("cls");

//                 printf("########################################################################################################################\n");
//                 printf("#%118c#\n",32);
//                 printf("#%35cAfficher les mots les plus proches lexicalement%36c#\n",32,32);
//                 printf("#%118c#\n",32);
//                 printf("########################################################################################################################\n");
//                 printf("#%118c#\n",32);
//                 printf("#%47cS%clectionnez une option:%47c#\n",32,130,32);
//                 printf("#%118c#\n",32);
//                 int i ;
//                 for (i = 1; i <= max_choise; i++)
//                 {
//                     if (i == choise)
//                     {
//                         printf("# --> "); // Mettre en �vidence l'option s�lectionn�e
//                     } else {
//                         printf("#     "); // Mettre en �vidence l'option non s�lectionn�e
//                     }
//                     switch (i)
//                     {
//                     case 1:
//                         printf("1) Afficher les mots%93c#\n",32);
//                         break;
//                     case 2:
//                         printf("2) Afficher le nombre de sous liste%78c#\n",32);
//                         break;
//                     case 3:
//                         printf("3) Retourner au menu principal%83c#\n",32);
//                         break;
//                     }
//                 }

//                 // La suite de l'affichage
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("########################################################################################################################\n");
//                 printf("#%118c#\n",32);
//                 printf("#%53c\033[31mNote d'usage\033[0m%53c#\n",32,32);
//                 printf("#%27c\033[31mUtilisez les fl%cches haut et bas du clavier ou les chiffres pour\033[0m%27c#\n",32,138,32);
//                 printf("#%26c\033[31ms%clectionner votre choise, puis appuyez sur Entr%ce pour confirmer. \033[0m%26c#\n",32,130,130,32);
//                 printf("#%118c#\n",32);
//                 printf("########################################################################################################################\n");

//                 // Attendre l'entr�e utilisateur
//     Read6 :     c = getch();

//                 // Mettre � jour l'option s�lectionn�e en fonction de l'entr�e utilisateur
//                 switch (c)
//                 {
//                 case 72: // Fl�che vers le haut
//                     if (choise > 1)
//                     {
//                         choise--; // D�placer la s�lection vers le haut
//                     } else if (choise == 1)
//                     {
//                         choise = max_choise; // Revenir circulerement
//                     }
//                     break;
//                 case 80: // Fl�che vers le bas
//                     if (choise < max_choise)
//                     {
//                         choise++; // D�placer la s�lection vers le bas
//                     } else if (choise == max_choise)
//                     {
//                         choise = 1;  // Revenir circulerement
//                     }
//                     break;
//                 case 49:
//                     choise = 1;
//                     break;
//                 case 50:
//                     choise = 2;
//                     break;
//                 case 51:
//                     choise = 3;
//                     break;
//                 case 13:    // La confirmation du choise
//                     c = 13;
//                     break;
//                 default:
//                     goto Read6;
//                     break; // Ignorer les autres touches
//                 }
//             } while (c != 13); // Continuer la boucle jusqu'� ce que l'utilisateur appuie sur la touche Entr�e

//             // Traiter le choise final de l'utilisateur
//             switch (choise)
//             {
//             case 1:
//                 system("cls");
//                 Affiche_proche_lex(size4);
//                 printf("        Clicker sur Entrer pour retourner . . .");
//                 getchar();
//                 break;
//                 break;
//             case 2:
//                 system("cls");
//                 printf(" O Le nombre de sous liste de proche lexicalement : %d\n", size4);
//                 printf("        Clicker sur Entrer pour retourner . . .");
//                 getchar();
//                 break;
//             default:
//                 break;
//             }
//         }while(choise != 3);
//     } else {
//         system("cls");
//         printf("Executer d'abord l'option 1 pour cr%cer la sturcutre .",130);
//         getchar();
//     }
// }

// void sous_menu_7() {
//     if (Creation_structure){
//         // D�finir les variables
//         int choise = 1;                             // Option s�lectionn�e par d�faut
//         int max_choise = 3;                        // Nombre total d'options
//         char c;                                    // Variable d'entr�e utilisateur

//         // Boucler jusqu'� ce que l'utilisateur s�lectionne le retoure au menu principale
//         do {
//             // Boucler jusqu'� ce que l'utilisateur s�lectionne une option
//             do
//             {
//                 // Effacer l'�cran et afficher le menu avec l'option s�lectionn�e mise en �vidence
//                 system("cls");

//                 printf("########################################################################################################################\n");
//                 printf("#%118c#\n",32);
//                 printf("#%47cAfficher les anagrammes%48c#\n",32,32);
//                 printf("#%118c#\n",32);
//                 printf("########################################################################################################################\n");
//                 printf("#%118c#\n",32);
//                 printf("#%47cS%clectionnez une option:%47c#\n",32,130,32);
//                 printf("#%118c#\n",32);
//                 int i ;
//                 for (i = 1; i <= max_choise; i++)
//                 {
//                     if (i == choise)
//                     {
//                         printf("# --> "); // Mettre en �vidence l'option s�lectionn�e
//                     } else {
//                         printf("#     "); // Mettre en �vidence l'option non s�lectionn�e
//                     }
//                     switch (i)
//                     {
//                     case 1:
//                         printf("1) Afficher les mots%93c#\n",32);
//                         break;
//                     case 2:
//                         printf("2) Afficher le nombre de sous liste%78c#\n",32);
//                         break;
//                     case 3:
//                         printf("3) Retourner au menu principal%83c#\n",32);
//                         break;
//                     }
//                 }

//                 // La suite de l'affichage
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("########################################################################################################################\n");
//                 printf("#%118c#\n",32);
//                 printf("#%53c\033[31mNote d'usage\033[0m%53c#\n",32,32);
//                 printf("#%27c\033[31mUtilisez les fl%cches haut et bas du clavier ou les chiffres pour\033[0m%27c#\n",32,138,32);
//                 printf("#%26c\033[31ms%clectionner votre choise, puis appuyez sur Entr%ce pour confirmer. \033[0m%26c#\n",32,130,130,32);
//                 printf("#%118c#\n",32);
//                 printf("########################################################################################################################\n");

//                 // Attendre l'entr�e utilisateur
//     Read7 :     c = getch();

//                 // Mettre � jour l'option s�lectionn�e en fonction de l'entr�e utilisateur
//                 switch (c)
//                 {
//                 case 72: // Fl�che vers le haut
//                     if (choise > 1)
//                     {
//                         choise--; // D�placer la s�lection vers le haut
//                     } else if (choise == 1)
//                     {
//                         choise = max_choise; // Revenir circulerement
//                     }
//                     break;
//                 case 80: // Fl�che vers le bas
//                     if (choise < max_choise)
//                     {
//                         choise++; // D�placer la s�lection vers le bas
//                     } else if (choise == max_choise)
//                     {
//                         choise = 1;  // Revenir circulerement
//                     }
//                     break;
//                 case 49:
//                     choise = 1;
//                     break;
//                 case 50:
//                     choise = 2;
//                     break;
//                 case 51:
//                     choise = 3;
//                     break;
//                 case 13:    // La confirmation du choise
//                     c = 13;
//                     break;
//                 default:
//                     goto Read7;
//                     break; // Ignorer les autres touches
//                 }
//             } while (c != 13); // Continuer la boucle jusqu'� ce que l'utilisateur appuie sur la touche Entr�e

//             // Traiter le choise final de l'utilisateur
//             switch (choise)
//             {
//             case 1:
//                 system("cls");
//                 Affiche_anagrammes(size5);
//                 printf("        Clicker sur Entrer pour retourner . . .");
//                 getchar();
//                 break;
//             case 2:
//                 system("cls");
//                 printf(" O Le nombre de sous liste d'anagramme : %d\n", size5);
//                 printf("        Clicker sur Entrer pour retourner . . .");
//                 getchar();
//                 break;
//             default:
//                 break;
//             }
//         }while(choise != 3);
//     } else {
//         system("cls");
//         printf("Executer d'abord l'option 1 pour cr%cer la sturcutre .",130);
//         getchar();
//     }
// }

// void sous_menu_8(){
//     if (Creation_structure){
//         // D�finir les variables
//         int choise = 1;                             // Option s�lectionn�e par d�faut
//         int max_choise = 3;                        // Nombre total d'options
//         char c;                                    // Variable d'entr�e utilisateur

//         // Boucler jusqu'� ce que l'utilisateur s�lectionne le retoure au menu principale
//         do {
//             // Boucler jusqu'� ce que l'utilisateur s�lectionne une option
//             do
//             {
//                 // Effacer l'�cran et afficher le menu avec l'option s�lectionn�e mise en �vidence
//                 system("cls");

//                 printf("########################################################################################################################\n");
//                 printf("#%118c#\n",32);
//                 printf("#%31cAfficher les mots form%cs par l'ajout d'une sous sequence%31c#\n",32,130,32);
//                 printf("#%118c#\n",32);
//                 printf("########################################################################################################################\n");
//                 printf("#%118c#\n",32);
//                 printf("#%47cS%clectionnez une option:%47c#\n",32,130,32);
//                 printf("#%118c#\n",32);
//                 int i ;
//                 for (i = 1; i <= max_choise; i++)
//                 {
//                     if (i == choise)
//                     {
//                         printf("# --> "); // Mettre en �vidence l'option s�lectionn�e
//                     } else {
//                         printf("#     "); // Mettre en �vidence l'option non s�lectionn�e
//                     }
//                     switch (i)
//                     {
//                     case 1:
//                         printf("1) Afficher les mots%93c#\n",32);
//                         break;
//                     case 2:
//                         printf("2) Afficher le nombre de sous liste%78c#\n",32);
//                         break;
//                     case 3:
//                         printf("3) Retourner au menu principal%83c#\n",32);
//                         break;
//                     }
//                 }

//                 // La suite de l'affichage
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("########################################################################################################################\n");
//                 printf("#%118c#\n",32);
//                 printf("#%53c\033[31mNote d'usage\033[0m%53c#\n",32,32);
//                 printf("#%27c\033[31mUtilisez les fl%cches haut et bas du clavier ou les chiffres pour\033[0m%27c#\n",32,138,32);
//                 printf("#%26c\033[31ms%clectionner votre choise, puis appuyez sur Entr%ce pour confirmer. \033[0m%26c#\n",32,130,130,32);
//                 printf("#%118c#\n",32);
//                 printf("########################################################################################################################\n");

//                 // Attendre l'entr�e utilisateur
//     Read9 :     c = getch();

//                 // Mettre � jour l'option s�lectionn�e en fonction de l'entr�e utilisateur
//                 switch (c)
//                 {
//                 case 72: // Fl�che vers le haut
//                     if (choise > 1)
//                     {
//                         choise--; // D�placer la s�lection vers le haut
//                     } else if (choise == 1)
//                     {
//                         choise = max_choise; // Revenir circulerement
//                     }
//                     break;
//                 case 80: // Fl�che vers le bas
//                     if (choise < max_choise)
//                     {
//                         choise++; // D�placer la s�lection vers le bas
//                     } else if (choise == max_choise)
//                     {
//                         choise = 1;  // Revenir circulerement
//                     }
//                     break;
//                 case 49:
//                     choise = 1;
//                     break;
//                 case 50:
//                     choise = 2;
//                     break;
//                 case 51:
//                     choise = 3;
//                     break;
//                 case 13:    // La confirmation du choise
//                     c = 13;
//                     break;
//                 default:
//                     goto Read9;
//                     break; // Ignorer les autres touches
//                 }
//             } while (c != 13); // Continuer la boucle jusqu'� ce que l'utilisateur appuie sur la touche Entr�e

//             // Traiter le choise final de l'utilisateur
//             switch (choise)
//             {
//             case 1:
//                 system("cls");
//                 Affiche_sous_chaine(size1);
//                 printf("        Clicker sur Entrer pour retourner . . .");
//                 getchar();
//                 break;
//             case 2:
//                 system("cls");
//                 printf(" O Le nombre de sous liste de mots form%cs par l'ajout d'une sous sequence : %d\n",130 , size2);
//                 printf("        Clicker sur Entrer pour retourner . . .");
//                 getchar();
//                 break;
//             default:
//                 break;
//             }
//         }while(choise != 3);
//     } else {
//         system("cls");
//         printf("Executer d'abord l'option 1 pour cr%cer la sturcutre .",130);
//         getchar();
//     }
// }

// void sous_menu_9() {
//     if (Creation_structure){
//         // D�finir les variables
//         int choise = 1;                             // Option s�lectionn�e par d�faut
//         int max_choise = 3;                        // Nombre total d'options
//         char c;                                    // Variable d'entr�e utilisateur

//         // Boucler jusqu'� ce que l'utilisateur s�lectionne le retoure au menu principale
//         do {
//             // Boucler jusqu'� ce que l'utilisateur s�lectionne une option
//             do
//             {
//                 // Effacer l'�cran et afficher le menu avec l'option s�lectionn�e mise en �vidence
//                 system("cls");

//                 printf("########################################################################################################################\n");
//                 printf("#%118c#\n",32);
//                 printf("#%30cAfficher les mots form%cs par l'ajout graduel d'une lettre%31c#\n",32,130,32);
//                 printf("#%118c#\n",32);
//                 printf("########################################################################################################################\n");
//                 printf("#%118c#\n",32);
//                 printf("#%47cS%clectionnez une option:%47c#\n",32,130,32);
//                 printf("#%118c#\n",32);
//                 int i ;
//                 for (i = 1; i <= max_choise; i++)
//                 {
//                     if (i == choise)
//                     {
//                         printf("# --> "); // Mettre en �vidence l'option s�lectionn�e
//                     } else {
//                         printf("#     "); // Mettre en �vidence l'option non s�lectionn�e
//                     }
//                     switch (i)
//                     {
//                     case 1:
//                         printf("1) Afficher les mots%93c#\n",32);
//                         break;
//                     case 2:
//                         printf("2) Afficher le nombre de sous liste%78c#\n",32);
//                         break;
//                     case 3:
//                         printf("3) Retourner au menu principal%83c#\n",32);
//                         break;
//                     }
//                 }

//                 // La suite de l'affichage
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("#%118c#\n",32);
//                 printf("########################################################################################################################\n");
//                 printf("#%118c#\n",32);
//                 printf("#%53c\033[31mNote d'usage\033[0m%53c#\n",32,32);
//                 printf("#%27c\033[31mUtilisez les fl%cches haut et bas du clavier ou les chiffres pour\033[0m%27c#\n",32,138,32);
//                 printf("#%26c\033[31ms%clectionner votre choise, puis appuyez sur Entr%ce pour confirmer. \033[0m%26c#\n",32,130,130,32);
//                 printf("#%118c#\n",32);
//                 printf("########################################################################################################################\n");

//                 // Attendre l'entr�e utilisateur
//     Read9 :     c = getch();

//                 // Mettre � jour l'option s�lectionn�e en fonction de l'entr�e utilisateur
//                 switch (c)
//                 {
//                 case 72: // Fl�che vers le haut
//                     if (choise > 1)
//                     {
//                         choise--; // D�placer la s�lection vers le haut
//                     } else if (choise == 1)
//                     {
//                         choise = max_choise; // Revenir circulerement
//                     }
//                     break;
//                 case 80: // Fl�che vers le bas
//                     if (choise < max_choise)
//                     {
//                         choise++; // D�placer la s�lection vers le bas
//                     } else if (choise == max_choise)
//                     {
//                         choise = 1;  // Revenir circulerement
//                     }
//                     break;
//                 case 49:
//                     choise = 1;
//                     break;
//                 case 50:
//                     choise = 2;
//                     break;
//                 case 51:
//                     choise = 3;
//                     break;
//                 case 13:    // La confirmation du choise
//                     c = 13;
//                     break;
//                 default:
//                     goto Read9;
//                     break; // Ignorer les autres touches
//                 }
//             } while (c != 13); // Continuer la boucle jusqu'� ce que l'utilisateur appuie sur la touche Entr�e

//             // Traiter le choise final de l'utilisateur
//             switch (choise)
//             {
//             case 1:
//             ;;
//                 system("cls");
//                 Affiche_sous_seq(size3);
//                 printf("        Clicker sur Entrer pour retourner . . .");
//                 getchar();
//                 break;
//             case 2:
//                 system("cls");
//                 printf(" O Le nombre de sous liste de mots form%cs par l'ajout graduel d'une lettre : %d\n",130 , size2);
//                 printf("        Clicker sur Entrer pour retourner . . .");
//                 getchar();
//                 break;
//             default:
//                 break;
//             }
//         }while(choise != 3);
//     } else {
//         system("cls");
//         printf("Executer d'abord l'option 1 pour cr%cer la sturcutre .",130);
//         getchar();
//     }
// }