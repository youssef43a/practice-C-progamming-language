/* subject program who showe the output below 
if n = 10 it's depend to value of n
         *          
        ***         
       *****        
      *******       
     *********      
    ***********     
   *************    
  ***************   
 *****************  
*******************

if n = 5
output:
    *     
   ***    
  *****   
 *******  
********* 

n can be change evrey time      
*/
                      
 #include <unistd.h>

void	ft_pyramid_of_star(int n) {
	int j;
	int i;

	j = 0;
	while(j <= n) {
		i = 0;
		while(i < n * 2) {
			if(i >= n - 1 + j || i <= n - 1 - j) {
				write(1, " ", 1);
			}
			else write(1, "*" , 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}
int main() {

	ft_pyramid_of_star(5);
}
