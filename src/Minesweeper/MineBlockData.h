/**********************************************************************
 * @�ر�����
 *     ���δ�����liuk����������ͨ������;����ȡ���ļ��Ŀ�����Ա
 * ���������޸ġ����Ӽ�ɾ���ļ����ݣ����뱣����������
 *     ������������ϵ���ߡ�
 * @�ر���������
 ********************************************************************/

/**
 * @file	: MineBlockData.h
 * @brief	: ���׷��������࣬ÿһ�����������ͼ�ϵ�һ������
 * @author	: liuk
 * @date	: 2017/02/06 16:16:10
 * @version : 1.0.0.0
 * @contact	: liukangx@hotmail.com
 * 
 */
#ifndef _MINEBLOCKDATA_H
#define _MINEBLOCKDATA_H
#include "DataDefine.h"
/*!
 * @class	: CMineBlockData
 * @brief	: ���׷���������
 * @author	: liuk
 * @date	: 2017/02/06 16:17
 */
class CMineBlockData
{
public:
	CMineBlockData();
	~CMineBlockData();
public:
	/**
	 * @fn		: OpenBlock
	 * @brief	: �򿪷���
	 * @access	: public 
	 * @return	: void
	 */
	void OpenBlock();

	/**
	 * @fn		: SetAdjoinMine
	 * @brief	: ������Χ�м�������
	 * @access	: public 
	 * @param	: int nCnt
	 * @return	: void
	 */
	void SetAdjoinMine(int nCnt);

	/**
	 * @fn		: GetAdjoinMineCnt
	 * @brief	: ��ȡ��Χ�м�������
	 * @access	: public 
	 * @return	: int
	 */
	int GetAdjoinMineCnt();


	/**
	 * @fn		: SetClockState
	 * @brief	: CMineBlockData::SetBlockState
	 * @access	: public 
	 * @param	: EBlockState state
	 * @return	: void
	 */
	void SetBlockState(EBlockState state);

	/**
	 * @fn		: GetBlockState
	 * @brief	: ��ȡ��ǰ״̬
	 * @access	: public 
	 * @return	: EBlockState
	 */
	EBlockState GetBlockState();

	/**
	 * @fn		: IsMine
	 * @brief	: �Ƿ��ǵ���
	 * @access	: public 
	 * @return	: bool
	 */
	bool IsMine() const;

	/**
	 * @fn		: SetMine
	 * @brief	: ���óɵ���
	 * @access	: public 
	 * @param	: bool bIsMine
	 * @return	: void
	 */
	void SetMine(bool bIsMine);

	/**
	 * @fn		: SetRow
	 * @brief	: ������
	 * @access	: public 
	 * @param	: int nRow
	 * @return	: void
	 */
	void SetRow(int nRow);

	/**
	 * @fn		: SetColumn
	 * @brief	: ������
	 * @access	: public 
	 * @param	: int nCol
	 * @return	: void
	 */
	void SetColumn(int nCol);

	/**
	 * @fn		: GetRow
	 * @brief	: CMineBlockData::GetRow
	 * @access	: public 
	 * @return	: int
	 */
	int GetRow();

	/**
	 * @fn		: GetColumn
	 * @brief	: CMineBlockData::GetColumn
	 * @access	: public 
	 * @return	: int
	 */
	int GetColumn();
private:
	int m_nMineCnt; // ��������-1Ϊδ����
	EBlockState m_eMineStatus;
	int m_nCol;
	int m_nRow;
	bool m_bIsMine;	//�Ƿ��ǵ���


};

#endif //_MINEBLOCKDATA_H