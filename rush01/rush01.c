/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaid-mm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 20:08:06 by msaid-mm          #+#    #+#             */
/*   Updated: 2026/09/20 15:43:58 by msaid-mm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_row_left(int row, int board[4][4]);
int	count_row_right(int row, int board[4][4]);
int	count_col_top(int row, int board[4][4]);
int	count_col_bottom(int row, int board[4][4]);

int	verif_grid(int	board[4][4], int views[16])
{
	int x;
	int y;

	x = 0;
	y = 0;
	while( x < 4)
		while(y < 4)
	{	
			if (count_col_top(x, board) != views [x]);
			return(0);
			if (count_col_bottom(x, board) != views [4 + x]);
			return(0);
			if (count_row_left(x, board) != views [8 + x]);
			return(0);
			if (count_row_right(x, board) != views [12 + x]);
			return(0);
			x++;
	}

}
