/**********************************************************************
 * @�ر�����
 *     ���δ�����liuk����������ͨ������;����ȡ���ļ��Ŀ�����Ա
 * ���������޸ġ����Ӽ�ɾ���ļ����ݣ����뱣����������
 *     ������������ϵ���ߡ�
 * @�ر���������
 ********************************************************************/

/**
 * @file	: DataDefine.h
 * @brief	: ���ݶ��壬����һЩ�õ���ö�١������ݽṹ
 * @author	: liuk
 * @date	: 2017/02/06 16:13:36
 * @version : 1.0.0.0
 * @contact	: liukangx@hotmail.com
 * 
 */
#ifndef _DATADEFINE_H
#define _DATADEFINE_H
enum EBlockState
{
	E_STATE_CLOSE	  = 0x01,	// ����رյ�
	E_STATE_OPEN	  = 0x02,	// ����򿪵�
	E_STATE_MARK_MINE = 0x03,	// ���Ϊ����
	E_STATE_MARK_UNDE = 0x04	// ���Ϊδ֪(�ʺ�)
};

enum EGameState
{
	E_GAME_LOSE		= 0x01,	// ��Ϸʧ��
	E_GAME_WIN		= 0x02, // ��Ϸʤ��
	E_GAME_IN		= 0x03,	// ��Ϸ��
	E_GAME_NOBEG	= 0x04,	// ��Ϸδ��ʼ
};
// ��Ϸģʽ
enum EGameModel
{
	E_GAME_TURN_MODEL = 0x01, // ����ģʽ
	E_GAME_FLAG_MODEL = 0x02, // ����ģʽ
};
// ����λ��
enum EAdjoinPlace
{
	E_ADJOIN_TOP	 = 0x01,
	E_ADJOIN_LEFT	 = 0x02,
	E_ADJOIN_RIGHT	 = 0x04,
	E_ADJOIN_BOTTOM	 = 0x08,
	E_ADJOIN_LEFTTOP	 = E_ADJOIN_LEFT | E_ADJOIN_TOP,
	E_ADJOIN_LEFTBOTTOM	 = E_ADJOIN_LEFT | E_ADJOIN_BOTTOM,
	E_ADJOIN_RIGHTTOP	 = E_ADJOIN_RIGHT| E_ADJOIN_TOP,
	E_ADJOIN_RIGHTBOTTOM = E_ADJOIN_RIGHT| E_ADJOIN_BOTTOM
};
#define CovertRowIndex(num) (((num) >> 8) & 0X00FF)
#define CovertColIndex(num) ((num) & 0X00FF)
#define CovertKey(row, col) ((((short)(row)) << 8) & 0XFF00) | ((short)(col) & 0X00FF)
#endif // _DATADEFINE_H