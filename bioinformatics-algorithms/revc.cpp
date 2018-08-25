// Complementing a Strand of DNA

// http://rosalind.info/problems/revc/

#include <iostream>

using namespace std;

int main()
{
    string s="TGCCGCATGCGCATTGAGCAGTTTCAGGATTGCCGGCGAAGAACCGTTTTGAGATCGCATGCTTCATTTGAAAGGTTCCTTAGAACGATACCAATATCACCCTGCATAGACCTAAGGTGAGGCCTACTACGCCGGATTTCGACTCGCCAACTAGTGCTTAATAGATTCAGCACACTTGGGAGTGGAAATATGCCCCTTCCGGGCAGGTCGCACTCGTCTTGTGGTGAGCACTCGGCAACTTCCTCTGAGTAACGGTATGCGTCTGTCTGTTCTGCTCTTCCGGCAGGGTGAAGTAATTGAATACGTGAGGGGAGAAGATCGGTCCCAAACAAGTCTGAGTTATCGGGATGAACCTGGGCTCTGGGAACCTTAAATAAGATCACTTGGACCGGAATTGCACCACGGTCCACGCCTGCGACACAGGGTCAACACGGCAGGAATCCATCCCTAAGTTCTCATCAATCCGGACGTCCTCTCTAGCTCTCGGTATAGGCTTATCATCGCGGCGGATGGGAAGGGATGTCGGGTCAGCTCATTGAGTTGGCAGCTAGTCGTGACCATAATAAGCGTAGCCTTGAGACTTACACCTCGCATGGTAAAAGGTCTGGCTTACGTCTTCATTTATGGATGTATCGGCGCCTAGTTTTCCATTGAATTTTCATCAATGAATCAGTGCGCCCGTAACCTTTACGTACTTTACTAGGGCTGTGGCTCGCCGTAGCGTAGAGATCCGGAAAGCAGCATGTGTTCCTGTTCCGAGCTGCGGCAAAGAGTCGTGGAGCCGAAGTGGTTCGCTGCTTTGGACAGGCACGGGGCAGATGGTCGCCTGCGGTGTGGCTGTAC";
    string n;
    for(int i=s.size()-1; i>=0; i--){
        if(s[i]=='T'){
            n=n+'A';
        }
        if(s[i]=='A'){
            n=n+'T';
        }
        if(s[i]=='G'){
            n=n+'C';
        }
        if(s[i]=='C'){
            n=n+'G';
        }
    }
    
    
    cout <<n;
    return 0;
}
