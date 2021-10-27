int ht(Node * root)
{
    if(root==NULL)return 0;
    int lh=ht(root->left);
    int rh=ht(root->right);
    return 1+max(lh,rh);
}
vector<int> Kdistance(struct Node *root, int k)
{
  
  
  vector<int>ans;
  if(root==NULL)return ans;
  if(k>ht(root))return ans;
  
  if(k==0){ans.push_back(root->data);return ans;}
  vector<int>l=Kdistance(root->left,k-1);
  vector<int>r=Kdistance(root->right,k-1);
  for(auto i:l)ans.push_back(i);
    for(auto i:r)ans.push_back(i);
    return ans;
  

}
