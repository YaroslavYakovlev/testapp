#include <iostream>
#include "Value.h"

void MyClass::myClass(){
  std::cin >> start;
  std::cin >> finish;

  int  i = start;

  while (i<=finish)
  {
      if (i % 2 !=0){
          std::cout << i << " " << std::endl;
          sumValue +=i;
      }
      i++;
  }
  std::cout << sumValue << std::endl;

}


// #include <iostream>
// #include <stdio.h>
// #include "Value.h"

// void ValueClass::valueClass(){
//     std::cout<< "___START___" << std::endl;
//     std::cout<< "Kassa: " << std::endl;

//     std::cout<< "Skolko biletov vam nygno" << std::endl;
//     std::cin >> quantity;
    
//     std::cout<< "How many percent do you have a discount?" << std::endl;
//     std::cin >> discount;
//     if (discount >= 0){
//     if (discount == 0){
//         result = quantity * price;
//     } else {
//          result = (quantity * price) - ((quantity * price) * (discount / 100));
//     }
//     } else {
//     std::cout<< "ERROR VALUE!!!" << std::endl;        
//     }
    
//     std::cout<< "Result = " << result << " y.e." <<std::endl;
//     std::cout<< "___END___" << std::endl;

    

// }