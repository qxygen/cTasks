#include <stdio.h>
#include <stdlib.h>
int func1(){
    int n,count,sum = 0,en;
    n = scanf("%d",&count);
    if (n!=1){
        printf("Incorrect enter");
        return 1;
    }
    int j;
    for(j=0;j<count;j++,scanf("%d",&en),sum += en){}
    printf("%d",sum);

    return 0;
}

int func2(){
    int n,count,max,en;
    n = scanf("%d",&count);
    if (n!=1){
        printf("Incorrect enter");
        return 1;
    }
    if (count == 0)
        return 1;
    else
        scanf("&d",&max);
    int j;
    for(j=1;j<=count;j++){
        scanf("%d",&en);
        if (en > max)
            max = en;
    }
    printf("%d",max);
    return 0;
}

int func3(){
    int k = 0, sum = 0,grade;
    while((scanf("%d",&grade))&(grade != EOF)){
        k++;
        sum+=grade;
    }
    printf("count: %d sum: %d",k,sum);
    return 0;
}

int func4(){
    int i = 0;
    double en,k;
    scanf("%lf",&k);
    while((scanf("%lf",&en))&(en != EOF)){
        i++;
        if (en > k){
            printf("first pos: %d",i);
            return 0;
        }

    }

    return 0;
}

int func5(){
    double en,tmp;
    int i = 0;
    while((scanf("%lf",&en))&(en != EOF)){
        if (i==0){
            tmp = en-1;
            i=1;
        }
        if (tmp < en)
            tmp = en;
        else{
            printf("no");
            return 1;
        }


    }
    printf("yes");
    return 0;

}

int func6(){
    double en,tmp;
    int i = 0,k=1;
    scanf("%lf",&tmp);
    if (tmp==EOF){
        printf("Error");
        return 1;
    }
    while((scanf("%lf",&en))&(en != EOF)){
        k++;
        if (tmp>en){
            printf("index of element: %d\n",k);
            i++;
        }

    }
    printf("count of indexes: %d",i);
    return 0;

}

int func7(){
    double min,tmp,en;
    int count=1,i=0;

    while((scanf("%lf",&en))&(en != EOF)){
        if (i==0){
            i=1;
            min = en;
        }
        if (min > en){
            printf("\n%d\n",count-1);
            return 0;
        }
        else
            count++;

    }

    return 0;
}

int func8(){
    int tmp = 0,count = 0,entry,max=0;
    while((scanf("%d",&entry))&(entry != EOF)){
        if ((entry-tmp)%2==0){
            count++;
            tmp = entry;
        }
        else if (count>max) {
            max = count;
            count = 0;
        }

        }
    if (count>max) {
        max = count;
            }
    printf("Max even sequence length: %d",max);
    return 0;

}

int func9(){
    int tmp = 0,count = 0,entry,flag = 0;
    while((scanf("%d",&entry))&(entry != EOF)){
        if (flag == 0){
            flag = 1;
            if (entry%2!=0) tmp = 1;
        }
        if ((entry-tmp)%2==0){
            count++;
            tmp = entry;
        }
        else {
            if (tmp%2 == 0) printf("Even sequence length: %d\n",count); else printf("Odd sequence length: %d\n",count);
            count = 1;
            tmp = entry;
        }
    }
    if (tmp%2 == 0) printf("Even sequence length: %d\n",count); else printf("Odd sequence length: %d\n",count);
    return 0;

}

int func10(){
    int tmp = 0,count = 0,entry,total = 0;
    while((scanf("%d",&entry))&(entry != EOF)){
        if(entry-tmp>0){
            tmp = entry;
            count++;
        }
        else{
            tmp = entry;
            total++;
            printf("[%d] Sequence length: %d\n",total,count);
            count = 1;
        }
    }
    if (total!=0){
        total++;
        printf("[%d] Sequence length: %d\n",total,count);
        printf("Total: %d\n",total);
    }
    else printf("Total: %d\n",total);
    return 0;

}

int func11(){
    int tmp = 0,count = 0,entry,max=0,flag = 0;
    while((scanf("%d",&entry))&(entry != EOF)){
        if (flag == 0){
            flag = 1;
            tmp = entry;
        }
        if (entry==tmp) count++;
        else{
            tmp = entry;
            count = 1;
            if (count>max) max = count;
        }
    }
    if (count>max) {
        max = count;
            }
    printf("Max equal numbers sequence length: %d",max);
    return 0;

}

int main()
{
    func11();
    return 0;
}
