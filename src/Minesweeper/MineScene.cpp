/**********************************************************************
 * @�ر�����
 *     ���δ�����liuk����������ͨ������;����ȡ���ļ��Ŀ�����Ա
 * ���������޸ġ����Ӽ�ɾ���ļ����ݣ����뱣����������
 *     ������������ϵ���ߡ�
 * @�ر���������
 ********************************************************************/

/**
 * @file	: MineScene.cpp
 * @brief	:
 * @author	: liuk
 * @date	: 2017/02/06 16:30:58
 * @version : 1.0.0.0
 * @contact	: liukangx@hotmail.com
 * 
 */
#include "MineScene.h"
#include "MineBlock.h"
#include "MineBlockData.h"
#include "MineSweeperMgr.h"

CMineScene::CMineScene(QObject *parent)
	: QGraphicsScene(parent)
{
	setBackgroundBrush(Qt::white);
}

CMineScene::~CMineScene()
{

}

void CMineScene::RestartGame()
{
	this->clear();
	int nCol = MineSweerMgrIns.GetColumnCount();
	int nRow = MineSweerMgrIns.GetRowCount();

	for (int i = 0; i < nRow; ++i)
	{
		for (int j = 0; j < nCol; ++j)
		{
			CMineBlockData* pBlockData = MineSweerMgrIns.GetBlock(i, j);
			CMineBlock* pBlockItem = new CMineBlock;
			pBlockItem->SetBlockData(pBlockData);
			connect(pBlockItem, SIGNAL(SigBlockOpen(int,int))
				, this, SLOT(SlotBlockOpen(int,int)));
			this->addItem(pBlockItem);
		}
	}
}

void CMineScene::SlotBlockOpen(int nRow, int nCol)
{
	if (MineSweerMgrIns.GameState() == E_GAME_WIN || MineSweerMgrIns.GameState() == E_GAME_LOSE)
	{
		return;
	}
	MineSweerMgrIns.OpenBlock(nRow, nCol);
	update();
}
