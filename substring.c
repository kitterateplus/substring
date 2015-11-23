fasubstring(char sentence[], char substring[]){

	int i=0,j=0,k=0,lensub=0,lensen=0;

	lensub=strlen(substring);
	lensen=strlen(sentence);

	for(i=0;i<lensen;i++){
		k=i;
		while(substring[j]==sentence[k] && substring[j]!='\0'){
			j++;
			k++;
		}
		if(j==lensub){
			printf("\nsub string found");
		}
		if(k==lensen){
            break;
        }
		j=0;
	}
}
