void permute(string& str, string ds, vector <string>& vec, bool* visited)
        {
        	if (str.length() == ds.length())
        	{
        		vec.push_back(ds);
        		return;
        	}
        	for (int i = 0; i < str.length(); ++i)
        	{
        		if (!visited[i])
        		{
        			ds += str[i];
        			visited[i]=true;
        			permute(str, ds, vec, visited);
        			visited[i] = false;
        			ds.pop_back();
        		}
        	}
        }

        //takee the original string keep adding a char to a newstring if its not occured earlier 
        //base case will be if adding leads to newstring of length equal to n then push in the 2d vector and return
        //and mark it visited as well after that backtrack and remove char and mark it unvisted
	
		vector<string>find_permutation(string S)
		{
		    string ds;
		    sort(S.begin(),S.end());
		    vector <string> vec;
        	bool* visited = new bool[S.length()];
        	for (int i = 0; i < S.length(); ++i)
        	{
        		visited[i] = false;
        	}
        	permute(S, ds, vec, visited);
        	return vec;
        }