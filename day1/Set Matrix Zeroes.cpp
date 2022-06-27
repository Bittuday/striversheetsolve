/*Set Matrix Zero
Problem Statement: Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.
*/
void setZeroes(vector<vector<int>>& matrix) {
       int row0=1,col=1,row=matrix.size(),cols=matrix[0].size();
    for(int i=0;i<row;i++){
    if(matrix[i][0]==0)
        col=0;
    }
    for(int j=0;j<col;j++)
    {
        if(matrix[0][j]==0)
        {
            row0=0;
        }
    }
    for(int i=0;i<row;i++)
    {
        
        
        for(int j=1;j<cols;j++)
        
            if(matrix[i][j]==0)
            
                matrix[i][0]=matrix[0][j]=0;
            
        
    }
    for(int i=row-1;i>=0;i--)
    {
        for(int j=cols-1;j>=1;j--)
        
        
            if(matrix[i][0]==0||matrix[0][j]==0)
                matrix[i][j]=0;
            if(col==0)
                matrix[i][0]=0;
           
        
        
    }
    // for(int j=0;j<cols;j++)
    // {
    //     if(row0==0)
    //         matrix[0][j]=0;
    // }
    }
