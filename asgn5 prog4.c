int main()
{
    int a;
    a=sizeof(char);
    printf("The memory value of 'char' datatype: %d bytes\n",a); 
    a=sizeof(int);
    printf("The memory value of 'int' datatype:%d bytes\n",a); 
    a=sizeof(float);
    printf("The memory value of 'float' datatype:%d bytes\n",a); 
    a=sizeof(double);
    printf("The memory value of 'double' datatype:%d bytes",a); 
    return 0;
}