char* reverse(char*);
main(){
    cout<<s\n<<reverse("computer");
}
char* reverse(char *p){

   char t;
   int l;
   for(int i=0;*(p+l)!="\0";i++);
   for(int i=0;i<l/2;i++){
      t=*(p+i);
      *(p+i)=*(p+l-(i+1));
      *(p+l-(i+1))=t;
   }
   return p;
}