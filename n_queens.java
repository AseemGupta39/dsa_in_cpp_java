import java.sql.RowIdLifetime;
import java.util.ArrayList;
import java.util.List;

public class n_queens
{


    public boolean isSafe(int row,int col,char[][] board)
    {
        // horizontal check
        for(int j = 0;j<board.length;j++)
        {
            if(board[row][j] == 'Q')
            {
                return false;
            }
        }

        //vertical check
        for(int i=0;i<board[0].length;i++)
        {
            if(board[i][col] == 'Q'){
                return false;
            }
        }

        // upper left
        int r = row;
        for(int c = col;c>=0 && r>=0;c--,r--)
        {
            if(board[r][c] == 'Q')
            {
                return false;
            }
        }   
        
        // upper right
        r = row;
        for(int c = col;c<board.length && r>=0;r--,c++)
        {
            if(board[r][c] == 'Q')
            {
                return false;
            }
        }

        // lower left
        r = row;
        for(int c = col;c>=0 && r<board.length;r++,c--)
        {
            if(board[r][c] == 'Q')
            {
                return false;
            }
        }

        // lower right
        r = row;
        for(int c = col;c<board.length && r <board.length;r++,c++){
            if(board[r][c] == 'Q')
            {
                return false;
            }
        }

        return true;
    }


    public void saveBoard(char[][] board, List<List<String>> all_boards)
    {
        String row = "";
        List<String> new_board = new ArrayList<>();

        for(int i = 0;i<board.length;i++)
        {
            row = "";
            for(int j=0;j<board[0].length;j++)
            {
                if(board[i][j] == 'Q')
                {
                    row += 'Q';
                }
                else
                {
                    row += '.';
                }
                new_board.add(row);

            }
        }
        all_boards.add(new_board);
    }


    public void helper(char[][] board, List<List<String>> all_boards, int col)
    {

        for(int row=0;row<board.length;row++)
        {
            if(col == board.length)
            {
                saveBoard(board,all_boards);
                return;

            }

            if(isSafe(row,col,board))
            {
                board[row][col] = 'Q';
                helper(board, all_boards, col+1); 
                board[row][col] = '.';
            }

        }
    } 


    public List<List<String>> solve_n_queen(int n)
    {
        List<List<String>> all_boards = new ArrayList<>();
        char[][] board = new char[n][n];
        helper(board, all_boards, 0);        
        return all_boards;
    }
    
    public static void main(String[] args)
    {
        System.out.print("chal raha hai bhai\n");
    }
}