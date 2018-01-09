curtime=0;
while(1)
{
  for(i=0;i<size;++i)
    if(a[i].bt!=0&&a[i].at>=curtime)
        {
            a[i].bt-=1;
            flag=1;
            if(a[i].bt==0)
             a[i].ct=currtime;
             ++curtime;
	    break;	
	}
   if(flag==0)
         {   flag1=0;
		for(i=0;i<size;++i)
           {
                 if(a[i].bt>0)
                  flag1=1;
           }
             if(flag1==1)
               ++curtime;
             else{
		break;
	}

}



curtime=0;
while(1)
{
  for(i=size-1;i>=0;--i)
       if(a[i].at>=currtime&&a[i].bt>=0)
	{
		a[i].bt-=1;
		flag=1;
		if(a[i].bt==0)
             a[i].ct=currtime;
             ++curtime;
	    break;	
	} 
if(flag==0)
         {   flag1=0;
		for(i=0;i<size;++i)
           {
                 if(a[i].bt>0)
                  flag1=1;
           }
             if(flag1==1)
               ++curtime;
             else{
		break;
	}


}
