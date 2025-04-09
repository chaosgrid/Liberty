#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_407000);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8598 _public_5b8598

PROC_DECLARE(0x5b8590, internal_5b8590, public_5b8590);
/* CHUNK of public_4098b0 */
extern "C" NAKED register_t __cdecl internal_5b8590()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x30]
        jmp public_407000
        public_5b8598 : nop
        mov eax, offset public_5f217c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8590)
        ASM_EXPORT_ENTRY_SINGLE(0x5b8598, public_5b8598)
    }
}

#undef public_5b8598

#pragma init_seg(compiler)
extern "C" void const* const public_5b8598 = __AsmFindLabelExport(&internal_5b8590, 0x5b8598);
