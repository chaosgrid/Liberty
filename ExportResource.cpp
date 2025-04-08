#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <Winsock2.h>

#include <atlbase.h>
#include <atlcom.h>

#define _AFXDLL
#include <afxwin.h>
#include <afxdocob.h>

#include <servprov.h>
#include <vsqryed.h>
#include <vsshell90.h>
#include <fpstfmt.h>
#include <uilocale.h>

#import "resedit.tlb" raw_interfaces_only

#undef assert
#define assert(expression) if(!(expression)) { __debugbreak(); _wassert(_CRT_WIDE(#expression), _CRT_WIDE(__FILE__), (unsigned)(__LINE__)); }

// office
GUID IID_IMsoComponentManager = { 0x000C060B, 0x0000, 0x0000, { 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46 } };
GUID SID_SMsoComponentManager = { 0x000C0601, 0x0000, 0x0000, { 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46 } };

// internal
GUID CLSID_IClassDesigner = { 0x6d5140d3, 0x7436, 0x11ce, { 0x80, 0x34, 0x00, 0xaa, 0x00, 0x60, 0x09, 0xfa  } };
GUID GUID_ResEdit = { 0x177559e0, 0xd141, 0x11d0, { 0x92, 0xdf, 0x0, 0xa0, 0xc9, 0x13, 0x8c, 0x45 } };


