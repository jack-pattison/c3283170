#include <stdio.h>

int main()
{
    printf("Please select an option: \n");
    printf("a) Rotation Encryption with Key Inut\n");
    printf("b) Rotation Decryption with Key Input\n");
    printf("Selection: ");
    char menu;
    scanf("%c", &menu);
    switch(menu) 
    {
        case 'a':
        {
            int i, key;
            char string[i];
            printf("Message: ");
            scanf("%s", string);
            printf("Key: ");
            scanf("%d", &key);
            for(i = 0; (i < 100 && string[i] != '\0'); i++)
            if(string[i] <= 90 && string[i] >= 65)
            {
                string[i] = string[i] + key;
            if(string[i] > 90)
            {
                string[i] = string[i] - 26;
            }
            }
            else if(string[i] <= 122 && string[i] >= 97 )
            {
                string[i] = string[i] - 32;
                string[i] = string[i] + key;
            if(string[i] > 90)
            {
                string[i] = string[i] - 26;    
            }
            }
	 	
            printf("Encrypted message: %s\n", string);
        }
        break;
        case 'b':
        {
            int i, key;
            char string[i];
            printf("Message: ");
            scanf("%s", string);
            printf("Key: ");
            scanf("%d", &key);
            for(i = 0; (i < 100 && string[i] != '\0'); i++)
            if(string[i] <= 90 && string[i] >= 65)
            {
                string[i] = string[i] - key;
            if(string[i] < 65){
                string[i] = string[i] + 26;
            }
            }
            else if(string[i] <= 122 && string[i] >= 97 ){
                string[i] = string[i] - 32;
                string[i] = string[i] - key;
            if(string[i] < 65){
                string[i] = string[i] + 26;    
            }
            }
            printf("Encrypted message: %s\n", string);
        }
        break;
        default: printf("Unknown option %c\nPlease enter a, b, c, or d\n",menu);
    }
}



