int mySqrt(int x) {
	long long lo=0, hi=x, mid;
	while(lo<=hi){             
		mid=(lo+hi)>>1;
        // condition for neglecting left half
		if(mid*mid<=x){             
			lo=mid+1;
		}
		else hi=mid-1;
	}
    // why -1? because we need it:), eg: for 8, we'd have neglected 2, and lo became 3
    // but we need ans as 2.
	return lo-1;
}