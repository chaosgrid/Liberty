#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392f58 _public_6392f58

PROC_DECLARE(0x6392f50, internal_6392f50, public_6392f50);
/* CHUNK of public_6284910 */
extern "C" NAKED register_t __cdecl internal_6392f50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6269110
        public_6392f58 : nop
        mov eax, offset public_63abf04
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392f50)
        ASM_EXPORT_ENTRY_SINGLE(0x6392f58, public_6392f58)
    }
}

#undef public_6392f58

#pragma init_seg(compiler)
extern "C" void const* const public_6392f58 = __AsmFindLabelExport(&internal_6392f50, 0x6392f58);
