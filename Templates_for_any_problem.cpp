#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<n;i++)
#define foe(i,n) for(i=0;i<=n;i++)
#define Foe(i,k,n) for(i=k;i<=n;i++)
#define ll long long
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(a,a+n)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>	vi;
typedef vector<ll>	vl;
typedef vector<pii>	vpii;
typedef vector<pl>	vpl;
int rng(int lim) {
	uniform_int_distribution<int> uid(0,lim-1);
	return uid(rang);
}
int mpow(int base, int exp); 
void ipgraph(int n, int m);
void dfs(int u, int par);

const int mod = 1000000007;

vi g[N];
int a[N];

void solve() {
  int i, j, n, m;
}

int main() {

    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}

int mpow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}

int isPrime(int num)
{
  int checkFactor, until;

  if(num == 2 ||num ==3 || num == 5) return PRIME;
  if(num <=1||num%2==0) return NOT_PRIME;
   until = sqrt(num);
   for(checkFactor=3; checkFactor <= until; checkFactor+=2)
   	if(num % checkFactor == 0) return NOT_PRIME;

   return PRIME;
}


int combine(int num1, int num2)
{
  int power = 1, toProcess;
  toProcess = num2;
  
  while(toProcess!=0)
  {
    toProcess/=10;
    power*=10;
  }
  return num1*power + num2;
}


void ipgraph(int n, int m){
	int i, u, v;
	while(m--){
		cin>>u>>v;
    u--, v--;
		g[u].pb(v);
		g[v].pb(u);
	}
}

void dfs(int u){
	for(int v:g[u]){
		if (vis[v]) continue;
		dfs(v);
	}
}

void dfs(int u, int par){
	for(int v:g[u]){
		if (v == par) continue;
		dfs(v, u);
		
void push(struct Node** head_ref, int new_data) 
{ 
	/* allocate node */
	struct Node* new_node = 
		(struct Node*) malloc(sizeof(struct Node)); 

	/* put in the data */
	new_node->data = new_data; 

	/* link the old list off the new node */
	new_node->next = (*head_ref); 

	/* move the head to point to the new node */
	(*head_ref) = new_node; 
} 
void printList(struct Node *ptr)  
{  
    while (ptr != NULL)  
    {  
        printf("%d->", ptr->data);  
        ptr = ptr->next;  
    }  
    printf("NULL\n");  
} 
