#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e2a0);
CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0e88 _public_5c0e88
#define public_5c0e93 _public_5c0e93

PROC_DECLARE(0x5c0e80, internal_5c0e80, public_5c0e80);
/* CHUNK of public_543f50 */
extern "C" NAKED register_t __cdecl internal_5c0e80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x64]
        jmp public_40e2a0
        public_5c0e88 : nop
        lea ecx, ss:[ebp-0xF0]
        jmp public_502d90
        public_5c0e93 : nop
        mov eax, offset public_5fb124
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0e80)
        ASM_EXPORT_ENTRY_FIRST(0x5c0e88, public_5c0e88)
        ASM_EXPORT_ENTRY_LAST(0x5c0e93, public_5c0e93)
    }
}

#undef public_5c0e88
#undef public_5c0e93

#pragma init_seg(compiler)
extern "C" void const* const public_5c0e88 = __AsmFindLabelExport(&internal_5c0e80, 0x5c0e88);
extern "C" void const* const public_5c0e93 = __AsmFindLabelExport(&internal_5c0e80, 0x5c0e93);
