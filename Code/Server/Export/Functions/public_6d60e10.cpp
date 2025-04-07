#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60e19 _public_6d60e19

PROC_DECLARE(0x6d60e10, internal_6d60e10, public_6d60e10);
/* CHUNK of public_6cfe180 */
extern "C" NAKED register_t __cdecl internal_6d60e10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_6d641e4]
        public_6d60e19 : nop
        mov eax, offset public_6d7193c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60e10)
        ASM_EXPORT_ENTRY_SINGLE(0x6d60e19, public_6d60e19)
    }
}

#undef public_6d60e19

#pragma init_seg(compiler)
extern "C" void const* const public_6d60e19 = __AsmFindLabelExport(&internal_6d60e10, 0x6d60e19);
