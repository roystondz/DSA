class Solution {
public:
    bool isFreqSame(int freq1[26],int freq2[26])
    {
        for(int i=0;i<26;i++)
        {
            if(freq1[i]!=freq2[i])
                return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int freq[26] ={0};
        for(int i=0;i<s1.length();i++)
        {
            int idx=s1[i]-'a';
            freq[idx]++;
        }

        int windowSize = s1.length();

        for(int i =0;i<s2.length();i++)
        {
            int windowIndex=0,idx=i;
            int windowFreq[26]={0};
            while(windowIndex<windowSize && idx <s2.length() )
            {
                windowFreq[s2[idx]-'a']++;
                windowIndex++;
                idx++;
            }
            if(isFreqSame(freq,windowFreq))
                return true;
        }
        return false;
    }
};
