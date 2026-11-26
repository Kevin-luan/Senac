

int main()

{
  srand(time(0));
    int a= rand() % 100;
    int res;

    res= a % 2;

    if(res==0 ){
        printf("O %d par", a);
    }else{
        printf("O %d impar", a);
    }
   

    
    return 0;
}