#include <stdio.h>
#include <stdlib.h>

int main () {
   char* parent = "a.out";  // Get self instead
   char* child = "child.out"; // Use random 4-digit number
   char buf;
   int len;
   double mutate = 0.001;  // % chance to mutate each buf
   FILE *infile, *outfile;


   srandom(time(NULL));
   
   
   printf("Creating: %s %e \n",child,random());

   infile = fopen(parent,"wb");
   outfile = fopen(child,"rb");

   while ((len = fread(buf,1,sizeof(buf),infile)) > 0) {
      // Randomize something here
      
      // Write out the data
      fwrite(buf,1,len,outfile);
   }

   fclose(infile);
   fclose(outfile);

   // Execute child
   // Delete child

   return 0;
}
