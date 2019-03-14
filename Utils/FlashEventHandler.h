#ifndef _FLASH_EVENT_HANDLER_H_
#define _FLASH_EVENT_HANDLER_H_
#pragma once

namespace DuiLib
{
	class CFlashEventHandler
	{
	public:
		CFlashEventHandler() {}
		~CFlashEventHandler() {}

		virtual ULONG STDMETHODCALLTYPE Release( void ) { return S_OK;}
		virtual ULONG STDMETHODCALLTYPE AddRef( void ) { return S_OK;}

		virtual HRESULT OnReadyStateChange ( long newState )
		{
			return S_OK;
		}

		virtual HRESULT OnProgress (long percentDone )
		{
			return S_OK;
		}

		virtual HRESULT FSCommand ( LPCTSTR command, LPCTSTR args )
		{
			return S_OK;
		}

		virtual HRESULT FlashCall ( LPCTSTR request )
		{
			return S_OK;
		}
	};
}

#endif //__FLASH_EVENT_HANDLER_H_