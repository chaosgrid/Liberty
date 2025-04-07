#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419dd8 _public_419dd8

PROC_DECLARE(0x419dd0, internal_419dd0, public_419dd0);
/* CHUNK of public_4074c0 */
extern "C" NAKED register_t __cdecl internal_419dd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_418a98
        public_419dd8 : nop
        mov eax, offset public_41ef18
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419dd0)
        ASM_EXPORT_ENTRY_SINGLE(0x419dd8, public_419dd8)
    }
}

#undef public_419dd8

#pragma init_seg(compiler)
extern "C" void const* const public_419dd8 = __AsmFindLabelExport(&internal_419dd0, 0x419dd8);
