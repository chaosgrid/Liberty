#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208610);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62473f8 _public_62473f8

PROC_DECLARE(0x62473f0, internal_62473f0, public_62473f0);
/* CHUNK of public_6205620 */
extern "C" NAKED register_t __cdecl internal_62473f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x10]
        jmp public_6208610
        public_62473f8 : nop
        mov eax, offset public_6250188
        jmp public_6246126
        UNREACHABLE_TRAP(0x62473f0)
        ASM_EXPORT_ENTRY_SINGLE(0x62473f8, public_62473f8)
    }
}

#undef public_62473f8

#pragma init_seg(compiler)
extern "C" void const* const public_62473f8 = __AsmFindLabelExport(&internal_62473f0, 0x62473f8);
