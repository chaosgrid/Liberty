#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620d670);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624aa18 _public_624aa18

PROC_DECLARE(0x624aa10, internal_624aa10, public_624aa10);
/* CHUNK of public_6244430 */
extern "C" NAKED register_t __cdecl internal_624aa10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_620d670
        public_624aa18 : nop
        mov eax, offset public_6253ab0
        jmp public_6246126
        UNREACHABLE_TRAP(0x624aa10)
        ASM_EXPORT_ENTRY_SINGLE(0x624aa18, public_624aa18)
    }
}

#undef public_624aa18

#pragma init_seg(compiler)
extern "C" void const* const public_624aa18 = __AsmFindLabelExport(&internal_624aa10, 0x624aa18);
