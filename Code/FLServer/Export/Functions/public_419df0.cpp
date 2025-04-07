#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419df8 _public_419df8

PROC_DECLARE(0x419df0, internal_419df0, public_419df0);
/* CHUNK of public_407560 */
extern "C" NAKED register_t __cdecl internal_419df0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_418a98
        public_419df8 : nop
        mov eax, offset public_41ef3c
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419df0)
        ASM_EXPORT_ENTRY_SINGLE(0x419df8, public_419df8)
    }
}

#undef public_419df8

#pragma init_seg(compiler)
extern "C" void const* const public_419df8 = __AsmFindLabelExport(&internal_419df0, 0x419df8);
