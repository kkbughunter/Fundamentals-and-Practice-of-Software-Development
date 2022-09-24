/*Binarry file creation*/
#include<stdio.h>
#include<string.h>

typedef struct storeitems{
	int itemcode;
	char itemname[31] ;/*maximum of 30 characters*/
}STOREITEM;

char filename[ ] = "./storeitem.dat";



void Readrecord()
{
	FILE *f;
	STOREITEM item;
	// item.itemcode = 1;
	// strcpy(item.itemname,"Pencil");
	
	f= fopen(filename,"rb");
	
	/*write the content*/
	while(fread(&item,sizeof(STOREITEM),1,f)){
		printf("\n%3d %-30s",item.itemcode,item.itemname);
	}
	fclose(f);
}


int WriteaRecord()
{
	FILE *f;
	STOREITEM item;
	
	printf("\nEnter item code :");
	scanf("%d",&item.itemcode);
	fflush(stdin);
	getchar();
	gets(item.itemname);
	
	f= fopen(filename,"ab");
	/*write the content */
	fwrite(&item,sizeof(STOREITEM),1,f);
	
	fclose(f);
}



void main()
{
	int opt;
	/*enter into a loop*/
	while(1)
	{
		/*clear the screen */
		// system("cls");
		printf("\n1. Add item");
		printf("\n2. List items :");
		printf("\n3.Exit");
		printf("\n\nEnter your choice(1-3) :");
		scanf("%d",&opt);
		fflush(stdin);
		
		switch(opt)
		{
			case 1:
				WriteaRecord();
				break;
			case 2:
				Readrecord();
				break;
			case 3:
				return;
				break;
			default:
				printf("\n Invalid option selected");
				break;
				
		}
		printf("\n press a key to continue....");
		getchar();
		getchar();
	}
}
