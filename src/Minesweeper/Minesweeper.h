/**********************************************************************
 * @�ر�����
 *     ���δ�����liuk����������ͨ������;����ȡ���ļ��Ŀ�����Ա
 * ���������޸ġ����Ӽ�ɾ���ļ����ݣ����뱣����������
 *     ������������ϵ���ߡ�
 * @�ر���������
 ********************************************************************/
/**
 * @file	: Minesweeper.h
 * @brief	: ɨ����Ϸ������
 * @author	: liuk
 * @date	: 2017/02/06 16:20:16
 * @version : 1.0.0.0
 * @contact	: liukangx@hotmail.com
 * 
 */
#ifndef MINESWEEPER_H
#define MINESWEEPER_H

#include <QtWidgets/QMainWindow>
#include "ui_Minesweeper.h"
class CMineScene;
class Minesweeper : public QMainWindow
{
	Q_OBJECT

public:
	Minesweeper(QWidget *parent = 0);
	~Minesweeper();
protected:
	virtual void timerEvent(QTimerEvent *event);
protected slots:
	void on_actionOption_triggered();

	void on_ptnNewGame_clicked();

	void on_ptnModel_toggled(bool);

	void SlotGameOver();

	void SlotGameWin();

	void SlotProgress(double dProgress);
	
private:
	Ui::MinesweeperClass ui;
	CMineScene* m_pScene;
	// ˢ��ʱ��Ķ�ʱ��
	int m_nTimerId;
};

#endif // MINESWEEPER_H