class UberServiceProvider :
	public IServiceProvider,
	public SVsQueryEditQuerySave,
	public IVsQueryEditQuerySave,
	public IVsQueryEditQuerySave2,
	public IVsRunningDocumentTable,
	public IVsUIShellOpenDocument,
	public IUIHostLocale2,
	public IVsUIHierarchy,
	public IVsProject,
	public IVsRegisterEditors
{
public:
	IVsEditorFactory* pResEdit = nullptr;
	IServiceProvider* pParentServiceProvider = nullptr;
	HMODULE hUIResourcesModule = NULL;

	UberServiceProvider(IServiceProvider* pParent)
	{
		this->pParentServiceProvider = pParent;
	}

	// ----------------------------------------------------------
	// IUnknown Interface
	// ----------------------------------------------------------

	virtual HRESULT STDMETHODCALLTYPE QueryInterface(
		/* [in] */ REFIID riid,
		/* [iid_is][out] */ _COM_Outptr_ void __RPC_FAR* __RPC_FAR* ppvObject);

	virtual ULONG STDMETHODCALLTYPE AddRef(void);

	virtual ULONG STDMETHODCALLTYPE Release(void);


	// ----------------------------------------------------------
	// IServiceProvider Interface
	// ----------------------------------------------------------

	HRESULT STDMETHODCALLTYPE QueryService(
		/* [in] */ _In_ REFGUID guidService,
		/* [in] */ _In_ REFIID riid,
		/* [out] */ _Outptr_ void __RPC_FAR* __RPC_FAR* ppvObject);


	// ----------------------------------------------------------
	// SVsQueryEditQuerySave Interface
	// ----------------------------------------------------------

	// empty interface


	// ----------------------------------------------------------
	// IVsQueryEditQuerySave Interface
	// ----------------------------------------------------------

	virtual HRESULT STDMETHODCALLTYPE BeginQuerySaveBatch(void);

	virtual HRESULT STDMETHODCALLTYPE EndQuerySaveBatch(void);

	virtual HRESULT STDMETHODCALLTYPE QueryEditFiles(
		/* [in] */ VSQueryEditFlags rgfQueryEdit,
		/* [in] */ int cFiles,
		/* [size_is][in] */ __RPC__in_ecount_full(cFiles) const LPCOLESTR rgpszMkDocuments[],
		/* [size_is][in] */ __RPC__in_ecount_full(cFiles) const VSQEQSFlags rgrgf[],
		/* [size_is][in] */ __RPC__in_ecount_full(cFiles) const VSQEQS_FILE_ATTRIBUTE_DATA rgFileInfo[],
		/* [out] */ __RPC__out VSQueryEditResult* pfEditCanceled,
		/* [out] */ __RPC__out VSQueryEditResultFlags* prgfMoreInfo);

	virtual HRESULT STDMETHODCALLTYPE DeclareUnreloadableFile(
		/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
		/* [in] */ VSQEQSFlags rgf,
		/* [in] */ __RPC__in const VSQEQS_FILE_ATTRIBUTE_DATA* pFileInfo);

	virtual HRESULT STDMETHODCALLTYPE OnAfterSaveUnreloadableFile(
		/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
		/* [in] */ VSQEQSFlags rgf,
		/* [in] */ __RPC__in const VSQEQS_FILE_ATTRIBUTE_DATA* pFileInfo);

	virtual HRESULT STDMETHODCALLTYPE QuerySaveFile(
		/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
		/* [in] */ VSQEQSFlags rgf,
		/* [in] */ __RPC__in const VSQEQS_FILE_ATTRIBUTE_DATA* pFileInfo,
		/* [retval][out] */ __RPC__out VSQuerySaveResult* pdwQSResult);

	virtual HRESULT STDMETHODCALLTYPE IsReloadable(
		/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
		/* [retval][out] */ __RPC__out BOOL* pbResult);


	// ----------------------------------------------------------
	// IVsQueryEditQuerySave2 Interface
	// ----------------------------------------------------------

	//virtual HRESULT STDMETHODCALLTYPE QueryEditFiles(
	//	/* [in] */ VSQueryEditFlags rgfQueryEdit,
	//	/* [in] */ int cFiles,
	//	/* [size_is][in] */ __RPC__in_ecount_full(cFiles) const LPCOLESTR rgpszMkDocuments[],
	//	/* [size_is][in] */ __RPC__in_ecount_full(cFiles) const VSQEQSFlags rgrgf[],
	//	/* [size_is][in] */ __RPC__in_ecount_full(cFiles) const VSQEQS_FILE_ATTRIBUTE_DATA rgFileInfo[],
	//	/* [out] */ __RPC__out VSQueryEditResult* pfEditVerdict,
	//	/* [out] */ __RPC__out VSQueryEditResultFlags* prgfMoreInfo);

	virtual HRESULT STDMETHODCALLTYPE QuerySaveFiles(
		/* [in] */ VSQuerySaveFlags rgfQuerySave,
		/* [in] */ int cFiles,
		/* [size_is][in] */ __RPC__in_ecount_full(cFiles) const LPCOLESTR rgpszMkDocuments[],
		/* [size_is][in] */ __RPC__in_ecount_full(cFiles) const VSQEQSFlags rgrgf[],
		/* [size_is][in] */ __RPC__in_ecount_full(cFiles) const VSQEQS_FILE_ATTRIBUTE_DATA rgFileInfo[],
		/* [retval][out] */ __RPC__out VSQuerySaveResult* pdwQSResult);

	//virtual HRESULT STDMETHODCALLTYPE QuerySaveFile(
	//	/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
	//	/* [in] */ VSQEQSFlags rgf,
	//	/* [in] */ __RPC__in const VSQEQS_FILE_ATTRIBUTE_DATA* pFileInfo,
	//	/* [retval][out] */ __RPC__out VSQuerySaveResult* pdwQSResult);

	virtual HRESULT STDMETHODCALLTYPE DeclareReloadableFile(
		/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
		/* [in] */ VSQEQSFlags rgf,
		/* [in] */ __RPC__in const VSQEQS_FILE_ATTRIBUTE_DATA* pFileInfo);

	//virtual HRESULT STDMETHODCALLTYPE DeclareUnreloadableFile(
	//	/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
	//	/* [in] */ VSQEQSFlags rgf,
	//	/* [in] */ __RPC__in const VSQEQS_FILE_ATTRIBUTE_DATA* pFileInfo);

	//virtual HRESULT STDMETHODCALLTYPE OnAfterSaveUnreloadableFile(
	//	/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
	//	/* [in] */ VSQEQSFlags rgf,
	//	/* [in] */ __RPC__in const VSQEQS_FILE_ATTRIBUTE_DATA* pFileInfo);

	//virtual HRESULT STDMETHODCALLTYPE IsReloadable(
	//	/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
	//	/* [retval][out] */ __RPC__out BOOL* pbResult);

	//virtual HRESULT STDMETHODCALLTYPE BeginQuerySaveBatch(void);

	//virtual HRESULT STDMETHODCALLTYPE EndQuerySaveBatch(void);


	// ----------------------------------------------------------
	// IVsRunningDocumentTable Interface
	// ----------------------------------------------------------

	virtual HRESULT STDMETHODCALLTYPE RegisterAndLockDocument(
		/* [in] */ VSRDTFLAGS grfRDTLockType,
		/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
		/* [in] */ __RPC__in_opt IVsHierarchy* pHier,
		/* [in] */ VSITEMID itemid,
		/* [in] */ __RPC__in_opt IUnknown* punkDocData,
		/* [out] */ __RPC__out VSCOOKIE* pdwCookie);

	virtual HRESULT STDMETHODCALLTYPE LockDocument(
		/* [in] */ VSRDTFLAGS grfRDTLockType,
		/* [in] */ VSCOOKIE dwCookie);

	virtual HRESULT STDMETHODCALLTYPE UnlockDocument(
		/* [in] */ VSRDTFLAGS grfRDTLockType,
		/* [in] */ VSCOOKIE dwCookie);

	virtual HRESULT STDMETHODCALLTYPE FindAndLockDocument(
		/* [in] */ VSRDTFLAGS dwRDTLockType,
		/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
		/* [out] */ __RPC__deref_out_opt IVsHierarchy** ppHier,
		/* [out] */ __RPC__out VSITEMID* pitemid,
		/* [out] */ __RPC__deref_out_opt IUnknown** ppunkDocData,
		/* [out] */ __RPC__out VSCOOKIE* pdwCookie);

	virtual HRESULT STDMETHODCALLTYPE RenameDocument(
		/* [in] */ __RPC__in LPCOLESTR pszMkDocumentOld,
		/* [in] */ __RPC__in LPCOLESTR pszMkDocumentNew,
		/* [in] */ __RPC__in_opt IVsHierarchy* pHier,
		/* [in] */ VSITEMID itemidNew);

	virtual HRESULT STDMETHODCALLTYPE AdviseRunningDocTableEvents(
		/* [in] */ __RPC__in_opt IVsRunningDocTableEvents* pSink,
		/* [out] */ __RPC__out VSCOOKIE* pdwCookie);

	virtual HRESULT STDMETHODCALLTYPE UnadviseRunningDocTableEvents(
		/* [in] */ VSCOOKIE dwCookie);

	virtual HRESULT STDMETHODCALLTYPE GetDocumentInfo(
		/* [in] */ VSCOOKIE docCookie,
		/* [out] */ __RPC__out VSRDTFLAGS* pgrfRDTFlags,
		/* [out] */ __RPC__out DWORD* pdwReadLocks,
		/* [out] */ __RPC__out DWORD* pdwEditLocks,
		/* [out] */ __RPC__deref_out_opt BSTR* pbstrMkDocument,
		/* [out] */ __RPC__deref_out_opt IVsHierarchy** ppHier,
		/* [out] */ __RPC__out VSITEMID* pitemid,
		/* [out] */ __RPC__deref_out_opt IUnknown** ppunkDocData);

	virtual HRESULT STDMETHODCALLTYPE NotifyDocumentChanged(
		/* [in] */ VSCOOKIE dwCookie,
		/* [in] */ VSRDTATTRIB grfDocChanged);

	virtual HRESULT STDMETHODCALLTYPE NotifyOnAfterSave(
		/* [in] */ VSCOOKIE dwCookie);

	virtual HRESULT STDMETHODCALLTYPE GetRunningDocumentsEnum(
		/* [out] */ __RPC__deref_out_opt IEnumRunningDocuments** ppenum);

	virtual HRESULT STDMETHODCALLTYPE SaveDocuments(
		/* [in] */ VSRDTSAVEOPTIONS grfSaveOpts,
		/* [in] */ __RPC__in_opt IVsHierarchy* pHier,
		/* [in] */ VSITEMID itemid,
		/* [in] */ VSCOOKIE docCookie);

	virtual HRESULT STDMETHODCALLTYPE NotifyOnBeforeSave(
		/* [in] */ VSCOOKIE dwCookie);

	virtual HRESULT STDMETHODCALLTYPE RegisterDocumentLockHolder(
		/* [in] */ VSREGDOCLOCKHOLDER grfRDLH,
		/* [in] */ VSCOOKIE dwCookie,
		/* [in] */ __RPC__in_opt IVsDocumentLockHolder* pLockHolder,
		/* [out] */ __RPC__out VSCOOKIE* pdwLHCookie);

	virtual HRESULT STDMETHODCALLTYPE UnregisterDocumentLockHolder(
		VSCOOKIE dwLHCookie);

	virtual HRESULT STDMETHODCALLTYPE ModifyDocumentFlags(
		VSCOOKIE docCookie,
		VSRDTFLAGS grfFlags,
		BOOL fSet);

	// ----------------------------------------------------------
	// IVsUIShellOpenDocument Interface
	// ----------------------------------------------------------

	virtual HRESULT STDMETHODCALLTYPE IsDocumentOpen(
		/* [in] */ __RPC__in_opt IVsUIHierarchy* pHierCaller,
		/* [in] */ VSITEMID itemidCaller,
		/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
		/* [in] */ __RPC__in REFGUID rguidLogicalView,
		/* [in] */ VSIDOFLAGS grfIDO,
		/* [out] */ __RPC__deref_out_opt IVsUIHierarchy** ppHierOpen,
		/* [out] */ __RPC__out VSITEMID* pitemidOpen,
		/* [out] */ __RPC__deref_out_opt IVsWindowFrame** ppWindowFrame,
		/* [retval][out] */ __RPC__out BOOL* pfOpen);

	virtual HRESULT STDMETHODCALLTYPE IsDocumentInAProject(
		/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
		/* [out] */ __RPC__deref_out_opt IVsUIHierarchy** ppUIH,
		/* [out] */ __RPC__out VSITEMID* pitemid,
		/* [out] */ __RPC__deref_out_opt IServiceProvider** ppSP,
		/* [retval][out] */ __RPC__out VSDOCINPROJECT* pDocInProj);

	virtual HRESULT STDMETHODCALLTYPE OpenDocumentViaProject(
		/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
		/* [in] */ __RPC__in REFGUID rguidLogicalView,
		/* [out] */ __RPC__deref_out_opt IServiceProvider** ppSP,
		/* [out] */ __RPC__deref_out_opt IVsUIHierarchy** ppHier,
		/* [out] */ __RPC__out VSITEMID* pitemid,
		/* [retval][out] */ __RPC__deref_out_opt IVsWindowFrame** ppWindowFrame);

	virtual HRESULT STDMETHODCALLTYPE OpenStandardEditor(
		/* [in] */ VSOSEFLAGS grfOpenStandard,
		/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
		/* [in] */ __RPC__in REFGUID rguidLogicalView,
		/* [in] */ __RPC__in LPCOLESTR pszOwnerCaption,
		/* [in] */ __RPC__in_opt IVsUIHierarchy* pHier,
		/* [in] */ VSITEMID itemid,
		/* [in] */ __RPC__in_opt IUnknown* punkDocDataExisting,
		/* [in] */ __RPC__in_opt IServiceProvider* pSP,
		/* [retval][out] */ __RPC__deref_out_opt IVsWindowFrame** ppWindowFrame);

	virtual HRESULT STDMETHODCALLTYPE OpenStandardPreviewer(
		/* [in] */ VSOSPFLAGS ospOpenDocPreviewer,
		/* [in] */ __RPC__in LPCOLESTR pszURL,
		/* [in] */ VSPREVIEWRESOLUTION resolution,
		/* [in] */ DWORD dwReserved);

	virtual HRESULT STDMETHODCALLTYPE GetStandardEditorFactory(
		/* [in] */ DWORD dwReserved,
		/* [out][in] */ __RPC__inout GUID* pguidEditorType,
		/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
		/* [in] */ __RPC__in REFGUID rguidLogicalView,
		/* [out] */ __RPC__deref_out_opt BSTR* pbstrPhysicalView,
		/* [retval][out] */ __RPC__deref_out_opt IVsEditorFactory** ppEF);

	virtual HRESULT STDMETHODCALLTYPE MapLogicalView(
		/* [in] */ __RPC__in REFGUID rguidEditorType,
		/* [in] */ __RPC__in REFGUID rguidLogicalView,
		/* [retval][out] */ __RPC__deref_out_opt BSTR* pbstrPhysicalView);

	virtual HRESULT STDMETHODCALLTYPE OpenSpecificEditor(
		/* [in] */ VSOSPEFLAGS grfOpenSpecific,
		/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
		/* [in] */ __RPC__in REFGUID rguidEditorType,
		/* [in] */ __RPC__in LPCOLESTR pszPhysicalView,
		/* [in] */ __RPC__in REFGUID rguidLogicalView,
		/* [in] */ __RPC__in LPCOLESTR pszOwnerCaption,
		/* [in] */ __RPC__in_opt IVsUIHierarchy* pHier,
		/* [in] */ VSITEMID itemid,
		/* [in] */ __RPC__in_opt IUnknown* punkDocDataExisting,
		/* [in] */ __RPC__in_opt IServiceProvider* pSPHierContext,
		/* [retval][out] */ __RPC__deref_out_opt IVsWindowFrame** ppWindowFrame);

	virtual HRESULT STDMETHODCALLTYPE InitializeEditorInstance(
		/* [in] */ VSIEIFLAGS grfIEI,
		/* [in] */ __RPC__in_opt IUnknown* punkDocView,
		/* [in] */ __RPC__in_opt IUnknown* punkDocData,
		/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
		/* [in] */ __RPC__in REFGUID rguidEditorType,
		/* [in] */ __RPC__in LPCOLESTR pszPhysicalView,
		/* [in] */ __RPC__in REFGUID rguidLogicalView,
		/* [in] */ __RPC__in LPCOLESTR pszOwnerCaption,
		/* [in] */ __RPC__in LPCOLESTR pszEditorCaption,
		/* [in] */ __RPC__in_opt IVsUIHierarchy* pHier,
		/* [in] */ VSITEMID itemid,
		/* [in] */ __RPC__in_opt IUnknown* punkDocDataExisting,
		/* [in] */ __RPC__in_opt IServiceProvider* pSPHierContext,
		/* [in] */ __RPC__in REFGUID rguidCmdUI,
		/* [retval][out] */ __RPC__deref_out_opt IVsWindowFrame** ppWindowFrame);

	virtual HRESULT STDMETHODCALLTYPE IsSpecificDocumentViewOpen(
		/* [in] */ __RPC__in_opt IVsUIHierarchy* pHierCaller,
		/* [in] */ VSITEMID itemidCaller,
		/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
		/* [in] */ __RPC__in REFGUID rguidEditorType,
		/* [in] */ __RPC__in LPCOLESTR pszPhysicalView,
		/* [in] */ VSIDOFLAGS grfIDO,
		/* [out] */ __RPC__deref_out_opt IVsUIHierarchy** ppHierOpen,
		/* [out] */ __RPC__out VSITEMID* pitemidOpen,
		/* [out] */ __RPC__deref_out_opt IVsWindowFrame** ppWindowFrame,
		/* [retval][out] */ __RPC__out BOOL* pfOpen);

	virtual HRESULT STDMETHODCALLTYPE OpenDocumentViaProjectWithSpecific(
		/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
		/* [in] */ VSSPECIFICEDITORFLAGS grfEditorFlags,
		/* [in] */ __RPC__in REFGUID rguidEditorType,
		/* [in] */ __RPC__in LPCOLESTR pszPhysicalView,
		/* [in] */ __RPC__in REFGUID rguidLogicalView,
		/* [out] */ __RPC__deref_out_opt IServiceProvider** ppSP,
		/* [out] */ __RPC__deref_out_opt IVsUIHierarchy** ppHier,
		/* [out] */ __RPC__out VSITEMID* pitemid,
		/* [retval][out] */ __RPC__deref_out_opt IVsWindowFrame** ppWindowFrame);

	virtual HRESULT STDMETHODCALLTYPE OpenCopyOfStandardEditor(
		/* [in] */ __RPC__in_opt IVsWindowFrame* pWindowFrame,
		/* [in] */ __RPC__in REFGUID rguidLogicalView,
		/* [retval][out] */ __RPC__deref_out_opt IVsWindowFrame** ppNewWindowFrame);

	virtual HRESULT STDMETHODCALLTYPE GetFirstDefaultPreviewer(
		/* [out] */ __RPC__deref_out_opt BSTR* pbstrDefBrowserPath,
		/* [out] */ __RPC__out BOOL* pfIsInternalBrowser,
		/* [out] */ __RPC__out BOOL* pfIsSystemBrowser);

	virtual HRESULT STDMETHODCALLTYPE SearchProjectsForRelativePath(
		/* [in] */ VSRELPATHSEARCHFLAGS grfRPS,
		/* [in] */ __RPC__in LPCOLESTR pszRelPath,
		/* [retval][out] */ __RPC__deref_out_opt BSTR* pbstrAbsPath);

	virtual HRESULT STDMETHODCALLTYPE AddStandardPreviewer(
		/* [in] */ __RPC__in LPCOLESTR pszExePath,
		/* [in] */ __RPC__in LPCOLESTR pszDisplayName,
		/* [in] */ BOOL fUseDDE,
		/* [in] */ __RPC__in LPCOLESTR pszDDEService,
		/* [in] */ __RPC__in LPCOLESTR pszDDETopicOpenURL,
		/* [in] */ __RPC__in LPCOLESTR pszDDEItemOpenURL,
		/* [in] */ __RPC__in LPCOLESTR pszDDETopicActivate,
		/* [in] */ __RPC__in LPCOLESTR pszDDEItemActivate,
		/* [in] */ VSASPFLAGS aspAddPreviewerFlags);

	// ----------------------------------------------------------
	// IUIHostLocale Interface
	// ----------------------------------------------------------

	virtual HRESULT STDMETHODCALLTYPE GetUILocale(
		/* [retval][out] */ __RPC__out LCID* plcid);

	virtual HRESULT STDMETHODCALLTYPE GetDialogFont(
		/* [out] */ __RPC__out UIDLGLOGFONT* plogfont);

	// ----------------------------------------------------------
	// IUIHostLocale2 Interface
	// ----------------------------------------------------------

	virtual HRESULT STDMETHODCALLTYPE LoadUILibrary(
		/* [in] */ __RPC__in LPCOLESTR lpstrPath,
		/* [in] */ __RPC__in LPCOLESTR lpstrDllName,
		/* [in] */ DWORD dwExFlags,
		/* [retval][out] */ __RPC__out DWORD_PTR* phinstOut);

	virtual HRESULT STDMETHODCALLTYPE MungeDialogFont(
		/* [in] */ DWORD dwSize,
		/* [size_is][in] */ __RPC__in_ecount_full(dwSize) const BYTE* pDlgTemplate,
		/* [out] */ __RPC__deref_out_opt BYTE** ppDlgTemplateOut);

	virtual HRESULT STDMETHODCALLTYPE LoadDialog(
		/* [in] */ DWORD_PTR hMod,
		/* [in] */ DWORD dwDlgResId,
		/* [out] */ __RPC__deref_out_opt BYTE** ppDlgTemplate);

	virtual HRESULT STDMETHODCALLTYPE GetUILibraryFileName(
		/* [in] */ __RPC__in LPCOLESTR lpstrPath,
		/* [in] */ __RPC__in LPCOLESTR lpstrDllName,
		/* [retval][out] */ __RPC__deref_out_opt BSTR* pbstrOut);

	// ----------------------------------------------------------
	// IVsHierarchy Interface
	// ----------------------------------------------------------

	virtual HRESULT STDMETHODCALLTYPE SetSite(
		/* [in] */ __RPC__in_opt IServiceProvider* pSP);

	virtual HRESULT STDMETHODCALLTYPE GetSite(
		/* [out] */ __RPC__deref_out_opt IServiceProvider** ppSP);

	virtual HRESULT STDMETHODCALLTYPE QueryClose(
		/* [out] */ __RPC__out BOOL* pfCanClose);

	virtual HRESULT STDMETHODCALLTYPE Close(void);

	virtual HRESULT STDMETHODCALLTYPE GetGuidProperty(
		/* [in] */ VSITEMID itemid,
		/* [in] */ VSHPROPID propid,
		/* [out] */ __RPC__out GUID* pguid);

	virtual HRESULT STDMETHODCALLTYPE SetGuidProperty(
		/* [in] */ VSITEMID itemid,
		/* [in] */ VSHPROPID propid,
		/* [in] */ __RPC__in REFGUID rguid);

	virtual HRESULT STDMETHODCALLTYPE GetProperty(
		/* [in] */ VSITEMID itemid,
		/* [in] */ VSHPROPID propid,
		/* [out] */ __RPC__out VARIANT* pvar);

	virtual HRESULT STDMETHODCALLTYPE SetProperty(
		/* [in] */ VSITEMID itemid,
		/* [in] */ VSHPROPID propid,
		/* [in] */ VARIANT var);

	virtual HRESULT STDMETHODCALLTYPE GetNestedHierarchy(
		/* [in] */ VSITEMID itemid,
		/* [in] */ __RPC__in REFIID iidHierarchyNested,
		/* [iid_is][out] */ __RPC__deref_out_opt void** ppHierarchyNested,
		/* [out] */ __RPC__out VSITEMID* pitemidNested);

	virtual HRESULT STDMETHODCALLTYPE GetCanonicalName(
		/* [in] */ VSITEMID itemid,
		/* [out] */ __RPC__deref_out_opt BSTR* pbstrName);

	virtual HRESULT STDMETHODCALLTYPE ParseCanonicalName(
		/* [in] */ __RPC__in LPCOLESTR pszName,
		/* [out] */ __RPC__out VSITEMID* pitemid);

	virtual HRESULT STDMETHODCALLTYPE Unused0(void);

	virtual HRESULT STDMETHODCALLTYPE AdviseHierarchyEvents(
		/* [in] */ __RPC__in_opt IVsHierarchyEvents* pEventSink,
		/* [out] */ __RPC__out VSCOOKIE* pdwCookie);

	virtual HRESULT STDMETHODCALLTYPE UnadviseHierarchyEvents(
		/* [in] */ VSCOOKIE dwCookie);

	virtual HRESULT STDMETHODCALLTYPE Unused1(void);

	virtual HRESULT STDMETHODCALLTYPE Unused2(void);

	virtual HRESULT STDMETHODCALLTYPE Unused3(void);

	virtual HRESULT STDMETHODCALLTYPE Unused4(void);

	// ----------------------------------------------------------
	// IVsUIHierarchy Interface
	// ----------------------------------------------------------

	virtual HRESULT STDMETHODCALLTYPE QueryStatusCommand(
		/* [in] */ VSITEMID itemid,
		/* [unique][in] */ __RPC__in_opt const GUID* pguidCmdGroup,
		/* [in] */ ULONG cCmds,
		/* [size_is][out][in] */ __RPC__inout_ecount_full(cCmds) OLECMD prgCmds[],
		/* [unique][out][in] */ __RPC__inout_opt OLECMDTEXT* pCmdText);

	virtual HRESULT STDMETHODCALLTYPE ExecCommand(
		/* [in] */ VSITEMID itemid,
		/* [unique][in] */ __RPC__in_opt const GUID* pguidCmdGroup,
		/* [in] */ DWORD nCmdID,
		/* [in] */ DWORD nCmdexecopt,
		/* [unique][in] */ __RPC__in_opt VARIANT* pvaIn,
		/* [unique][out][in] */ __RPC__inout_opt VARIANT* pvaOut);

	// ----------------------------------------------------------
	// IVsProject Interface
	// ----------------------------------------------------------

	virtual HRESULT STDMETHODCALLTYPE IsDocumentInProject(
		/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
		/* [out] */ __RPC__out BOOL* pfFound,
		/* [out] */ __RPC__out VSDOCUMENTPRIORITY* pdwPriority,
		/* [out] */ __RPC__out VSITEMID* pitemid);

	virtual HRESULT STDMETHODCALLTYPE GetMkDocument(
		/* [in] */ VSITEMID itemid,
		/* [out] */ __RPC__deref_out_opt BSTR* pbstrMkDocument);

	virtual HRESULT STDMETHODCALLTYPE OpenItem(
		/* [in] */ VSITEMID itemid,
		/* [in] */ __RPC__in REFGUID rguidLogicalView,
		/* [in] */ __RPC__in_opt IUnknown* punkDocDataExisting,
		/* [out] */ __RPC__deref_out_opt IVsWindowFrame** ppWindowFrame);

	virtual HRESULT STDMETHODCALLTYPE GetItemContext(
		/* [in] */ VSITEMID itemid,
		/* [out] */ __RPC__deref_out_opt IServiceProvider** ppSP);

	virtual HRESULT STDMETHODCALLTYPE GenerateUniqueItemName(
		/* [in] */ VSITEMID itemidLoc,
		/* [in] */ __RPC__in LPCOLESTR pszExt,
		/* [in] */ __RPC__in LPCOLESTR pszSuggestedRoot,
		/* [out] */ __RPC__deref_out_opt BSTR* pbstrItemName);

	virtual HRESULT STDMETHODCALLTYPE AddItem(
		/* [in] */ VSITEMID itemidLoc,
		/* [in] */ VSADDITEMOPERATION dwAddItemOperation,
		/* [in] */ __RPC__in LPCOLESTR pszItemName,
		/* [in] */ ULONG cFilesToOpen,
		/* [size_is][in] */ __RPC__in_ecount_full(cFilesToOpen) LPCOLESTR rgpszFilesToOpen[],
		/* [in] */ __RPC__in HWND hwndDlgOwner,
		/* [retval][out] */ __RPC__out VSADDRESULT* pResult);

	// ----------------------------------------------------------
	// IVsProject Interface
	// ----------------------------------------------------------

	virtual HRESULT STDMETHODCALLTYPE RegisterEditor(
		/* [in] */ __RPC__in REFGUID rguidEditor,
		/* [in] */ __RPC__in_opt IVsEditorFactory* pVsPF,
		/* [out] */ __RPC__out VSCOOKIE* pdwCookie);

	virtual HRESULT STDMETHODCALLTYPE UnregisterEditor(
		/* [in] */ VSCOOKIE dwCookie);

};

