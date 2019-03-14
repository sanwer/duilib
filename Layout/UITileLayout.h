#ifndef _UITILELAYOUT_H_
#define _UITILELAYOUT_H_
#pragma once

namespace DuiLib
{
	class UILIB_API CTileLayoutUI : public CContainerUI
	{
		DECLARE_DUICONTROL(CTileLayoutUI)
	public:
		CTileLayoutUI();

		LPCTSTR GetClass() const;
		LPVOID GetInterface(LPCTSTR pstrName);

		void SetPos(RECT rc, bool bNeedInvalidate = true);

		SIZE GetItemSize() const;
		void SetItemSize(SIZE szItem);
		int GetColumns() const;
		void SetColumns(int nCols);

		void SetAttribute(LPCTSTR pstrName, LPCTSTR pstrValue);

	protected:
		SIZE m_szItem;
		int m_nColumns;
	};
}
#endif // __UITILELAYOUT_H_
