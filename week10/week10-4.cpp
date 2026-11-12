//week10-4.cpp 學習計畫 Math 第7題
//leecode 43. Multiply Strings
class Solution {
public:
    vector<int> myStrVec(string num){
       vector<int> ans;
       for(int i=num.length()-1;i>=0;i--){
         ans.push_back(num[i]-'0');
       }
       return ans;
    }
    string multiply(string num1, string num2) {
      if(num1=="0"|| num2=="0") return "0";
      vector<int> a= myStrVec(num1);
      vector<int> b= myStrVec(num2);

      vector<int> ans(a.size()+b.size());

      for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
           ans[i+j] += a[i]*b[j];
           if(ans[i+j]>9){//要進位
            ans[i+j+1]+=ans[i+j]/10;
            ans[i+j]=ans[i+j]%10;
           }
        }
      }
      //把倒過來的陣列，變成字串
      string ans2="";
      for(int i=ans.size()-1;i>=0;i--){
         if(i==ans.size()-1 && ans[i]==0) continue;
         ans2+=('0' + ans[i]);
      }
      return ans2;
    }
};
