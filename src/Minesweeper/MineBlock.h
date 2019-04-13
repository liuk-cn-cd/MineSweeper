/**********************************************************************
 * @�ر�����
 *     ���δ�����liuk����������ͨ������;����ȡ���ļ��Ŀ�����Ա
 * ���������޸ġ����Ӽ�ɾ���ļ����ݣ����뱣����������
 *     ������������ϵ���ߡ�
 * @�ر���������
 ********************************************************************/
/**
 * @file	: MineBlock.h
 * @brief	: ���׷���UI�������� 
 * @author	: liuk
 * @date	: 2017/02/06 16:14:49
 * @version : 1.0.0.0
 * @contact	: liukangx@hotmail.com
 * 
 */
#ifndef MINEBLOCK_H
#define MINEBLOCK_H

#include <QGraphicsItem>
#include <QTime>
#include <QObject>
#include "DataDefine.h"
class CMineBlockData;
/*!
 * @class	: CMineBlock
 * @brief	: ���׷���item
 * @author	: liuk
 * @date	: 2017/02/06 16:15
 */
class CMineBlock :public QObject, public QGraphicsItem
{
	Q_OBJECT
public:
	CMineBlock(QGraphicsItem *parent = NULL);
	~CMineBlock();
public:
	void SetBlockData(CMineBlockData* pBlockData);
	
private:
	virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget /* = Q_NULLPTR */);
	
	virtual QRectF boundingRect() const;

	virtual void mousePressEvent(QGraphicsSceneMouseEvent *event);
	
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

private:
	/**
	 * @fn		: DrawOpenBlock
	 * @brief	: ���ƴ򿪵ķ���
	 * @access	: private 
	 * @param	: QPainter * painter
	 * @param	: const QStyleOptionGraphicsItem * option
	 * @return	: void
	 */
	void DrawOpenBlock(QPainter *painter, const QStyleOptionGraphicsItem *option);
	
	/**
	 * @fn		: DrawCloseBlock
	 * @brief	: ���ƹرյķ���
	 * @access	: private 
	 * @param	: QPainter * painter
	 * @param	: const QStyleOptionGraphicsItem * option
	 * @return	: void
	 */
	void DrawCloseBlock(QPainter *painter, const QStyleOptionGraphicsItem *option);
	
	/**
	 * @fn		: DrawMarkMine
	 * @brief	: ���Ʊ��Ϊ���׵ķ���
	 * @access	: private 
	 * @param	: QPainter * painter
	 * @param	: const QStyleOptionGraphicsItem * option
	 * @return	: void
	 */
	void DrawMarkMine(QPainter *painter, const QStyleOptionGraphicsItem *option);

	/**
	 * @fn		: DrawMarkUnde
	 * @brief	: ���Ʊ��Ϊδ֪�ķ���
	 * @access	: private 
	 * @param	: QPainter * painter
	 * @param	: const QStyleOptionGraphicsItem * option
	 * @return	: void
	 */
	void DrawMarkUnde(QPainter *painter, const QStyleOptionGraphicsItem *option);

	/**
	 * @fn		: GetTextColorByMineCnt
	 * @brief	: ���ݵ���������ȡ�ı���ɫ
	 * @access	: private 
	 * @param	: int nMineCnt
	 * @return	: QT_NAMESPACE::QColor
	 */
	QColor GetTextColorByMineCnt(int nMineCnt);

	void OnMouseClicked();

signals:
	//�����¼�
	void SigBlockOpen(int nRow, int nCol);
private:
	CMineBlockData* m_pBlockData;
	// ������ʱ��
	QTime m_tmClick;
};

#endif // MINEBLOCK_H
