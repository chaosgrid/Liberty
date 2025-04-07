#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634b6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392fc8 _public_6392fc8

PROC_DECLARE(0x6392fc0, internal_6392fc0, public_6392fc0);
/* CHUNK of public_6285b50 */
extern "C" NAKED register_t __cdecl internal_6392fc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_634b6a0
        public_6392fc8 : nop
        mov eax, offset public_63abfa4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392fc0)
        ASM_EXPORT_ENTRY_SINGLE(0x6392fc8, public_6392fc8)
    }
}

#undef public_6392fc8

#pragma init_seg(compiler)
extern "C" void const* const public_6392fc8 = __AsmFindLabelExport(&internal_6392fc0, 0x6392fc8);
