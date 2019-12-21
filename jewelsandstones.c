int numJewelsInStones(char * J, char * S){
    int l1=strlen(J),l2=strlen(S);
    int i,j,c=0;
    for(i=0;i<l1;i++)
    {
        for(j=0;j<l2;j++)
        {
          if(J[i]==S[j]) 
          {
              c++;
          }
        }
    }
    return c;
}

