//store n employee’s data such as employee name, gender,designation, department, basic pay. Calculate the gross pay of each employees 
#include<stdio.h>
struct employee
{
    char name[50],gender[10],des[80],dept[100];
    float basic;
};
int main()
{
    int n,i;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    struct employee emp[n];
    for(i=0;i<n;i++)
	{
        printf("Enter the Name, Gender, Designation, Department, Basic Pay of employee %d\n",i+1);
        getchar(); 
        gets(emp[i].name);
        gets(emp[i].gender);
        gets(emp[i].des);
        gets(emp[i].dept);
        scanf("%f",&emp[i].basic);
    }
    for(i=0;i<n;i++)
	{
		float hra , da;
        hra=0.25*emp[i].basic;
        da=0.75*emp[i].basic;
        emp[i].basic=emp[i].basic+hra+da;     
        printf("Information of employee %d:\n\n",i+1);
        printf("Name: %s \n",emp[i].name);     
        printf("Gender: %s\n",emp[i].gender);     
        printf("Designation: %s\n",emp[i].des);   
        printf("Department: %s\n",emp[i].dept);
    	printf("Gross salary pay : %.2f\n",emp[i].basic);
        printf("\n");   
    }
}
