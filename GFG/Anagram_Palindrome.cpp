int isPossible(string S) {
    // your code here
    unordered_map<char,int>freq_map;
    
    for(char ch:S)
    {
        freq_map[ch]+=1;
    }
    
    int oddcount=0;
    
    for(auto it:freq_map)
    {
        if(it.second%2!=0) 
        {
            oddcount++;
        }
    }
    
    if(oddcount>1) return 0;
    else return 1;
    
}git 