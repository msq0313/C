/*
嵌套的结构 
*/
struct point{
	int x;
	int y;
};
struct rectangle{
	struct point pt1;
	struct point pt2;
}r;
r.pt1.x
r.pt1.y
r.pt2.x
r.pt2.y

struct rectangle r,*rp;
rp = &r;

//下面四种等价 
r.pt1.x
rp->pt1.x
(r.pt1).x
(r->pt1).x

//但是没有rp->pt1->x(因为pt1不是指针) 
