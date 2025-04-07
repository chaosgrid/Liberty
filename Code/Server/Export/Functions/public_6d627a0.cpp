#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d20a40);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d627a8 _public_6d627a8

PROC_DECLARE(0x6d627a0, internal_6d627a0, public_6d627a0);
/* CHUNK of public_6d209f0 */
extern "C" NAKED register_t __cdecl internal_6d627a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6d20a40
        public_6d627a8 : nop
        mov eax, offset public_6d73430
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d627a0)
        ASM_EXPORT_ENTRY_SINGLE(0x6d627a8, public_6d627a8)
    }
}

#undef public_6d627a8

#pragma init_seg(compiler)
extern "C" void const* const public_6d627a8 = __AsmFindLabelExport(&internal_6d627a0, 0x6d627a8);
