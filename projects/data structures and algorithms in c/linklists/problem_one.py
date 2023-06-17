def twoSum( nums, target):
      
        nums_len =len(nums)
   
       
        for i in range(nums_len):
            for j in range(i+1, nums_len):
            
               if(nums[j]+nums[i]==target):
                  print([i,j])
                 
                 
                  
              
       

       #my mistake was looping the list and not skipping the first element bescause i already selected it

        


numbers=[3,2,3]
target=6
twoSum(numbers,target)