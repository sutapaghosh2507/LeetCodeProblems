char * defangIPaddr(char * address){
    int l,length=strlen(address);
    l=length*3+1;
    char *a=malloc(l);
    int j=0;
    for(int i=0;i<length;i++)
    {
        if(address[i]=='.')
        {
            a[j++]='[';
            a[j++]='.';
            a[j++]=']';
        }
        else
            a[j++]=address[i];
    }
    a[j++]='\0';
        return a;
}

