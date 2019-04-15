/**********************************************************************
 * @�ر�����
 *     ���δ�����liuk����������ͨ������;����ȡ���ļ��Ŀ�����Ա
 * ���������޸ġ����Ӽ�ɾ���ļ����ݣ����뱣����������
 *     ������������ϵ���ߡ�
 * @�ر���������
 ********************************************************************/
/**
 * @file	: MineScene.h
 * @brief	: ��Ϸ����������
 * @author	: liuk
 * @date	: 2017/02/06 16:17:20
 * @version : 1.0.0.0
 * @contact	: liukangx@hotmail.com
 * 
 */
#ifndef MINESCENE_H
#define MINESCENE_H

#include <QGraphicsScene>

/*!
 * @class	: CMineScene
 * @brief	: ɨ����Ϸ����
 * @author	: liuk
 * @date	: 2017/02/06 16:18
 */
class CMineScene : public QGraphicsScene
{
	Q_OBJECT

public:
	CMineScene(QObject *parent);
	~CMineScene();

public:
	void RestartGame();
protected slots:
	void SlotBlockOpen(int nRow, int nCol);
	
};

#endif // MINESCENE_H
