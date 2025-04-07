#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61e19 _public_6d61e19

PROC_DECLARE(0x6d61e10, internal_6d61e10, public_6d61e10);
/* CHUNK of public_6d18430 */
extern "C" NAKED register_t __cdecl internal_6d61e10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x6C]
        jmp dword ptr ds : [public_6d647ac]
        public_6d61e19 : nop
        mov eax, offset public_6d72b44
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61e10)
        ASM_EXPORT_ENTRY_SINGLE(0x6d61e19, public_6d61e19)
    }
}

#undef public_6d61e19

#pragma init_seg(compiler)
extern "C" void const* const public_6d61e19 = __AsmFindLabelExport(&internal_6d61e10, 0x6d61e19);
