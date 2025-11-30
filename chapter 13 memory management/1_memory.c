//there are two types of memory managenment --compile time or runtime;;

//compile time memory allocation refer as static or stack memory allocation

// disadvantage of compile 
// 1) memory wastage 
// 2) no flexibility
// 3) no control

//runtime refer as a dynamic or heap time ma            using library  function 
//there are four library functions which helps to achive dynamic memeory allocation

// 1) malloc 
    //  syntax void* malloc (size of bytes )
   // it return void pointer or generic pointer which helps in type cast into another pointer and in malloc function there is a single parameter where we pass the total number of bytes
    
   //2) calloc()
   //assign multiple blocks and each block insaiyzd with 0
 //void calloc mallloc only one memory block but calloc have multiple block of memeory

 //realloc
   // void * realloc (updated memeory size)  

   //free (ptr)