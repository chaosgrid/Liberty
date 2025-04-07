#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419ba8 _public_419ba8

PROC_DECLARE(0x419ba0, internal_419ba0, public_419ba0);
/* CHUNK of public_403800 */
extern "C" NAKED register_t __cdecl internal_419ba0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_418a98
        public_419ba8 : nop
        mov eax, offset public_41ec10
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419ba0)
        ASM_EXPORT_ENTRY_SINGLE(0x419ba8, public_419ba8)
    }
}

#undef public_419ba8

#pragma init_seg(compiler)
extern "C" void const* const public_419ba8 = __AsmFindLabelExport(&internal_419ba0, 0x419ba8);
