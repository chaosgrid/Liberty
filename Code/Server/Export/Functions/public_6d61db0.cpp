#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61db9 _public_6d61db9

PROC_DECLARE(0x6d61db0, internal_6d61db0, public_6d61db0);
/* CHUNK of public_6d17f30 */
extern "C" NAKED register_t __cdecl internal_6d61db0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x70]
        jmp dword ptr ds : [public_6d64744]
        public_6d61db9 : nop
        mov eax, offset public_6d72ad8
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61db0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d61db9, public_6d61db9)
    }
}

#undef public_6d61db9

#pragma init_seg(compiler)
extern "C" void const* const public_6d61db9 = __AsmFindLabelExport(&internal_6d61db0, 0x6d61db9);
