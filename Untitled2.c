#define MAX_NAME 30

struct keytab {
	
	int nums;//키워드가 얼마나 나오나 count 하는 변수 
	char name[MAX_NAME];
	
};

struct keytab keywrds[13]={
	
	{0,"int"},
	{0,"float"},
	{0,"return"},
	{0,"if"},
	{0,"for"},
	{0,"while"},
	{0,"goto"},
	{0,"switch"},
	{0,"case"},
	{0,"void"},
	{0,"default"},
	{0,"char"},
	{0,"do"}
};

void count_word (char *word)
{
	int i;
	//각 keyword 별로 	
	for(i=0;i<13;i++)
	{
	//if word 랑 i번째 keyword랑 같으면 
		if (strncmp(word,keywrds[i].name,strlen(keywrds[i].name))==0) //문자를 strlen 만큼만 비교함  
		{ 
		//num++;
		keywrds[i].nums++;
			
		}
		
	}
	 
}

void print_word()
{
	int i;
	//i번째 keyword에 대해서 
	for (i=0; i<13;i++ )
	{
	//printf(키워드 이름 : 빈도수); 
	printf("keyword %s : %i\n",keywrds[i].name, keywrds[i].nums); 
	
	}
	
}

