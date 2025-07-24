#include<stdio.h>
#include<string.h>
int main()
{
	//1.strlen
	char s1[]="Helloworld";
	printf("1.strlen=%d\n",strlen(s1));
	
	//2. strcpy
	char s2[20];
	strcpy(s2,s1);
	printf("2.strcpy %s\n",s2);
	
	//3.strncpy
	char s3[20];
	strncpy(s3,s1,5);
	s3[5]='\0';
	printf("3. strncpy %s\n",s3);
	
	//4. strcat
	char s4[40]="Hello";
	strcat(s4,"Friend");
	printf("4. strcat %s\n",s4);
	
	//5. strncat
	char s5[40]= "Hello";
	strncat(s5, "Everyone",7);
	printf("5. strncat %s\n",s5);
	
	//6. strcmp
	printf("6. strcmp %d\n",strcmp("abc","abd"));
	
	//7. strncmp
	printf("7. strncmp %d\n",strncmp("abcde","abcxy",3));
	
	//8.strcoll
	printf("8. strcoll %d\n",strcoll("a","A"));
	
	//9. strchr
	char *p9=strchr(s1,'w');
	printf("9. strchr %s\n",p9);
	
	//10. strrchr
	char *p10 = strrchr("bananas", 'a');
	printf("10. strrchr %s\n", p10);
	
	//11.strspn
	printf("11. strspn = %d\n",strspn("123abc","123456"));
	
	
	//12.strscspn
	printf("12. strpsn=%d\n",strcspn("abc123","0123456789"));
	
	
	//13. strpbrk
	char *p13=strpbrk("goodbye 8world","0123456789");
	
	//14. strstr
	char *p14=strstr("find the needle","needle");
	printf("14.strstr %s\n",p14);
	
	//15.strtok
	char s15[]="one:two:Three";
	char *t=strtok(s15,":");
	
	
	//18. memset
	char m1[10];
	memset(m1,'A',sizeof m1);
	printf("18. memset %.10s\n",m1);
	
	//19. memcpy
	char m2[10];
	memset(m1,'A',sizeof m1);
	printf("19. memcpy %.10s\n",m2);
	
	//20. memmove
	memmove(m2+2,m2,5);
	
	return 0;
	 
	
}