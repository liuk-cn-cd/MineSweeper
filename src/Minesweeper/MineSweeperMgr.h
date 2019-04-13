/**********************************************************************
 * @�ر�����
 *     ���δ�����liuk����������ͨ������;����ȡ���ļ��Ŀ�����Ա
 * ���������޸ġ����Ӽ�ɾ���ļ����ݣ����뱣����������
 *     ������������ϵ���ߡ�
 * @�ر���������
 ********************************************************************/
/**
 * @file	: MineSweeperMgr.h
 * @brief	: ɨ����Ϸ���ݹ���������
 * @author	: liuk
 * @date	: 2017/02/06 16:20:44
 * @version : 1.0.0.0
 * @contact	: liukangx@hotmail.com
 * 
 */
#ifndef _MINESWEEPERMGR_H
#define _MINESEEPERMGR_H
#include <QObject>
#include <map>
#include <vector>
#include <QTime>
#include "DataDefine.h"


class CMineBlockData;

/*!
 * @class	: CMineSweeperMgr
 * @brief	: ɨ����Ϸ���ݹ����࣬������Ϸ���̼�������ѧ���㣬�����Ǹ�������
 * @author	: liuk
 * @date	: 2017/02/06 16:21
 */
class CMineSweeperMgr : public QObject
{
	Q_OBJECT
public:
	static CMineSweeperMgr* GetInstance();
	static void ExitInstance();

public:

	/**
	 * @fn		: InitGame
	 * @brief	: ��ʼ����Ϸ
	 * @access	: public 
	 * @return	: void
	 */
	void InitGame();
	
	/**
	 * @fn		: GetBlock
	 * @brief	: �������кŻ�ȡ��������
	 * @access	: public 
	 * @param	: int nRow
	 * @param	: int nCol
	 * @return	: CMineBlockData*
	 */
	CMineBlockData* GetBlock(int nRow, int nCol);

	/**
	 * @fn		: SetRowCounts
	 * @brief	: ��������
	 * @access	: public 
	 * @param	: int nRows
	 * @return	: void
	 */
	void SetRowCounts(int nRows);

	/**
	 * @fn		: SetColCounts
	 * @brief	: ��������
	 * @access	: public 
	 * @param	: int nCols
	 * @return	: void
	 */
	void SetColCounts(int nCols);

	/**
	 * @fn		: SetMineCount
	 * @brief	:���õ�����
	 * @access	: public 
	 * @param	: int nMineCnt
	 * @return	: void
	 */
	void SetMineCount(int nMineCnt);

	/**
	 * @fn		: GetAdjoinBlock
	 * @brief	: ��ȡ����λ�õķ���
	 * @access	: public 
	 * @param	: int nRow
	 * @param	: int nCol
	 * @param	: EAdjoinPlace ePlace ����λ��
	 * @return	: CMineBlockData*
	 */
	
	CMineBlockData* GetAdjoinBlock(int nRow, int nCol, EAdjoinPlace ePlace);
	/**
	* @fn		: GetColumnCount
	* @brief	: ��ȡ����
	* @access	: protected
	* @return	: int
	*/
	int GetColumnCount() const;

	/**
	* @fn		: GetRowCount
	* @brief	: ��ȡ����
	* @access	: protected
	* @return	: int
	*/
	int GetRowCount() const;

	/**
	 * @fn		: OpenBlock
	 * @brief	: �򿪷��飬�Լ���Χ�������Ϸ�����
	 * @access	: public 
	 * @param	: int nRow
	 * @param	: int nCol
	 * @return	: void
	 */
	void OpenBlock(int nRow, int nCol);

	/**
	 * @fn		: UpdateGameProgress
	 * @brief	: ������Ϸ����
	 * @access	: public 
	 * @return	: void
	 */
	void UpdateGameProgress();

	/**
	* @fn		: GameState
	* @brief	: ��Ϸ״̬
	* @access	: protected
	* @return	: EGameState
	*/
	EGameState GameState();

	/**
	 * @fn		: GetGameTime
	 * @brief	: ��ȡ��Ϸ��ʱ�䣬ms
	 * @access	: public 
	 * @return	: QT_NAMESPACE::QTime
	 */
	int GetGameTime();

