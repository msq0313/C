/*
Ƕ�׵Ľṹ 
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

//�������ֵȼ� 
r.pt1.x
rp->pt1.x
(r.pt1).x
(r->pt1).x

//����û��rp->pt1->x(��Ϊpt1����ָ��) 
