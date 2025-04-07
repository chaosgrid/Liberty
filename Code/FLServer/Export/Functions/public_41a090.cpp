#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40c880);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a098 _public_41a098

PROC_DECLARE(0x41a090, internal_41a090, public_41a090);
/* CHUNK of public_40c8c0 */
extern "C" NAKED register_t __cdecl internal_41a090()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x6C]
        jmp public_40c880
        public_41a098 : nop
        mov eax, offset public_41f1f8
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a090)
        ASM_EXPORT_ENTRY_SINGLE(0x41a098, public_41a098)
    }
}

#undef public_41a098

#pragma init_seg(compiler)
extern "C" void const* const public_41a098 = __AsmFindLabelExport(&internal_41a090, 0x41a098);
