//This is DSU Datastructure (Disjoint Union Set)
//Template in C++ 

ll findpar(ll node,vector<ll> &par){
    
    if(par[node]==node) return node;
    return par[node]=findpar(par[node],par);
}
 
 
void unionbyrank(ll x,ll y,vector<ll> &par,vector<ll> &rank){
    ll u=findpar(x,par);
    ll v=findpar(y,par);
          
    
    if(rank[u]>rank[v]){
        par[v]=u;
        rank[u]+=rank[v];
     
    }
    else if(rank[v]>rank[u]){
         par[u]=v;
         rank[v]+=rank[u];
      
    }
    else{
        par[v]=u;
        rank[u]+=rank[v];
       
    }
}