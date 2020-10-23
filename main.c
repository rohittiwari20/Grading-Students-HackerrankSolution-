int* gradingStudents(int grades_count, int* grades, int* result_count) {
    *result_count=grades_count;
    int *a=malloc(grades_count*sizeof(int));
    for(int i=0;i<grades_count;i++)
    {
        if(grades[i]>=38)
        {
            if(grades[i]%5==3)
            {
                a[i]=grades[i]+2;
            }
            else if(grades[i]%5==4) 
            {
                a[i]=grades[i]+1;
            }
            else if(grades[i]%5==0)
            {
                a[i]=grades[i];
            }
            else 
            {
                a[i]=grades[i];
            }
        }
        else if(grades[i]<38)
        {
            a[i]=grades[i];
        }
    }

    return a;

}
