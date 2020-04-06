class Mx{
	public :
		Mx();
		friend Mx operator+(Mx &,Mx &);
		void input();
		void show();
	private :
		int m[2][3];
};
