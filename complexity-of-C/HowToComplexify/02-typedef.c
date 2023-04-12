#include <stdio.h>

// Typedef is to give a nickname to an existing datatype such as char, int, double...
// And is put before main()


typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;


int main(){
    
    User user1 = {"Player1","4182dd",702590};
    User user2 = {"Player2","4305dd",307365};

    printf("\nUsername 1 : %s, Userpassword 1 : %s, UserID 1 : %d",user1.name,user1.password,user1.id);
    printf("\nUsername 2 : %s, Userpassword 2 : %s, UserID 2 : %d",user2.name,user2.password,user2.id);

    return 0;
}