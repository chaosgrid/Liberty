#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61ddc _public_6d61ddc

PROC_DECLARE(0x6d61dd0, internal_6d61dd0, public_6d61dd0);
/* CHUNK of public_6d18000 */
extern "C" NAKED register_t __cdecl internal_6d61dd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x26C]
        jmp dword ptr ds : [public_6d64748]
        public_6d61ddc : nop
        mov eax, offset public_6d72afc
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61dd0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d61ddc, public_6d61ddc)
    }
}

#undef public_6d61ddc

#pragma init_seg(compiler)
extern "C" void const* const public_6d61ddc = __AsmFindLabelExport(&internal_6d61dd0, 0x6d61ddc);