HRESULT STDMETHODCALLTYPE UberServiceProvider::QueryInterface(
	/* [in] */ REFIID riid,
	/* [iid_is][out] */ _COM_Outptr_ void __RPC_FAR* __RPC_FAR* ppvObject)
{
#define HANDLE_INTERFACE(Type) \
	if (riid == __uuidof(Type)) \
	{ \
		Type* pType = dynamic_cast<Type*>(this); \
		assert(pType); \
		pType->AddRef(); \
		*ppvObject = pType; \
		return S_OK; \
	}
#define IGNORE_INTERFACE(_riid) \
	if (riid == _riid) \
	{ \
		return E_NOTIMPL; \
	}

	HANDLE_INTERFACE(IServiceProvider);
	HANDLE_INTERFACE(SVsQueryEditQuerySave);
	HANDLE_INTERFACE(IVsQueryEditQuerySave);
	HANDLE_INTERFACE(IVsQueryEditQuerySave2);
	HANDLE_INTERFACE(IVsRunningDocumentTable);
	HANDLE_INTERFACE(IVsUIShellOpenDocument);
	HANDLE_INTERFACE(IUIHostLocale);
	HANDLE_INTERFACE(IUIHostLocale2);
	HANDLE_INTERFACE(IVsHierarchy);
	HANDLE_INTERFACE(IVsUIHierarchy);
	HANDLE_INTERFACE(IVsProject);
	HANDLE_INTERFACE(IVsRegisterEditors);

	IGNORE_INTERFACE(__uuidof(IVsFileChange));
	IGNORE_INTERFACE(__uuidof(IVsStatusbar));
	IGNORE_INTERFACE(__uuidof(IVsTshell));
	IGNORE_INTERFACE(__uuidof(IProfferService));
	IGNORE_INTERFACE(__uuidof(IVsShell));
	IGNORE_INTERFACE(__uuidof(IVsUIShell));
	IGNORE_INTERFACE(__uuidof(ILocalRegistry4));

	IGNORE_INTERFACE(SID_SMsoComponentManager);
	IGNORE_INTERFACE(IID_IMsoComponentManager);
	IGNORE_INTERFACE(CLSID_IClassDesigner);

#undef HANDLE_INTERFACE
#undef IGNORE_INTERFACE

	auto result = pParentServiceProvider->QueryInterface(riid, ppvObject);
	if (!SUCCEEDED(result))
	{
		result = pParentServiceProvider->QueryService(riid, riid, ppvObject);
	}
	assert(SUCCEEDED(result));
	return result;
}

