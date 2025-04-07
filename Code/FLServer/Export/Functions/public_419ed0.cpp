#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4027b0);
CLANG_FORWARD_PROC_SYMBOL(public_403bd0);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419ed8 _public_419ed8
#define public_419ee0 _public_419ee0

PROC_DECLARE(0x419ed0, internal_419ed0, public_419ed0);
/* CHUNK of public_4094e0 */
extern "C" NAKED register_t __cdecl internal_419ed0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x6C]
        jmp public_4027b0
        public_419ed8 : nop
        lea ecx, ss:[ebp-0x7C]
        jmp public_403bd0
        public_419ee0 : nop
        mov eax, offset public_41f014
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419ed0)
        ASM_EXPORT_ENTRY_FIRST(0x419ed8, public_419ed8)
        ASM_EXPORT_ENTRY_LAST(0x419ee0, public_419ee0)
    }
}

#undef public_419ed8
#undef public_419ee0

#pragma init_seg(compiler)
extern "C" void const* const public_419ed8 = __AsmFindLabelExport(&internal_419ed0, 0x419ed8);
extern "C" void const* const public_419ee0 = __AsmFindLabelExport(&internal_419ed0, 0x419ee0);
