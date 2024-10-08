#include<iostream>
#include<string>
using namespace std;

bool tanyajawab(string pertanyaan, string jawaban[], int jawabanbenar){
    cout<<pertanyaan<<endl;
    for(int i = 0; i < 4; i++){
        cout<<". "<<jawaban[i]<<endl;
    }
    int jawabanpengguna;
    cout<<"pilih jawaban (1-4) : ";
    cin>>jawabanpengguna;
    return jawabanpengguna - 1 == jawabanbenar;

}

int main(){
    int skor = 100;
    
    
    cout<<" ==========================================================================="<<endl;
    cout<<"|                       SELAMAT DATANG DI KUIS  RANDOM                      |"<<endl;
    cout<<" ==========================================================================="<<endl<<endl;
    
    cout<<"PERTANYAAN PERTAMA"<<endl;
    string pertanyaan1 = "Siapa nama presiden pertama Indonesia?";
    string jawaban1[] ={"I.R Soekarno","Dwi Sakethi","Yusuf Alif Bahari","B.J Habibie"};
    
    if(tanyajawab(pertanyaan1,jawaban1,0)){
        cout<<"BETUL BANGET!!"<<endl<<endl;
    }
    else{
        cout<<"SALAHHHHHH!!!"<<endl<<endl;
        skor-=20;
    }
    
    cout<<"PERTANYAAN BERIKUTNYA"<<endl;
    string pertanyaan2 = "Tahun berapakah Indonesia merdeka?";
    string jawaban2[] = {"1928","1945","1999","2002"};
    
    if(tanyajawab(pertanyaan2,jawaban2,1)){
        cout<<"BETUL BANGET!!"<<endl<<endl;
    }
    else{
        cout<<"SALAHHHHHH!!!"<<endl<<endl;
        skor-=20;
    }
    
    cout<<"PERTANYAAN BERIKUTNYA"<<endl;
    string pertanyaan3 = "Siapa penemu gaya gravitasi bumi?";
    string jawaban3[] ={"Leonardo Da vinci","Albert Einstein","Dimas Aji Seto","Isaac Newton"};
    
     if(tanyajawab(pertanyaan3,jawaban3,3)){
        cout<<"BETUL BANGET!!"<<endl<<endl;
    }
    else{
        cout<<"SALAHHHHHH!!!"<<endl<<endl;
        skor-=20;
    }
    
     cout<<"PERTANYAAN BERIKUTNYA"<<endl;
    string pertanyaan4 = "Negara berdasarkan atas Ketuhanan Yang Maha esa merupakan bunyi pasal?";
    string jawaban4[] ={"Pasal 29 ayat 1 UUD 1945","Pasal 27 ayat 2 UUD 1945","Pasal 14 UUD 1945","Pasal 1 ayat 1 UUD 1945"};
    
     if(tanyajawab(pertanyaan4,jawaban4,0)){
        cout<<"BETUL BANGET!!"<<endl<<endl;
    }
    else{
        cout<<"SALAHHHHHH!!!"<<endl<<endl;
        skor-=20;
    }
    
     cout<<"PERTANYAAN BERIKUTNYA"<<endl;
    string pertanyaan5 = "siapakah pemenang fifa world cup tahun 2014 yang di adakan di brazil?";
    string jawaban5[] ={"Argentina","Portugal","Indonesia","Jerman"};
    
     if(tanyajawab(pertanyaan5,jawaban5,3)){
        cout<<"BETUL BANGET!!"<<endl<<endl;
    }
    else{
        cout<<"SALAHHHHHH!!!"<<endl<<endl;
        skor-=20;
    }
    
    cout<<"skor anda adalah : "<<skor;
    return 0 ;
}
