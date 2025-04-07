#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419bc8 _public_419bc8

PROC_DECLARE(0x419bc0, internal_419bc0, public_419bc0);
/* CHUNK of public_403850 */
extern "C" NAKED register_t __cdecl internal_419bc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_418a98
        public_419bc8 : nop
        mov eax, offset public_41ec34
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419bc0)
        ASM_EXPORT_ENTRY_SINGLE(0x419bc8, public_419bc8)
    }
}

#undef public_419bc8

#pragma init_seg(compiler)
extern "C" void const* const public_419bc8 = __AsmFindLabelExport(&internal_419bc0, 0x419bc8);
