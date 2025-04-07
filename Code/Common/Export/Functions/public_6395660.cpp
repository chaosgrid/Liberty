#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_62f02b0);
CLANG_FORWARD_PROC_SYMBOL(public_62f1670);
CLANG_FORWARD_PROC_SYMBOL(public_62fb1a0);
CLANG_FORWARD_PROC_SYMBOL(public_62fb260);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395668 _public_6395668
#define public_6395673 _public_6395673
#define public_639567e _public_639567e
#define public_6395686 _public_6395686
#define public_6395694 _public_6395694

PROC_DECLARE(0x6395660, internal_6395660, public_6395660);
/* CHUNK of public_62f1fb0 */
extern "C" NAKED register_t __cdecl internal_6395660()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62f02b0
        public_6395668 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x64
        jmp public_62fb1a0
        public_6395673 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x74
        jmp public_62a68e0
        public_639567e : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62f1670
        public_6395686 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x130
        jmp public_62fb260
        public_6395694 : nop
        mov eax, offset public_63af15c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395660)
        ASM_EXPORT_ENTRY_FIRST(0x6395668, public_6395668)
        ASM_EXPORT_ENTRY(0x6395673, public_6395673)
        ASM_EXPORT_ENTRY(0x639567e, public_639567e)
        ASM_EXPORT_ENTRY(0x6395686, public_6395686)
        ASM_EXPORT_ENTRY_LAST(0x6395694, public_6395694)
    }
}

#undef public_6395668
#undef public_6395673
#undef public_639567e
#undef public_6395686
#undef public_6395694

#pragma init_seg(compiler)
extern "C" void const* const public_6395668 = __AsmFindLabelExport(&internal_6395660, 0x6395668);
extern "C" void const* const public_6395673 = __AsmFindLabelExport(&internal_6395660, 0x6395673);
extern "C" void const* const public_639567e = __AsmFindLabelExport(&internal_6395660, 0x639567e);
extern "C" void const* const public_6395686 = __AsmFindLabelExport(&internal_6395660, 0x6395686);
extern "C" void const* const public_6395694 = __AsmFindLabelExport(&internal_6395660, 0x6395694);
