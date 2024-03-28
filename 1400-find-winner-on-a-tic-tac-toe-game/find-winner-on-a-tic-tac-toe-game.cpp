class Solution {
public:
    
    string check(vector<vector<string>> v, vector<vector<int>> moves)
    {
        if( (v[0][0]=="0" && v[0][1]=="0" && v[0][2]=="0") || (v[1][0]=="0"&&v[1][1]=="0"&&v[1][2]=="0") || (v[2][0]=="0"&&v[2][1]=="0"&&v[2][2]=="0"))   
            return "A";     //Row check for A
        
        if( (v[0][0]=="1" && v[0][1]=="1" && v[0][2]=="1") || (v[1][0]=="1"&&v[1][1]=="1"&&v[1][2]=="1") || (v[2][0]=="1"&&v[2][1]=="1"&&v[2][2]=="1"))   
            return "B";     //Row check for B
        
        if( (v[0][0]=="0" && v[1][0]=="0" && v[2][0]=="0") || (v[0][1]=="0"&&v[1][1]=="0"&&v[2][1]=="0") || (v[0][2]=="0"&&v[1][2]=="0"&&v[2][2]=="0"))   
            return "A";     //Column check for A
        
        if( (v[0][0]=="1" && v[1][0]=="1" && v[2][0]=="1") || (v[0][1]=="1"&&v[1][1]=="1"&&v[2][1]=="1") || (v[0][2]=="1"&&v[1][2]=="1"&&v[2][2]=="1"))   
            return "B";     //Column check for B 
        
        if( (v[0][0]=="0" && v[1][1]=="0" && v[2][2]=="0") || (v[2][0]=="0"&&v[1][1]=="0"&&v[0][2]=="0"))   
            return "A";     //Diagnol check for A

        if( (v[0][0]=="1" && v[1][1]=="1" && v[2][2]=="1") || (v[2][0]=="1"&&v[1][1]=="1"&&v[0][2]=="1"))   
            return "B";     //Diagnol check for B

        if(moves.size()==9) return "Draw";

        else return "Pending";
    }

    string tictactoe(vector<vector<int>>& moves) {
        
        vector<vector<string>> v(3,vector<string> (3,""));
        for(int i=0;i<moves.size();i++)
        {
            int x=moves[i][0];
            int y=moves[i][1];
            if(i%2==0) v[x][y]="0";
            else v[x][y]="1";
        }
        return check(v,moves);
        return "";
    }
};