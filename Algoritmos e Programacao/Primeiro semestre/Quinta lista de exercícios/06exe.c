int main (){

    srand(time(0));
    int a = rand () %10 +1;
    int b = rand () %10 +1;
int con=0;



if(a>2 && a<8){
    con++;
}
if(b>2 && b<8){
    con++;
}

printf("sao %d numeros que estao entre 3 e 7", con);

    return 0;

}