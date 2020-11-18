#ifndef binTree_h
#define binTree_h

typedef int DataType;
typedef struct _binNode{
	DataType data;
	struct _binNode *lchild;
	struct _binNode *rchild;
} BinNode;
//
BinNode *initTree();
BinNode *createTree(DataType, BinNode *, BinNode *);
BinNode *insertL(BinNode *, DataType, BinNode*);
BinNode *insertR(BinNode *, DataType, BinNode*);
//BinNode *insert(BinNode *, DataType, BinNode *, bool);
BinNode *deleteL(BinNode *, BinNode *);
void preOrder(BinNode*);
void inOrder(BinNode*);
void postOrder(BinNode*);

#endif
