#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348710);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392f38 _public_6392f38

PROC_DECLARE(0x6392f30, internal_6392f30, public_6392f30);
/* CHUNK of public_62847e0 */
extern "C" NAKED register_t __cdecl internal_6392f30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x64]
        jmp public_6348710
        public_6392f38 : nop
        mov eax, offset public_63abee0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392f30)
        ASM_EXPORT_ENTRY_SINGLE(0x6392f38, public_6392f38)
    }
}

#undef public_6392f38

#pragma init_seg(compiler)
extern "C" void const* const public_6392f38 = __AsmFindLabelExport(&internal_6392f30, 0x6392f38);
