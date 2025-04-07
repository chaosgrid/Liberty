#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a5ab _public_41a5ab

PROC_DECLARE(0x41a5a0, internal_41a5a0, public_41a5a0);
/* CHUNK of public_410350 */
extern "C" NAKED register_t __cdecl internal_41a5a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x810]
        jmp public_418aa4
        public_41a5ab : nop
        mov eax, offset public_41f6b0
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a5a0)
        ASM_EXPORT_ENTRY_SINGLE(0x41a5ab, public_41a5ab)
    }
}

#undef public_41a5ab

#pragma init_seg(compiler)
extern "C" void const* const public_41a5ab = __AsmFindLabelExport(&internal_41a5a0, 0x41a5ab);
