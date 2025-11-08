 #include<stdio.h>
 int main()
 {
 	char a;
 	char word[20];
 	char sen[2000];
 	printf("enter single word");
 	scanf("%c",&a);
 	printf("enter word");
 	scanf("%s",&word);
 	printf("enter sen");
 	scanf("%[^/n]",&sen);
 	printf("\n the letter %c \n word is %s the sen is %s",a,word,sen);
 	return 0;
 }
