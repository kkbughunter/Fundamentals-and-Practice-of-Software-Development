#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 20

typedef struct{
    char name[MAX];
    char address[5*MAX];
    char phonenumber[MAX];
}TelRec;

void Insert(FILE *fptr,int N);
void Update(FILE *fptr,char name[]);
void Delete(FILE *fptr,char name[]);
void Search(FILE *fptr,char name[]);
void Append(FILE *fptr);

int main()
{
    FILE *fptr;
    char ans='Y';
    int choice,N,number=0;
    char file[MAX],name[MAX];
    TelRec TelDetails;
    
    //Creates a file
    printf("Enter file name:\n");
    scanf("%s",file);

    fptr=fopen(file,"a");
    while (ans=='y' || ans=='Y')
    {
        printf("Enter the name of the person:\n");
        scanf("%s",TelDetails.name);
        printf("Enter the address of the person:\n");
        scanf("%s",TelDetails.address);
        printf("Enter the phone number of that person:\n");
        scanf("%s",TelDetails.phonenumber);
        
        fwrite(&TelDetails,sizeof(TelRec),1,fptr);
        
        printf("Enter y/n to add more telephone details or to stop:\n");
        scanf(" %c",&ans);
    }
    printf("Successfully created the file of telephone directories.\nYou can now perform various operations.\n");
    fclose(fptr);
    
    ans='Y';
    while (ans=='y' || ans=='Y')
    {
    printf("The operations with the file are:\n");
    printf("1.Insert telphone details into file.\n2.Update details of an individual.\n3.Delete a telephone detail.\n4.Search for a particular telephone detail.\n5.Append more telephone details.\n6.Exit.\n");
    printf("Enter your choice:");
    scanf(" %d",&choice);
    switch (choice)
    {
        case 1:
        {
            fptr=fopen(file,"r+");
            printf("Enter the line number after which the telephone detail have to be inserted:");
            scanf("%d",&N);
            Insert(fptr,N);
            break;
        }
        case 2:
        {
            fptr=fopen(file,"r+");
            printf("Enter the name of the person whose telephone details have to be updated:");
            scanf("%s",name);
            Update(fptr,name);
            break;
        }
        case 3:
        {
            fptr=fopen(file,"r+");
            printf("Enter the name of the person whose telephone details have to be deleted:");
            scanf("%s",name);
            Delete(fptr,name);
            break;
        }
        case 4:
        {
            fptr=fopen(file,"r+");
            printf("Enter the name of the person whose telephone details have to be searched for:");
            scanf("%s",name);
            Search(fptr,name);
            break;
        }
        case 5:
        {
            fptr=fopen(file,"r+");
            Append(fptr);
            break;
        }
        case 6:
        {
            fptr=fopen(file,"r+");
            exit(-1);
        }
        default:
        {
            printf("Invalid choice entered. Enter 1-5:\n");
        }
    }
    printf("Enter y/n to continue file operations or stop:");
    scanf(" %c",&ans);
    }
    return 0;
}

void Insert(FILE *fptr,int N)
{
    TelRec *TelDetails,Rec,NewRec;
    int i=0,n=0;
    TelDetails=(TelRec*)malloc(MAX*sizeof(TelRec));
    if (fptr == NULL)
    {
        printf("Error in opening the file \n");
        return;
    }
    else
    {
        printf("Enter the name of the person:\n");
        scanf("%s",NewRec.name);
        printf("Enter the address of the person:(Press enter at the end of the address)\n");
        scanf("%s",NewRec.address);
        printf("Enter the phone number of that person:\n");
        scanf("%s",NewRec.phonenumber);
        while (fread(&Rec,sizeof(TelRec),1,fptr))
        {
            if (n==N)
            {
                TelDetails[i]=NewRec;
                i++;   
            }
            TelDetails[i]=Rec;
            i++;
            n++;
            
        }
        fseek(fptr,0,SEEK_SET);
        for(n=0;n<i;n++)
        {
            fwrite(&TelDetails[n],sizeof(TelRec),1,fptr);
        }
        printf("Inserted succesfully into the file.\n");   
        fseek(fptr,0,SEEK_SET);
        printf("The contents of the file are:\n");
        while (fread(&Rec,sizeof(TelRec),1,fptr))
        {
            printf("%s\n",Rec.name);
            printf("%s\n",Rec.address);
            printf("%s\n",Rec.phonenumber);
        }
        fclose(fptr);
    }
    return;
}