	/**
	 * @fn		: CalcMarkCount
	 * @brief	: ��ȡ������Χ�ı��Ϊ���׵���Ŀ
	 * @access	: public 
	 * @param	: int nRow
	 * @param	: int nCol
	 * @return	: int
	 */
	int CalcMarkCount(int nRow, int nCol);

	void ChangeGameModel(EGameModel eGameModel);

	EGameModel GameModel();
protected:
	CMineSweeperMgr();
	~CMineSweeperMgr();

protected:

	/**
	 * @fn		: InitMine
	 * @brief	: ��ʼ������
	 * @access	: protected 
	 * @param	: int nRow ��ʼ�������λ�ã��˴������ǵ���
	 * @param	: int nCol
	 * @return	: void
	 */
	void InitMine(int nRow, int nCol);

	/**
	 * @fn		: InitBlock
	 * @brief	: ��ʼ����ͨ��
	 * @access	: protected 
	 * @return	: void
	 */
	void InitBlock();

	/**
	 * @fn		: CalcMineCnt
	 * @brief	:����һ��������Χ���׵�����
	 * @access	: protected 
	 * @param	: int nRow
	 * @param	: int nCol
	 * @return	: int
	 */
	int CalcMineCnt(int nRow, int nCol);


	/**
	 * @fn		: Clear
	 * @brief	: �������
	 * @access	: protected 
	 * @return	: void
	 */
	void Clear();

	/**
	* @fn		: InitGame
	* @brief	: ��ʼ����Ϸ
	* @access	: public
	* @param	: int nRow ��ʼ������ķ����к�
	* @param	: int nCol ��ʼ������ķ����к�
	*						,��ʼ������ķ�����Ϊ����
	* @return	: void
	*/
	void StartGame(int nRow, int nCol);

	/**
	 * @fn		: TurnBlock
	 * @brief	:��������
	 * @access	: protected 
	 * @param	: int nRow
	 * @param	: int nCol
	 * @return	: void
	 */
	void TurnBlock(int nRow, int nCol);

	/**
	 * @fn		: LostGame
	 * @brief	: �����Ϸ�������㷭������
	 * @access	: protected 
	 * @return	: void
	 */
	void LostGame();

	/**
	 * @fn		: NormalOpenBlock
	 * @brief	: �򿪷��飬����ģʽ
	 * @access	: protected 
	 * @param	: int nRow
	 * @param	: int nCol
	 * @return	: void
	 */
	void NormalOpenBlock(int nRow, int nCol);

	void WinGame();

	/**
	 * @fn		: QuickOpenBlock
	 * @brief	: ���ٴ򿪷��飬����Ѵ򿪷��飬������Χ����
	 * @access	: protected 
	 * @param	: int nRow
	 * @param	: int nCol
	 * @return	: void
	 */
	void QuickOpenBlock(int nRow, int nCol);

	/**
	 * @fn		: StrongOpenBlock
	 * @brief	: ǿ�д򿪷Ǳ��Ϊ���׵ĸ��ӣ��ǵ��׾�����
	 *			��������������Χ�����к��ʵĸ���
	 * @access	: protected 
	 * @param	: int nRow
	 * @param	: int nCol
	 * @return	: void
	 */
	void StrongOpenBlock(int nRow, int nCol);
signals:
	void SigGameWin();

	void SigGameLost();

	void SigProgress(double dProgress);
private:
	static CMineSweeperMgr* m_pInstance;

	int m_nRowCnt;
	int m_nColCnt;
	int m_nMineCnt;
	int m_nOverBlock; /// ʣ��δ�򿪵ķ�����
	EGameModel m_eGameModel; // ��Ϸģʽ
	// ��Ϸ��ʱ
	QTime m_tmGameClock;

	EGameState m_eGameState; //��Ϸ״��

	std::map<short, CMineBlockData*> m_mapMineMat; // ��Ϸ�������ݣ�keyֵ��8λ�����кţ���8λ�����к�

	// δ����ķ��飬��ʼ������ʱ��¼δ���䵽���׵ķ���
	std::vector<short> m_arrNoAllocBlock;
};
#define MineSweerMgrIns (*CMineSweeperMgr::GetInstance())
#endif // _MINESWEEPERMGR_H