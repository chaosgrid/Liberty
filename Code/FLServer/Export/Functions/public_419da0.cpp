#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401320);
CLANG_FORWARD_PROC_SYMBOL(public_403bd0);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_419dab _public_419dab
#define public_419db6 _public_419db6
#define public_419dc1 _public_419dc1

PROC_DECLARE(0x419da0, internal_419da0, public_419da0);
/* CHUNK of public_407140 */
extern "C" NAKED register_t __cdecl internal_419da0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x17C]
        jmp public_403bd0
        public_419dab : nop
        lea ecx, ss:[ebp-0x18C]
        jmp public_403bd0
        public_419db6 : nop
        lea ecx, ss:[ebp-0xEC]
        jmp public_401320
        public_419dc1 : nop
        mov eax, offset public_41eef4
        jmp public_4193c0
        UNREACHABLE_TRAP(0x419da0)
        ASM_EXPORT_ENTRY_FIRST(0x419dab, public_419dab)
        ASM_EXPORT_ENTRY(0x419db6, public_419db6)
        ASM_EXPORT_ENTRY_LAST(0x419dc1, public_419dc1)
    }
}

#undef public_419dab
#undef public_419db6
#undef public_419dc1

#pragma init_seg(compiler)
extern "C" void const* const public_419dab = __AsmFindLabelExport(&internal_419da0, 0x419dab);
extern "C" void const* const public_419db6 = __AsmFindLabelExport(&internal_419da0, 0x419db6);
extern "C" void const* const public_419dc1 = __AsmFindLabelExport(&internal_419da0, 0x419dc1);