void Update(FILE *fptr,char name[])
{
    TelRec *TelDetails,Rec,NewRec;
    int i=0,n=0,ans=0,found=0;
    char address[MAX],number[MAX];
    TelDetails=(TelRec*)malloc(MAX*sizeof(TelRec));
    if (fptr == NULL)
    {
        printf("Error in opening the file \n");
        return;
    }
    else
    {
        do
        {
            printf("Enter 1 to update address or 2 to update phone number or 3 to update both:\n");
            scanf("%d",&ans);
            if (ans<1 || ans>3) printf("Invaild input entered.Please enter your choice again.\n");
        }
        while (ans<1 || ans>3);
        
        while (fread(&Rec,sizeof(TelRec),1,fptr))
        {
            if (strcmp(Rec.name,name)==0)
            {
            found=1;
            if (ans==1)
            {
                printf("Enter the updated address of the person:\n");
                scanf("%s",address);
                strcpy(NewRec.name,name);
                strcpy(NewRec.address,address);
                strcpy(NewRec.phonenumber,Rec.phonenumber);
                TelDetails[i]=NewRec;
                i++;
                continue;
            }
            else if (ans==2)
            {
                printf("Enter the updated phone number of the person:\n");
                scanf("%s",number);
                strcpy(NewRec.name,name);
                strcpy(NewRec.address,Rec.address);
                strcpy(NewRec.phonenumber,number);
                TelDetails[i]=NewRec;
                i++;
                continue;
            }
            else if (ans==3)
            {
                printf("Enter the updated address of the person:\n");
                scanf("%s",address);
                printf("Enter the updated phone number of the person:\n");
                scanf("%s",number);
                strcpy(NewRec.name,name);
                strcpy(NewRec.address,address);
                strcpy(NewRec.phonenumber,number);
                TelDetails[i]=NewRec;
                i++;
                continue;
            }
        }
        TelDetails[i]=Rec;
        i++;
        }
        fseek(fptr,0,SEEK_SET);
        for(n=0;n<i;n++)
        {
            fwrite(&TelDetails[n],sizeof(TelRec),1,fptr);
        }
        if (found==0)
        {
            printf("The name is not found.\n");
            return;
        }
        else
        {
            printf("Updated succesfully into the file.\n");   
            fseek(fptr,0,SEEK_SET);
            printf("The contents of the file are:\n");
            while (fread(&Rec,sizeof(TelRec),1,fptr))
            {
                printf("%s\n",Rec.name);
                printf("%s\n",Rec.address);
                printf("%s\n",Rec.phonenumber);
            }
        }
        fclose(fptr);
    }
    return;
}

void Delete(FILE *fptr,char name[])
{
    TelRec *TelDetails,Rec;
    TelDetails=(TelRec*)malloc(MAX*sizeof(TelRec));
    int i=0,n=0,found=0;
    if (fptr == NULL)
    {
        printf("Error in opening the file \n");
        return;
    }
    else
    {
        while (fread(&Rec,sizeof(TelRec),1,fptr))
        {
            if (strcmp(Rec.name,name)==0)
            {   
                found=1;
                continue;
            }
            TelDetails[i]=Rec;
            i++;
        }
        fseek(fptr,0,SEEK_SET);
        for(n=0;n<i;n++)
        {
            fwrite(&TelDetails[n],sizeof(TelRec),1,fptr);
        }
        if (found==0)
        {
            printf("The name is not found.\n");
            return;
        }
        else
        {
            printf("Deleted the details succesfully.\n");   
            fseek(fptr,0,SEEK_SET);
            printf("The contents of the file are:\n");
            while (fread(&Rec,sizeof(TelRec),1,fptr))
            {
                printf("%s\n",Rec.name);
                printf("%s\n",Rec.address);
                printf("%s\n",Rec.phonenumber);
            }
        }
        fclose(fptr);
    }
    return;
}

void Search(FILE *fptr,char name[])
{
    TelRec Rec;
    int found=0;
    if (fptr == NULL)
    {
        printf("Error in opening the file \n");
        return;
    }
    else
    {
        while (fread(&Rec,sizeof(TelRec),1,fptr))
        {
            if (strcmp(Rec.name,name)==0)
            {   
                found=1;
                printf("Name is: %s\n",Rec.name);
                printf("Address is : %s\n",Rec.address);
                printf("Phone number is: %s\n",Rec.phonenumber);
                return;
            }
        }
        printf("The name is not found.\n");
        fclose(fptr);
    }
    return;
}

void Append(FILE *fptr)
{
    TelRec Rec;
    if (fptr == NULL)
    {
        printf("Error in opening the file \n");
        return;
    }
    else
    {
    printf("Enter the name to be appended:\n");
    scanf("%s",Rec.name);
    printf("Enter the address to be appended:\n");
    scanf("%s",Rec.address);
    printf("Enter the number to be appended:\n");
    scanf("%s",Rec.phonenumber);
    fseek(fptr,0,SEEK_END);
    fwrite(&Rec,sizeof(TelRec),1,fptr);
    printf("Appended the detail.\n");
    fseek(fptr,0,SEEK_SET);
    printf("The contents of the file are:\n");
    while (fread(&Rec,sizeof(TelRec),1,fptr))
    {
        printf("%s\n",Rec.name);
        printf("%s\n",Rec.address);
        printf("%s\n",Rec.phonenumber);
    }
    }
    fclose(fptr);
    return;
}
