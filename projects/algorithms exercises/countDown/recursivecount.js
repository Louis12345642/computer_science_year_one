function recursive_countor(n){
if(n>0){
    console.log("the countdown: ",n);
    recursive_countor(n-1);
}   
}
recursive_countor(5);