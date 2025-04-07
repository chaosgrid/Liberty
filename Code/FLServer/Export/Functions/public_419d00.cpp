#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418ac8);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419d08 _public_419d08

PROC_DECLARE(0x419d00, internal_419d00, public_419d00);
/* CHUNK of public_406460 */
extern "C" NAKED register_t __cdecl internal_419d00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x54]
        jmp public_418ac8
        public_419d08 : nop
        mov eax, offset public_41ee20
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419d00)
        ASM_EXPORT_ENTRY_SINGLE(0x419d08, public_419d08)
    }
}

#undef public_419d08

#pragma init_seg(compiler)
extern "C" void const* const public_419d08 = __AsmFindLabelExport(&internal_419d00, 0x419d08);
