#include "binTree.h"

} BinNode;

BinNode *(){
	BinNode *bin = (BinNode *)malloc(sizeof(BinNode));
	bin->lchild = NULL;
	bin->rchild = NULL;

	return bin;
}
