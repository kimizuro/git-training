/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush001.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaid-mm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 14:51:42 by msaid-mm          #+#    #+#             */
/*   Updated: 2026/09/20 15:47:02 by msaid-mm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int valid_place(int row,int col, int num, int board[4][4]);
int valid_views(int board[4][4], int views[16]);
int valid_views_partial(int row, int col, int board[4][4], int views [16]);

int solve(int row, int col, int board[4][4], int views[16])
{
	int num;

	if (row == 4)
		return(valid_views(board,views));
	if (col == 4)
		return(solve(row + 1, 0, board, views));
	num = 1;
	while (num <=4)
	{
	    if (valid_place(row, col, num, board)
		{

		  board([row][col] = num;
			if(valid_views_partial( row, col, board, views) && 
				solve(row, col + 1, board, views))
				return(1);
			board[row][col] = 0;
			
		}
		num++;
	}
	return(0);
}
