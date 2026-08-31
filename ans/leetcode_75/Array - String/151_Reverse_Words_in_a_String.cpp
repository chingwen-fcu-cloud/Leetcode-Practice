class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;

        while(ss >> word){
            words.push_back(word);
        }
        string res;
        for(int i = words.size() - 1; i >= 0; i--){
            res += words[i];
            if(i != 0){
                res += " ";
            }
        }
        return res;
    }
};

/*
C++ 的 std::stringstream 是標頭檔 <sstream> 中的一個類別。
它把字串當作輸入或輸出資料流來處理，能用來做型別轉換（例如把數字轉成字串、字串轉成數字）以及切割以空白或特定符號隔開的字串。
主要用途
1. 型別轉換 (Type Conversion)
    字串轉數字:
        std::string s = "123";
        int num;
        std::stringstream ss(s);
        ss >> num; // num 現在是整數 123
    數字轉字串:
        int num = 456;
        std::stringstream ss;
        ss << num;
        std::string s = ss.str(); // s 現在是 "456"
2. 字串分割 (Split String)
    利用 >> 運算子會自動以空白（空格、換行、Tab）隔開特性，依序讀取單字或數字：
        std::string text = "apple banana 123";
        std::stringstream ss(text);
        std::string word1, word2;
        int val;

        ss >> word1 >> word2 >> val; 
        // word1 = "apple", word2 = "banana", val = 123
    連續讀取多個未定數量詞彙的寫法：
        std::string line = "10 20 30 40";
        std::stringstream ss(line);
        int temp;
        while (ss >> temp) {
            // 每次迴圈依序讀出 10, 20, 30, 40
        }
3. 重複使用同一個 stringstream
    如果要在同一個 stringstream 物件放入新資料，記得先用 .str("") 清空內容，並用 .clear() 重置錯誤狀態旗標：
        std::stringstream ss;
        ss << "first";
        ss.str("");   // 清空內容
        ss.clear();   // 重置狀態
        ss << "second";
*/