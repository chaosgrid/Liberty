#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419ca8 _public_419ca8

PROC_DECLARE(0x419ca0, internal_419ca0, public_419ca0);
/* CHUNK of public_406210 */
extern "C" NAKED register_t __cdecl internal_419ca0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_418a98
        public_419ca8 : nop
        mov eax, offset public_41edb4
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419ca0)
        ASM_EXPORT_ENTRY_SINGLE(0x419ca8, public_419ca8)
    }
}

#undef public_419ca8

#pragma init_seg(compiler)
extern "C" void const* const public_419ca8 = __AsmFindLabelExport(&internal_419ca0, 0x419ca8);
