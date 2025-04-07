#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f02b0);
CLANG_FORWARD_PROC_SYMBOL(public_62f1670);
CLANG_FORWARD_PROC_SYMBOL(public_62fb1a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395738 _public_6395738
#define public_6395743 _public_6395743
#define public_639574b _public_639574b

PROC_DECLARE(0x6395730, internal_6395730, public_6395730);
/* CHUNK of public_62f3380 */
extern "C" NAKED register_t __cdecl internal_6395730()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62f02b0
        public_6395738 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x64
        jmp public_62fb1a0
        public_6395743 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62f1670
        public_639574b : nop
        mov eax, offset public_63af210
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395730)
        ASM_EXPORT_ENTRY_FIRST(0x6395738, public_6395738)
        ASM_EXPORT_ENTRY(0x6395743, public_6395743)
        ASM_EXPORT_ENTRY_LAST(0x639574b, public_639574b)
    }
}

#undef public_6395738
#undef public_6395743
#undef public_639574b

#pragma init_seg(compiler)
extern "C" void const* const public_6395738 = __AsmFindLabelExport(&internal_6395730, 0x6395738);
extern "C" void const* const public_6395743 = __AsmFindLabelExport(&internal_6395730, 0x6395743);
extern "C" void const* const public_639574b = __AsmFindLabelExport(&internal_6395730, 0x639574b);
