#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a288 _public_41a288

PROC_DECLARE(0x41a280, internal_41a280, public_41a280);
/* CHUNK of public_40de80 */
extern "C" NAKED register_t __cdecl internal_41a280()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x4C]
        jmp public_418aa4
        public_41a288 : nop
        mov eax, offset public_41f3f4
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a280)
        ASM_EXPORT_ENTRY_SINGLE(0x41a288, public_41a288)
    }
}

#undef public_41a288

#pragma init_seg(compiler)
extern "C" void const* const public_41a288 = __AsmFindLabelExport(&internal_41a280, 0x41a288);
