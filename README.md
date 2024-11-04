# DSA

## Kadane's Algorithm
- This algorithmworks to find the maximum subarray .
- It traverses through the array and computes the maximum sum but if in case the current sum goes below zero then we reset the current sum
- [code](https://github.com/roystondz/DSA/blob/main/53MaxSubArray.cpp)


## Moore's Algorithm
- This algorithm is used to find the majority element
- we traverse through the loop and at first we assign answer as the first element . Every time we get the same element we f++ or else if we dont f--
- [code](https://github.com/roystondz/DSA/blob/main/169MajorityElement.cpp)

## Binary Exponentiation
- Pow(x,n)
- [code](https://github.com/roystondz/DSA/blob/main/50Pow(x%2Cn).cpp)

## Buy and Sell
- [code](https://github.com/roystondz/DSA/blob/main/121BuyAndSell.cpp)

## Conatiner with most water
- Brute force approach (TLE)
- [code](https://github.com/roystondz/DSA/blob/main/11ContainerWater.cpp)
- Optimal approach with two pointer (make sure to change the minimum pointer only since it controls the capacity)
- [code](https://github.com/roystondz/DSA/blob/main/11ContainerWater.cpp)

## Product of Array except self
- The first and second element in both the loop must be set to 1.
- find the prefix and suffix separately
- prefix can be found by multiplying the previous number with the PREVIOUS prefix
- suffix must be initialised to 1 . multiply the suffix with the next number
- Multiply both
- [code](https://github.com/roystondz/DSA/blob/main/238ArrapProductXSelf.cpp)

## Binary Search
- Optimised Binary search (computing mid)
- [code](https://github.com/roystondz/DSA/blob/main/704binarySearch.cpp)

## Search in a rotated Array
- We make use of binary search algo here (log n)
- First we see if the left half or right half is sorted
- If the left half is sorted and also the element lies between them (left half) correspondingly change end else vice versa
- If the right half is sorted and also the element lies between them (left half) correspondingly change start else vice versa
- [code](https://github.com/roystondz/DSA/blob/main/33RotatedArray.cpp)

## Peak index in a Mountain Array
- We make use of Binary Search to have a optimised soluotion
- We compute the mid element and see if its equla to mid ;
- we see if it lies on incresing or decreasing edge and corresponding update the start and end
- [code](https://github.com/roystondz/DSA/blob/main/852PeakMountain.cpp)

## Single Non Duplicate
- This problem can be solved usding Linear search where youcan decide by checking if the number is not equal to the next or the previous number
- A better approach to this can be Binary search
- In this approach first we check the number of elements in given array.
- In the loop we compute mid and check the condition if element is the first or last element and return respectively.
- Next we see if the next is of mid is even or odd Then choose either to search left or right.
- If in left we compare and change
- same for the right.
- [code](https://github.com/roystondz/DSA/blob/main/540SingleElement.cpp)

## Valid Palindrome (without considering special synmbols)
- check if it is alphabet or numeric
- then compare
- [code](https://github.com/roystondz/DSA/blob/main/125ValidPalindrome.cpp)

## Remove all occurences of a substring
- make use of str.find(),str.erase()
- [code](https://github.com/roystondz/DSA/blob/main/1910RemoveAllOccurencesOfAString.cpp)

## Permutation in String
- The first step is to find a frequency table for the string s1
- We have to create a window of the size that is equal to s1
- the next thing is to traverse through s2
- initialize the window index to 0 and a traversing index to i, the loop starts
- we use a while loop for creating another frequency table with respect to a current window keeping in mind that the window index should not cross window size and the idx should not cross the length of s2
- Finally we compare both the frequency tables
- [code](https://github.com/roystondz/DSA/blob/main/567PermutationInString.cpp)

## Reverse words in a String
- Set up a answer string that the function should return.
- Initially reverse the entire string
- use a for loop to traverse through the string
- compute a word keeping in mind .While the index is less than the string and the current character isnt a space
- Append it to the word String and incremetn i
- omce the word is obtained 
- reverse the word again
- if the length of the word is greater than 0. Append it to the answer with a space
- While reteuring return the substr 1.
- [code](https://github.com/roystondz/DSA/blob/main/151ReverseWordsInAString.cpp)

## Painters Problem
- [code](https://github.com/roystondz/DSA/blob/main/PaintersProblem.cpp)
