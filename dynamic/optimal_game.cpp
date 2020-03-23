optimal strategy of game:

given an array of coins with values, you need to maximize your values
Note : other player also plays optimally

I/P : 20,5,4,6
O/P : 25

I/P : 2,3,15,7
O/P : 17

simple logic : calculate all even valued coins and all odd valued coins and then find the max out of the two when other player don't play optimally


maxValue(coins,l,r) = {
    max{
        // if we choose left coin then,
        coins[l] + min(
                        maxValue(coins,l+2,r), // if opponent choose coins[l+1]
                        maxValue(coins,l+1,r-1) // if opponent choose coins[r] 
        ),
//  minimum is used since oppoent tries to give the minimum sum to us.
        coins[r] + min(
                        maxValue(coins,l,r-2), // if opponent choose coins[r-1]
                        maxValue(coins,l+1,r-1) // if opponent choose coins[l]
        )

    }



}




int maxValue(coins,l ,r){

}

