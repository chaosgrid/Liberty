#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a1b8 _public_41a1b8

PROC_DECLARE(0x41a1b0, internal_41a1b0, public_41a1b0);
/* CHUNK of public_40d1c0 */
extern "C" NAKED register_t __cdecl internal_41a1b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_418a98
        public_41a1b8 : nop
        mov eax, offset public_41f30c
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a1b0)
        ASM_EXPORT_ENTRY_SINGLE(0x41a1b8, public_41a1b8)
    }
}

#undef public_41a1b8

#pragma init_seg(compiler)
extern "C" void const* const public_41a1b8 = __AsmFindLabelExport(&internal_41a1b0, 0x41a1b8);
