#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419d4b _public_419d4b

PROC_DECLARE(0x419d40, internal_419d40, public_419d40);
/* CHUNK of public_4067f0 */
extern "C" NAKED register_t __cdecl internal_419d40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x584]
        jmp public_418aa4
        public_419d4b : nop
        mov eax, offset public_41ee68
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419d40)
        ASM_EXPORT_ENTRY_SINGLE(0x419d4b, public_419d4b)
    }
}

#undef public_419d4b

#pragma init_seg(compiler)
extern "C" void const* const public_419d4b = __AsmFindLabelExport(&internal_419d40, 0x419d4b);
