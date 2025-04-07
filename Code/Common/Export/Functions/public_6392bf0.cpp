#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627c930);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392bf8 _public_6392bf8

PROC_DECLARE(0x6392bf0, internal_6392bf0, public_6392bf0);
/* CHUNK of public_627be50 */
extern "C" NAKED register_t __cdecl internal_6392bf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_627c930
        public_6392bf8 : nop
        mov eax, offset public_63ab9f8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392bf0)
        ASM_EXPORT_ENTRY_SINGLE(0x6392bf8, public_6392bf8)
    }
}

#undef public_6392bf8

#pragma init_seg(compiler)
extern "C" void const* const public_6392bf8 = __AsmFindLabelExport(&internal_6392bf0, 0x6392bf8);
