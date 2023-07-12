// Check Lowe case...
# include <stdio.h>
int main(){
    char ch;
    printf("Enter Any Character:\n");
    scanf("%c",&ch);
    // 97 - 122
    if (ch<=122 && ch>=97)
    {
        printf("You Entered Lower Case.");
    }
    else
    {
        printf("Character Is Not A Lower Case.");
    }
    return 0;
    
}

// WAP To check - Upper, lower, symbols, numbers....