ULONG STDMETHODCALLTYPE UberServiceProvider::AddRef(void)
{
	return 1;
}

ULONG STDMETHODCALLTYPE UberServiceProvider::Release(void)
{
	return 1;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::QueryService(
	/* [in] */ _In_ REFGUID guidService,
	/* [in] */ _In_ REFIID riid,
	/* [out] */ _Outptr_ void __RPC_FAR* __RPC_FAR* ppvObject)
{
	return QueryInterface(riid, ppvObject);
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::BeginQuerySaveBatch(void)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::EndQuerySaveBatch(void)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::QueryEditFiles(
	/* [in] */ VSQueryEditFlags rgfQueryEdit,
	/* [in] */ int cFiles,
	/* [size_is][in] */ __RPC__in_ecount_full(cFiles) const LPCOLESTR rgpszMkDocuments[],
	/* [size_is][in] */ __RPC__in_ecount_full(cFiles) const VSQEQSFlags rgrgf[],
	/* [size_is][in] */ __RPC__in_ecount_full(cFiles) const VSQEQS_FILE_ATTRIBUTE_DATA rgFileInfo[],
	/* [out] */ __RPC__out VSQueryEditResult* pfEditVerdict,
	/* [out] */ __RPC__out VSQueryEditResultFlags* prgfMoreInfo)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::DeclareUnreloadableFile(
	/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
	/* [in] */ VSQEQSFlags rgf,
	/* [in] */ __RPC__in const VSQEQS_FILE_ATTRIBUTE_DATA* pFileInfo)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::OnAfterSaveUnreloadableFile(
	/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
	/* [in] */ VSQEQSFlags rgf,
	/* [in] */ __RPC__in const VSQEQS_FILE_ATTRIBUTE_DATA* pFileInfo)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::QuerySaveFile(
	/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
	/* [in] */ VSQEQSFlags rgf,
	/* [in] */ __RPC__in const VSQEQS_FILE_ATTRIBUTE_DATA* pFileInfo,
	/* [retval][out] */ __RPC__out VSQuerySaveResult* pdwQSResult)
{
	if (pdwQSResult)
		*pdwQSResult = QSR_SaveOK;
	return S_OK;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::IsReloadable(
	/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
	/* [retval][out] */ __RPC__out BOOL* pbResult)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::QuerySaveFiles(
	/* [in] */ VSQuerySaveFlags rgfQuerySave,
	/* [in] */ int cFiles,
	/* [size_is][in] */ __RPC__in_ecount_full(cFiles) const LPCOLESTR rgpszMkDocuments[],
	/* [size_is][in] */ __RPC__in_ecount_full(cFiles) const VSQEQSFlags rgrgf[],
	/* [size_is][in] */ __RPC__in_ecount_full(cFiles) const VSQEQS_FILE_ATTRIBUTE_DATA rgFileInfo[],
	/* [retval][out] */ __RPC__out VSQuerySaveResult* pdwQSResult)
{
	*pdwQSResult = QSR_SaveOK;
	return S_OK;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::DeclareReloadableFile(
	/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
	/* [in] */ VSQEQSFlags rgf,
	/* [in] */ __RPC__in const VSQEQS_FILE_ATTRIBUTE_DATA* pFileInfo)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::RegisterAndLockDocument(
	/* [in] */ VSRDTFLAGS grfRDTLockType,
	/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
	/* [in] */ __RPC__in_opt IVsHierarchy* pHier,
	/* [in] */ VSITEMID itemid,
	/* [in] */ __RPC__in_opt IUnknown* punkDocData,
	/* [out] */ __RPC__out VSCOOKIE* pdwCookie)
{
	if (pdwCookie)
		*pdwCookie = 1;
	return S_OK;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::LockDocument(
	/* [in] */ VSRDTFLAGS grfRDTLockType,
	/* [in] */ VSCOOKIE dwCookie)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::UnlockDocument(
	/* [in] */ VSRDTFLAGS grfRDTLockType,
	/* [in] */ VSCOOKIE dwCookie)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::FindAndLockDocument(
	/* [in] */ VSRDTFLAGS dwRDTLockType,
	/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
	/* [out] */ __RPC__deref_out_opt IVsHierarchy** ppHier,
	/* [out] */ __RPC__out VSITEMID* pitemid,
	/* [out] */ __RPC__deref_out_opt IUnknown** ppunkDocData,
	/* [out] */ __RPC__out VSCOOKIE* pdwCookie)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::RenameDocument(
	/* [in] */ __RPC__in LPCOLESTR pszMkDocumentOld,
	/* [in] */ __RPC__in LPCOLESTR pszMkDocumentNew,
	/* [in] */ __RPC__in_opt IVsHierarchy* pHier,
	/* [in] */ VSITEMID itemidNew)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::AdviseRunningDocTableEvents(
	/* [in] */ __RPC__in_opt IVsRunningDocTableEvents* pSink,
	/* [out] */ __RPC__out VSCOOKIE* pdwCookie)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::UnadviseRunningDocTableEvents(
	/* [in] */ VSCOOKIE dwCookie)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::GetDocumentInfo(
	/* [in] */ VSCOOKIE docCookie,
	/* [out] */ __RPC__out VSRDTFLAGS* pgrfRDTFlags,
	/* [out] */ __RPC__out DWORD* pdwReadLocks,
	/* [out] */ __RPC__out DWORD* pdwEditLocks,
	/* [out] */ __RPC__deref_out_opt BSTR* pbstrMkDocument,
	/* [out] */ __RPC__deref_out_opt IVsHierarchy** ppHier,
	/* [out] */ __RPC__out VSITEMID* pitemid,
	/* [out] */ __RPC__deref_out_opt IUnknown** ppunkDocData)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::NotifyDocumentChanged(
	/* [in] */ VSCOOKIE dwCookie,
	/* [in] */ VSRDTATTRIB grfDocChanged)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::NotifyOnAfterSave(
	/* [in] */ VSCOOKIE dwCookie)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::GetRunningDocumentsEnum(
	/* [out] */ __RPC__deref_out_opt IEnumRunningDocuments** ppenum)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::SaveDocuments(
	/* [in] */ VSRDTSAVEOPTIONS grfSaveOpts,
	/* [in] */ __RPC__in_opt IVsHierarchy* pHier,
	/* [in] */ VSITEMID itemid,
	/* [in] */ VSCOOKIE docCookie)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::NotifyOnBeforeSave(
	/* [in] */ VSCOOKIE dwCookie)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::RegisterDocumentLockHolder(
	/* [in] */ VSREGDOCLOCKHOLDER grfRDLH,
	/* [in] */ VSCOOKIE dwCookie,
	/* [in] */ __RPC__in_opt IVsDocumentLockHolder* pLockHolder,
	/* [out] */ __RPC__out VSCOOKIE* pdwLHCookie)
{
	if (pdwLHCookie)
		*pdwLHCookie = 2;
	return S_OK;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::UnregisterDocumentLockHolder(
	VSCOOKIE dwLHCookie)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::ModifyDocumentFlags(
	VSCOOKIE docCookie,
	VSRDTFLAGS grfFlags,
	BOOL fSet)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::IsDocumentOpen(
	/* [in] */ __RPC__in_opt IVsUIHierarchy* pHierCaller,
	/* [in] */ VSITEMID itemidCaller,
	/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
	/* [in] */ __RPC__in REFGUID rguidLogicalView,
	/* [in] */ VSIDOFLAGS grfIDO,
	/* [out] */ __RPC__deref_out_opt IVsUIHierarchy** ppHierOpen,
	/* [out] */ __RPC__out VSITEMID* pitemidOpen,
	/* [out] */ __RPC__deref_out_opt IVsWindowFrame** ppWindowFrame,
	/* [retval][out] */ __RPC__out BOOL* pfOpen)
{
	if (ppHierOpen)
		*ppHierOpen = nullptr;
	if (pitemidOpen)
		*pitemidOpen;
	if (ppWindowFrame)
		*ppWindowFrame = nullptr;
	*pfOpen = FALSE;
	return S_OK;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::IsDocumentInAProject(
	/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
	/* [out] */ __RPC__deref_out_opt IVsUIHierarchy** ppUIH,
	/* [out] */ __RPC__out VSITEMID* pitemid,
	/* [out] */ __RPC__deref_out_opt IServiceProvider** ppSP,
	/* [retval][out] */ __RPC__out VSDOCINPROJECT* pDocInProj)
{
	if (ppUIH)
		this->AddRef();
		*ppUIH = dynamic_cast<IVsUIHierarchy*>(this);
		assert(*ppUIH);
	if (pitemid)
		*pitemid;
	if (ppSP)
		this->AddRef();
		*ppSP = dynamic_cast<IServiceProvider*>(this);
		assert(*ppSP);
	if (pDocInProj)
		*pDocInProj = DOCINPROJ_DocInProject;
	return S_OK;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::OpenDocumentViaProject(
	/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
	/* [in] */ __RPC__in REFGUID rguidLogicalView,
	/* [out] */ __RPC__deref_out_opt IServiceProvider** ppSP,
	/* [out] */ __RPC__deref_out_opt IVsUIHierarchy** ppHier,
	/* [out] */ __RPC__out VSITEMID* pitemid,
	/* [retval][out] */ __RPC__deref_out_opt IVsWindowFrame** ppWindowFrame)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::OpenStandardEditor(
	/* [in] */ VSOSEFLAGS grfOpenStandard,
	/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
	/* [in] */ __RPC__in REFGUID rguidLogicalView,
	/* [in] */ __RPC__in LPCOLESTR pszOwnerCaption,
	/* [in] */ __RPC__in_opt IVsUIHierarchy* pHier,
	/* [in] */ VSITEMID itemid,
	/* [in] */ __RPC__in_opt IUnknown* punkDocDataExisting,
	/* [in] */ __RPC__in_opt IServiceProvider* pSP,
	/* [retval][out] */ __RPC__deref_out_opt IVsWindowFrame** ppWindowFrame)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::OpenStandardPreviewer(
	/* [in] */ VSOSPFLAGS ospOpenDocPreviewer,
	/* [in] */ __RPC__in LPCOLESTR pszURL,
	/* [in] */ VSPREVIEWRESOLUTION resolution,
	/* [in] */ DWORD dwReserved)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::GetStandardEditorFactory(
	/* [in] */ DWORD dwReserved,
	/* [out][in] */ __RPC__inout GUID* pguidEditorType,
	/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
	/* [in] */ __RPC__in REFGUID rguidLogicalView,
	/* [out] */ __RPC__deref_out_opt BSTR* pbstrPhysicalView,
	/* [retval][out] */ __RPC__deref_out_opt IVsEditorFactory** ppEF)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::MapLogicalView(
	/* [in] */ __RPC__in REFGUID rguidEditorType,
	/* [in] */ __RPC__in REFGUID rguidLogicalView,
	/* [retval][out] */ __RPC__deref_out_opt BSTR* pbstrPhysicalView)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::OpenSpecificEditor(
	/* [in] */ VSOSPEFLAGS grfOpenSpecific,
	/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
	/* [in] */ __RPC__in REFGUID rguidEditorType,
	/* [in] */ __RPC__in LPCOLESTR pszPhysicalView,
	/* [in] */ __RPC__in REFGUID rguidLogicalView,
	/* [in] */ __RPC__in LPCOLESTR pszOwnerCaption,
	/* [in] */ __RPC__in_opt IVsUIHierarchy* pHier,
	/* [in] */ VSITEMID itemid,
	/* [in] */ __RPC__in_opt IUnknown* punkDocDataExisting,
	/* [in] */ __RPC__in_opt IServiceProvider* pSPHierContext,
	/* [retval][out] */ __RPC__deref_out_opt IVsWindowFrame** ppWindowFrame)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::InitializeEditorInstance(
	/* [in] */ VSIEIFLAGS grfIEI,
	/* [in] */ __RPC__in_opt IUnknown* punkDocView,
	/* [in] */ __RPC__in_opt IUnknown* punkDocData,
	/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
	/* [in] */ __RPC__in REFGUID rguidEditorType,
	/* [in] */ __RPC__in LPCOLESTR pszPhysicalView,
	/* [in] */ __RPC__in REFGUID rguidLogicalView,
	/* [in] */ __RPC__in LPCOLESTR pszOwnerCaption,
	/* [in] */ __RPC__in LPCOLESTR pszEditorCaption,
	/* [in] */ __RPC__in_opt IVsUIHierarchy* pHier,
	/* [in] */ VSITEMID itemid,
	/* [in] */ __RPC__in_opt IUnknown* punkDocDataExisting,
	/* [in] */ __RPC__in_opt IServiceProvider* pSPHierContext,
	/* [in] */ __RPC__in REFGUID rguidCmdUI,
	/* [retval][out] */ __RPC__deref_out_opt IVsWindowFrame** ppWindowFrame)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::IsSpecificDocumentViewOpen(
	/* [in] */ __RPC__in_opt IVsUIHierarchy* pHierCaller,
	/* [in] */ VSITEMID itemidCaller,
	/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
	/* [in] */ __RPC__in REFGUID rguidEditorType,
	/* [in] */ __RPC__in LPCOLESTR pszPhysicalView,
	/* [in] */ VSIDOFLAGS grfIDO,
	/* [out] */ __RPC__deref_out_opt IVsUIHierarchy** ppHierOpen,
	/* [out] */ __RPC__out VSITEMID* pitemidOpen,
	/* [out] */ __RPC__deref_out_opt IVsWindowFrame** ppWindowFrame,
	/* [retval][out] */ __RPC__out BOOL* pfOpen)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::OpenDocumentViaProjectWithSpecific(
	/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
	/* [in] */ VSSPECIFICEDITORFLAGS grfEditorFlags,
	/* [in] */ __RPC__in REFGUID rguidEditorType,
	/* [in] */ __RPC__in LPCOLESTR pszPhysicalView,
	/* [in] */ __RPC__in REFGUID rguidLogicalView,
	/* [out] */ __RPC__deref_out_opt IServiceProvider** ppSP,
	/* [out] */ __RPC__deref_out_opt IVsUIHierarchy** ppHier,
	/* [out] */ __RPC__out VSITEMID* pitemid,
	/* [retval][out] */ __RPC__deref_out_opt IVsWindowFrame** ppWindowFrame)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::OpenCopyOfStandardEditor(
	/* [in] */ __RPC__in_opt IVsWindowFrame* pWindowFrame,
	/* [in] */ __RPC__in REFGUID rguidLogicalView,
	/* [retval][out] */ __RPC__deref_out_opt IVsWindowFrame** ppNewWindowFrame)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::GetFirstDefaultPreviewer(
	/* [out] */ __RPC__deref_out_opt BSTR* pbstrDefBrowserPath,
	/* [out] */ __RPC__out BOOL* pfIsInternalBrowser,
	/* [out] */ __RPC__out BOOL* pfIsSystemBrowser)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::SearchProjectsForRelativePath(
	/* [in] */ VSRELPATHSEARCHFLAGS grfRPS,
	/* [in] */ __RPC__in LPCOLESTR pszRelPath,
	/* [retval][out] */ __RPC__deref_out_opt BSTR* pbstrAbsPath)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::AddStandardPreviewer(
	/* [in] */ __RPC__in LPCOLESTR pszExePath,
	/* [in] */ __RPC__in LPCOLESTR pszDisplayName,
	/* [in] */ BOOL fUseDDE,
	/* [in] */ __RPC__in LPCOLESTR pszDDEService,
	/* [in] */ __RPC__in LPCOLESTR pszDDETopicOpenURL,
	/* [in] */ __RPC__in LPCOLESTR pszDDEItemOpenURL,
	/* [in] */ __RPC__in LPCOLESTR pszDDETopicActivate,
	/* [in] */ __RPC__in LPCOLESTR pszDDEItemActivate,
	/* [in] */ VSASPFLAGS aspAddPreviewerFlags)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::GetUILocale(
	/* [retval][out] */ __RPC__out LCID* plcid)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::GetDialogFont(
	/* [out] */ __RPC__out UIDLGLOGFONT* plogfont)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::LoadUILibrary(
	/* [in] */ __RPC__in LPCOLESTR lpstrPath,
	/* [in] */ __RPC__in LPCOLESTR lpstrDllName,
	/* [in] */ DWORD dwExFlags,
	/* [retval][out] */ __RPC__out DWORD_PTR* phinstOut)
{
	if (hUIResourcesModule != NULL) {
		return E_FAIL;
	}

	LPCOLESTR localePath = L"\\1033\\";

	// Calculate the required buffer size
	size_t pathLen = wcslen(lpstrPath);
	size_t localeLen = wcslen(localePath);
	size_t dllNameLen = wcslen(lpstrDllName);
	size_t fullPathSize = (pathLen + localeLen + dllNameLen + 1) * sizeof(WCHAR);

	// Allocate memory for the full path
	WCHAR* fullPath = (WCHAR*)malloc(fullPathSize);
	if (fullPath == NULL) {
		return E_OUTOFMEMORY;
	}

	// Construct the full path
	wcscpy_s(fullPath, fullPathSize / sizeof(WCHAR), lpstrPath);
	wcscat_s(fullPath, fullPathSize / sizeof(WCHAR), localePath);
	wcscat_s(fullPath, fullPathSize / sizeof(WCHAR), lpstrDllName);

	// Load the library
	hUIResourcesModule = LoadLibraryW(fullPath);
	free(fullPath); // Free allocated memory for the path

	if (hUIResourcesModule == NULL) {
		return HRESULT_FROM_WIN32(GetLastError());
	}

	// Assign the loaded library handle to the output parameter
	*phinstOut = reinterpret_cast<DWORD_PTR>(hUIResourcesModule);
	return S_OK;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::MungeDialogFont(
	/* [in] */ DWORD dwSize,
	/* [size_is][in] */ __RPC__in_ecount_full(dwSize) const BYTE* pDlgTemplate,
	/* [out] */ __RPC__deref_out_opt BYTE** ppDlgTemplateOut)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::LoadDialog(
	/* [in] */ DWORD_PTR hMod,
	/* [in] */ DWORD dwDlgResId,
	/* [out] */ __RPC__deref_out_opt BYTE** ppDlgTemplate)
{
	HINSTANCE hInstance = reinterpret_cast<HINSTANCE>(hMod);

	// Load the dialog template resource
	HRSRC hResInfo = FindResource(hInstance, MAKEINTRESOURCE(dwDlgResId), RT_DIALOG);
	if (hResInfo == nullptr) {
		return HRESULT_FROM_WIN32(GetLastError());
	}

	HGLOBAL hResData = LoadResource(hInstance, hResInfo);
	if (hResData == nullptr) {
		return HRESULT_FROM_WIN32(GetLastError());
	}

	// Get the size of the resource data
	DWORD dwSize = SizeofResource(hInstance, hResInfo);
	if (dwSize == 0) {
		return HRESULT_FROM_WIN32(GetLastError());
	}

	// Allocate memory using CoTaskMemAlloc
	BYTE* pMemory = static_cast<BYTE*>(CoTaskMemAlloc(dwSize));
	if (pMemory == nullptr) {
		return E_OUTOFMEMORY;
	}

	// Copy the resource data to the allocated memory
	LPVOID pResourceData = LockResource(hResData);
	if (pResourceData == nullptr) {
		CoTaskMemFree(pMemory); // Clean up allocated memory on failure
		return HRESULT_FROM_WIN32(GetLastError());
	}

	memcpy(pMemory, pResourceData, dwSize);

	// Set ppDlgTemplate to point to the allocated memory
	*ppDlgTemplate = pMemory;

	return S_OK;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::GetUILibraryFileName(
	/* [in] */ __RPC__in LPCOLESTR lpstrPath,
	/* [in] */ __RPC__in LPCOLESTR lpstrDllName,
	/* [retval][out] */ __RPC__deref_out_opt BSTR* pbstrOut)
{
	__debugbreak();
	return E_NOTIMPL;
}

// ----------------------------------------------------------
// IVsHierarchy Interface
// ----------------------------------------------------------

HRESULT STDMETHODCALLTYPE UberServiceProvider::SetSite(
	/* [in] */ __RPC__in_opt IServiceProvider* pSP)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::GetSite(
	/* [out] */ __RPC__deref_out_opt IServiceProvider** ppSP)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::QueryClose(
	/* [out] */ __RPC__out BOOL* pfCanClose)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::Close(void)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::GetGuidProperty(
	/* [in] */ VSITEMID itemid,
	/* [in] */ VSHPROPID propid,
	/* [out] */ __RPC__out GUID* pguid)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::SetGuidProperty(
	/* [in] */ VSITEMID itemid,
	/* [in] */ VSHPROPID propid,
	/* [in] */ __RPC__in REFGUID rguid)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::GetProperty(
	/* [in] */ VSITEMID itemid,
	/* [in] */ VSHPROPID propid,
	/* [out] */ __RPC__out VARIANT* pvar)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::SetProperty(
	/* [in] */ VSITEMID itemid,
	/* [in] */ VSHPROPID propid,
	/* [in] */ VARIANT var)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::GetNestedHierarchy(
	/* [in] */ VSITEMID itemid,
	/* [in] */ __RPC__in REFIID iidHierarchyNested,
	/* [iid_is][out] */ __RPC__deref_out_opt void** ppHierarchyNested,
	/* [out] */ __RPC__out VSITEMID* pitemidNested)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::GetCanonicalName(
	/* [in] */ VSITEMID itemid,
	/* [out] */ __RPC__deref_out_opt BSTR* pbstrName)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::ParseCanonicalName(
	/* [in] */ __RPC__in LPCOLESTR pszName,
	/* [out] */ __RPC__out VSITEMID* pitemid)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::Unused0(void)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::AdviseHierarchyEvents(
	/* [in] */ __RPC__in_opt IVsHierarchyEvents* pEventSink,
	/* [out] */ __RPC__out VSCOOKIE* pdwCookie)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::UnadviseHierarchyEvents(
	/* [in] */ VSCOOKIE dwCookie)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::Unused1(void)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::Unused2(void)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::Unused3(void)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::Unused4(void)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::QueryStatusCommand(
	/* [in] */ VSITEMID itemid,
	/* [unique][in] */ __RPC__in_opt const GUID* pguidCmdGroup,
	/* [in] */ ULONG cCmds,
	/* [size_is][out][in] */ __RPC__inout_ecount_full(cCmds) OLECMD prgCmds[],
	/* [unique][out][in] */ __RPC__inout_opt OLECMDTEXT* pCmdText)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::ExecCommand(
	/* [in] */ VSITEMID itemid,
	/* [unique][in] */ __RPC__in_opt const GUID* pguidCmdGroup,
	/* [in] */ DWORD nCmdID,
	/* [in] */ DWORD nCmdexecopt,
	/* [unique][in] */ __RPC__in_opt VARIANT* pvaIn,
	/* [unique][out][in] */ __RPC__inout_opt VARIANT* pvaOut)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::IsDocumentInProject(
	/* [in] */ __RPC__in LPCOLESTR pszMkDocument,
	/* [out] */ __RPC__out BOOL* pfFound,
	/* [out] */ __RPC__out VSDOCUMENTPRIORITY* pdwPriority,
	/* [out] */ __RPC__out VSITEMID* pitemid)
{
	if (pfFound)
		*pfFound = TRUE;
	if(pdwPriority)
		*pdwPriority = DP_Standard;
	if (pitemid)
		*pitemid = 1;
	return S_OK;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::GetMkDocument(
	/* [in] */ VSITEMID itemid,
	/* [out] */ __RPC__deref_out_opt BSTR* pbstrMkDocument)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::OpenItem(
	/* [in] */ VSITEMID itemid,
	/* [in] */ __RPC__in REFGUID rguidLogicalView,
	/* [in] */ __RPC__in_opt IUnknown* punkDocDataExisting,
	/* [out] */ __RPC__deref_out_opt IVsWindowFrame** ppWindowFrame)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::GetItemContext(
	/* [in] */ VSITEMID itemid,
	/* [out] */ __RPC__deref_out_opt IServiceProvider** ppSP)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::GenerateUniqueItemName(
	/* [in] */ VSITEMID itemidLoc,
	/* [in] */ __RPC__in LPCOLESTR pszExt,
	/* [in] */ __RPC__in LPCOLESTR pszSuggestedRoot,
	/* [out] */ __RPC__deref_out_opt BSTR* pbstrItemName)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::AddItem(
	/* [in] */ VSITEMID itemidLoc,
	/* [in] */ VSADDITEMOPERATION dwAddItemOperation,
	/* [in] */ __RPC__in LPCOLESTR pszItemName,
	/* [in] */ ULONG cFilesToOpen,
	/* [size_is][in] */ __RPC__in_ecount_full(cFilesToOpen) LPCOLESTR rgpszFilesToOpen[],
	/* [in] */ __RPC__in HWND hwndDlgOwner,
	/* [retval][out] */ __RPC__out VSADDRESULT* pResult)
{
	__debugbreak();
	return E_NOTIMPL;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::RegisterEditor(
	/* [in] */ __RPC__in REFGUID rguidEditor,
	/* [in] */ __RPC__in_opt IVsEditorFactory* pVsPF,
	/* [out] */ __RPC__out VSCOOKIE* pdwCookie)
{
	if (rguidEditor == GUID_ResEdit)
	{
		pResEdit = pVsPF;
	}
	pdwCookie;
	return S_OK;
}

HRESULT STDMETHODCALLTYPE UberServiceProvider::UnregisterEditor(
	/* [in] */ VSCOOKIE dwCookie)
{
	return S_OK;
}

int wmain(int argc, wchar_t* argv[])
{
	// Check if at least two arguments are passed (input and output resource file).
	// argv[0] is the executable path so we expect: 
	//   myprog.exe <InputResource> <OutputResource>
	if (argc < 3)
	{
		wprintf(L"Usage: <InputResource> <OutputResource> [<Resedit.dll>]\n");
		wprintf(L"Example: input.exe output.rc\n");
		return 1;
	}

	// Derive the path to resedit.dll from the executable's directory.
	// 1. Copy the executable path.
	wchar_t szExePath[MAX_PATH];
	wcscpy_s(szExePath, MAX_PATH, argv[0]);

	// 2. Remove the executable file name to get the directory.
	if (!PathRemoveFileSpecW(szExePath))
	{
		wprintf(L"Error: Failed to retrieve the executable directory.\n");
		return 1;
	}

	// 3. Append "resedit.dll" to the directory path.
	wchar_t szResEditFilePathBuffer[MAX_PATH];
	wcscpy_s(szResEditFilePathBuffer, MAX_PATH, szExePath);
	if (!PathAppendW(szResEditFilePathBuffer, L"resedit.dll"))
	{
		wprintf(L"Error: Failed to construct the resedit.dll path.\n");
		return 1;
	}

	// Now we have the correct path to resedit.dll.
	const wchar_t* szResEditFilePath = szResEditFilePathBuffer;
	if (argc > 3)
		szResEditFilePath = argv[3];
	const wchar_t* szInputResourceFilePath = argv[1];
	const wchar_t* szOutputResourceFilePath = argv[2];

	// For demonstration purposes, print the determined paths.
	wprintf(L"Using resedit.dll from: %s\n", szResEditFilePath);
	wprintf(L"Input Resource: %s\n", szInputResourceFilePath);
	wprintf(L"Output Resource: %s\n", szOutputResourceFilePath);

	// Initialize COM
	HRESULT hr = CoInitializeEx(0, COINIT_MULTITHREADED);
	if (FAILED(hr))
	{
		fprintf(stderr, "COM initialization failed: %lx\n", hr);
		return 1;
	}

	HMODULE hModule = LoadLibraryW(szResEditFilePath);
	if (hModule == NULL)
	{
		DWORD lastError = GetLastError();
		fprintf(stderr, "Failed to load DLL: %d\n", lastError);
		return 1;
	}

	typedef HRESULT(WINAPI* LPFN_DllGetClassObject)(REFCLSID, REFIID, void**);
	LPFN_DllGetClassObject pfnDllGetClassObject = reinterpret_cast<LPFN_DllGetClassObject>(GetProcAddress(hModule, "DllGetClassObject"));

	IClassFactory* pClassFactory = nullptr;
	hr = pfnDllGetClassObject(__uuidof(ResEditPKGLib::VsResEditPackage), IID_PPV_ARGS(&pClassFactory));
	assert(SUCCEEDED(hr));

	IServiceProvider* pServiceProvider = nullptr;
	hr = pClassFactory->CreateInstance(NULL, IID_PPV_ARGS(&pServiceProvider));
	assert(SUCCEEDED(hr));

	ResEditPKGLib::IVCWin32CompositionService* pVCWin32CompositionService = nullptr;
	hr = pServiceProvider->QueryService(__uuidof(ResEditPKGLib::SVCWin32ResourceService), IID_PPV_ARGS(&pVCWin32CompositionService));
	assert(SUCCEEDED(hr));

	ResEditPKGLib::IVsPackage* pVsPackage = nullptr;
	hr = pClassFactory->CreateInstance(NULL, IID_PPV_ARGS(&pVsPackage));
	assert(SUCCEEDED(hr));

	UberServiceProvider uberServiceProvider(pServiceProvider);
	hr = pVsPackage->SetSite(&uberServiceProvider);
	assert(SUCCEEDED(hr));

	IVsEditorFactory* pResEditVsEditorFactory = uberServiceProvider.pResEdit;

	IUnknown* punkDocView;
	IUnknown* punkDocData;
	BSTR bstrEditorCaption;
	GUID guidCmdUI;
	VSEDITORCREATEDOCWIN grfCDW;
	hr = pResEditVsEditorFactory->CreateEditorInstance(
		CEF_OPENFILE,
		szInputResourceFilePath,
		NULL,
		NULL,
		0,
		NULL,
		&punkDocView,
		&punkDocData,
		&bstrEditorCaption,
		&guidCmdUI,
		&grfCDW);
	assert(SUCCEEDED(hr));

	ResEditPKGLib::IVCWin32Composition* pVCWin32Composition = nullptr;
	hr = pVCWin32CompositionService->CreateCompositionFromRC(const_cast<BSTR>(szInputResourceFilePath), &pVCWin32Composition);
	assert(SUCCEEDED(hr));

	IVsDocumentLockHolder* pVsDocumentLockHolder = nullptr;
	hr = pVCWin32Composition->QueryInterface(IID_PPV_ARGS(&pVsDocumentLockHolder));
	assert(SUCCEEDED(hr));

	struct CVCWin32Composition_Unknown50Output
	{
		IUnknown* pIO;
		IUnknown* pCompView;
		IUnknown* pVsDocData;
		DWORD unknown18;
		DWORD unknown1C;
		const wchar_t* pSource;
	};
	class CVCWin32Composition : IVsDocumentLockHolder
	{
	public:
		virtual void Unknown28() = 0; // dq offset sub_18009C650
		virtual void Unknown30() = 0; // dq offset sub_18009C880
		virtual void Unknown38() = 0; // dq offset sub_18009CA40
		virtual void Unknown40() = 0; // dq offset sub_18009CDB0
		virtual void Unknown48() = 0; // dq offset sub_18009A640
		virtual HRESULT Unknown50(const wchar_t* pFilename, int unknown, CVCWin32Composition_Unknown50Output** pUnknownOut) = 0; // dq offset sub_18009B190

		void** vftable8;
		void** vftable10;
		void** vftable18;
		QWORD unknown20;
		QWORD unknown28;
		QWORD unknown30;
		QWORD unknown38;
		QWORD unknown40;
		QWORD unknown48;
	};
	static_assert(sizeof(CVCWin32Composition) == 0x50, "CVCWin32Composition invalid size");
	CVCWin32Composition* pVCWin32CompositionView = reinterpret_cast<CVCWin32Composition*>(pVsDocumentLockHolder);

	CVCWin32Composition_Unknown50Output* pUnknown50Output = nullptr;
	hr = pVCWin32CompositionView->Unknown50(szInputResourceFilePath, 0, &pUnknown50Output);
	assert(SUCCEEDED(hr));

	IPersistFileFormat* pDataPersistFileFormat = nullptr;
	hr = pUnknown50Output->pVsDocData->QueryInterface(IID_PPV_ARGS(&pDataPersistFileFormat));
	assert(SUCCEEDED(hr));
	hr = pDataPersistFileFormat->Save(szOutputResourceFilePath, 1, 3);
	assert(SUCCEEDED(hr));

	// Release stuff

	// Cleanup COM
	BOOL freedLibrary = FreeLibrary(hModule);
	assert(SUCCEEDED(freedLibrary));

	return 0;
}
