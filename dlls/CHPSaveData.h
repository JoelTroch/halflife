#ifndef CHPSAVEDATA_H
#define CHPSAVEDATA_H

#pragma once

class CHPSaveData
{
public:
	BOOL m_bRhetoricalQuestion;
	int m_iMagicNumber;

#ifndef DONT_DEFINE_SAVE_DATA_AGAIN
	static TYPEDESCRIPTION m_SaveData[];
#endif
};

#ifndef DONT_DEFINE_SAVE_DATA_AGAIN
TYPEDESCRIPTION CHPSaveData::m_SaveData[] =
{
	DEFINE_FIELD( CHPSaveData, m_bRhetoricalQuestion, FIELD_BOOLEAN ),
	DEFINE_FIELD( CHPSaveData, m_iMagicNumber, FIELD_INTEGER )
};
#endif

extern CHPSaveData g_HPSaveData;

#endif // CHPSAVEDATA_H
