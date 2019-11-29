    #include <string>
    #include <fstream>
    #include <iostream>
    #include <bits/stdc++.h> 
    
    using namespace std;
    
    int main()
    {
    	 
        
        
    	string fichero="Matrices.txt";
    	
    	ifstream file(fichero.c_str());
    	
        if(!file)
    	{
            cout << "No se pudo abrir el archivo " << endl;
            return 1;
    	}
    	
        string linea, archivo;
    	
        while(getline(file, linea))
        {
            archivo = archivo + linea + "\n";
    	}
        
        int n = archivo.length();
        char array[n+1];
        
        strcpy(array,archivo.c_str());
                
        
        
        
        int num[archivo.length()];
        int j,l;
        
        
        for (int j=0; j< archivo.length(); j++)
        {
       
        
            if (array[j] == '[' or array[j] == ':' or array[j] == ';' or array[j] == ']' or array[j] == ',') 
            {
                array[j]= NULL;
                //cout << array[j];
                
            
            }
            
            
            //cout << array[j];
        
        }
        
      
        
        //----------------------------------------------------
        
        for (int k=0; k< archivo.length(); k++)
        {
       
            if (array[k] == NULL)
            {
                for(int l=k; l<((archivo.length())-1); l++)
                {
                    array[l]=array[l+1];
                }
                    
                
            }
         
            //cout << array[k];
            
        }
        
        //cout << array[26];      
            
            
    //------------------------------------------------------
        
        
        for(int p=0; p<archivo.length();p++)
        {
        
            if(array[p]== '-')
            {
                array[p+1]=array[p+1]*(-1);
            
            
            }
        
            cout << array[p];
        }
       
        cout << array[5];
        
        
        
        
        
        
        
       
        return 0;
    
    }
    
    
    //------------------------------------------------------
    
     
    //Operacion para multiplicar dos matrices
    //
    //
    
    for (i=1;i<=m;i++)
    {
        for (j=1;j<=c;j++)
        {
            C[i][j]=0;
            for (k=1;k<=n;k++)
            {
                C[i][j]=C[i][j]+A[i][k]*B[k][j];
            }
            
        }
    
    }

    

      
 



