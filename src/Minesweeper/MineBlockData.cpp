/**********************************************************************
 * @�ر�����
 *     ���δ�����liuk����������ͨ������;����ȡ���ļ��Ŀ�����Ա
 * ���������޸ġ����Ӽ�ɾ���ļ����ݣ����뱣����������
 *     ������������ϵ���ߡ�
 * @�ر���������
 ********************************************************************/
/**
 * @file	: MineBlockData.cpp
 * @brief	:
 * @author	: liuk
 * @date	: 2017/02/06 16:30:44
 * @version : 1.0.0.0
 * @contact	: liukangx@hotmail.com
 * 
 */
#include "MineBlockData.h"


CMineBlockData::CMineBlockData()
	: m_eMineStatus(E_STATE_CLOSE)
	, m_nMineCnt(-1)
	, m_bIsMine(false)
	, m_nRow(0)
	, m_nCol(0)
{
}


CMineBlockData::~CMineBlockData()
{
}

void CMineBlockData::OpenBlock()
{
	SetBlockState(E_STATE_OPEN);
}

void CMineBlockData::SetAdjoinMine(int nCnt)
{
	m_nMineCnt = nCnt;
}

int CMineBlockData::GetAdjoinMineCnt()
{
	return m_nMineCnt;
}

void CMineBlockData::SetBlockState(EBlockState state)
{
	m_eMineStatus = state;
}

EBlockState CMineBlockData::GetBlockState()
{
	return m_eMineStatus;
}

bool CMineBlockData::IsMine() const
{
	return m_bIsMine;
}

void CMineBlockData::SetMine(bool bIsMine)
{
	m_bIsMine = bIsMine;
}

void CMineBlockData::SetRow(int nRow)
{
	m_nRow = nRow;
}

void CMineBlockData::SetColumn(int nCol)
{
	m_nCol = nCol;
}

int CMineBlockData::GetRow()
{
	return m_nRow;
}

int CMineBlockData::GetColumn()
{
	return m_nCol;
}
