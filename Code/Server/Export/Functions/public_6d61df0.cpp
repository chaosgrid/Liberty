#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61df9 _public_6d61df9

PROC_DECLARE(0x6d61df0, internal_6d61df0, public_6d61df0);
/* CHUNK of public_6d18310 */
extern "C" NAKED register_t __cdecl internal_6d61df0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x6C]
        jmp dword ptr ds : [public_6d647a8]
        public_6d61df9 : nop
        mov eax, offset public_6d72b20
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61df0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d61df9, public_6d61df9)
    }
}

#undef public_6d61df9

#pragma init_seg(compiler)
extern "C" void const* const public_6d61df9 = __AsmFindLabelExport(&internal_6d61df0, 0x6d61df9);
