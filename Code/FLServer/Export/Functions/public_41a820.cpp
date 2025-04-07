#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4027b0);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a828 _public_41a828

PROC_DECLARE(0x41a820, internal_41a820, public_41a820);
/* CHUNK of public_4131a0 */
extern "C" NAKED register_t __cdecl internal_41a820()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x6C]
        jmp public_4027b0
        public_41a828 : nop
        mov eax, offset public_41f964
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a820)
        ASM_EXPORT_ENTRY_SINGLE(0x41a828, public_41a828)
    }
}

#undef public_41a828

#pragma init_seg(compiler)
extern "C" void const* const public_41a828 = __AsmFindLabelExport(&internal_41a820, 0x41a828);
