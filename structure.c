#include <stdio.h>
#include<string.h>
    struct faculty
    {
        int f_id;
        char f_name[25];
        char f_desigination[25];
        int f_yoe;
        int f_basicsalary;
    };
int main()
{
    int i,n,c=0;
    struct faculty a[100];
    printf("Number");
    scanf("%d",&n);
    printf("Enter details");
    for(i=0;i<n;i++){
        scanf("%d%s%s%d%d",&a[i].f_id,a[i].f_name,a[i].f_desigination,&a[i].f_yoe,&a[i].f_basicsalary);
    }
    for(i=0;i<n;i++)
    {
        if(strcmp(a[i].f_desigination,"professor")==0)
        {
            c++;
        }
    }
    printf("%d",c);

    return 0;
}

/* define a structure faculty which attributes are faculty fact_id,name,desigination,year of exp, basic salary.
how many faculty are professor
*/