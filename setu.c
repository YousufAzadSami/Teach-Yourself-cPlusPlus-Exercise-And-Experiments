class A1{
    public:
        int upper;
        int lower;
        A1(int i) : lower(i),upper(lower+1)
        {};
};


int main(){
    Al a(5);

    cout << a.lower << " " << a.upper << endl;
    return 0;
}
