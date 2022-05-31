//Sample program to pass CLA
//argc = argument count
//argv = argument value
//argv and argc name can be anything but order of declaration in main should be like\
//argc first and argv later.

int main(int argc,char *argv[])
{
    int i=0;
    printf("Number of arguments passed is %d\n",argc);
    printf("The arguments passed are:\n");
    while(i <= argc)
    {
        printf("%s\n",argv[i++]);
    }
}