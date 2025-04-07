#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60789 _public_6d60789

PROC_DECLARE(0x6d60780, internal_6d60780, public_6d60780);
/* CHUNK of public_6ceefa0 */
extern "C" NAKED register_t __cdecl internal_6d60780()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_6d641e4]
        public_6d60789 : nop
        mov eax, offset public_6d710a0
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60780)
        ASM_EXPORT_ENTRY_SINGLE(0x6d60789, public_6d60789)
    }
}

#undef public_6d60789

#pragma init_seg(compiler)
extern "C" void const* const public_6d60789 = __AsmFindLabelExport(&internal_6d60780, 0x6d60789);
