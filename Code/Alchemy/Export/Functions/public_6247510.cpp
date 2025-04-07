#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209d90);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247518 _public_6247518
#define public_6247520 _public_6247520

PROC_DECLARE(0x6247510, internal_6247510, public_6247510);
/* CHUNK of public_6207530 */
extern "C" NAKED register_t __cdecl internal_6247510()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_6209d90
        public_6247518 : nop
        lea ecx, ss:[ebp+4]
        jmp public_6209d90
        public_6247520 : nop
        mov eax, offset public_62502cc
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247510)
        ASM_EXPORT_ENTRY_FIRST(0x6247518, public_6247518)
        ASM_EXPORT_ENTRY_LAST(0x6247520, public_6247520)
    }
}

#undef public_6247518
#undef public_6247520

#pragma init_seg(compiler)
extern "C" void const* const public_6247518 = __AsmFindLabelExport(&internal_6247510, 0x6247518);
extern "C" void const* const public_6247520 = __AsmFindLabelExport(&internal_6247510, 0x6247520);
