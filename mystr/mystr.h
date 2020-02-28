
#include<stdio.h>
#include<math.h>

#define PF_d(x) printf("In file:%s, func:%s, line:%d, %s=%lf\n",__FILE__,__func__,__LINE__,#x,x)
#define PF_i(x) printf("In file:%s, func:%s, line:%d, %s=%d\n",__FILE__,__func__,__LINE__,#x,x)
#define PF_lu(x) printf("In file:%s, func:%s, line:%d, %s=%lu\n",__FILE__,__func__,__LINE__,#x,x)
#define PF_c(x) printf("In file:%s, func:%s, line:%d, %s=%c\n",__FILE__,__func__,__LINE__,#x,x)
#define PF_s(x) printf("In file:%s, func:%s, line:%d, %s=%s\n",__FILE__,__func__,__LINE__,#x,x)
