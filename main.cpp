#include <iostream>

using namespace std;

int main()
{
    int arr [3][4] = {
        {11,22,33,44},
        {55,66,77,88},
        {11,66,77,44},

        };
int i,j;
for (i = 0; i < 3; i++)
    {
        printf("addres of %d th array %u \n" ,i, *(arr+i));

         for (j = 0; j < 4; j++)
            {
            printf("arr[%d][%d]=%d\n", i,j,*( *(arr + i)+ j));
            {

         }
        printf("\n\n");
    }


}

    return 0;
}
