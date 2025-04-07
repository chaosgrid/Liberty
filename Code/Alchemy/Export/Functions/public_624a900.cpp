#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209f60);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a908 _public_624a908

PROC_DECLARE(0x624a900, internal_624a900, public_624a900);
/* CHUNK of public_62436a0 */
extern "C" NAKED register_t __cdecl internal_624a900()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x10]
        jmp public_6209f60
        public_624a908 : nop
        mov eax, offset public_6253998
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a900)
        ASM_EXPORT_ENTRY_SINGLE(0x624a908, public_624a908)
    }
}

#undef public_624a908

#pragma init_seg(compiler)
extern "C" void const* const public_624a908 = __AsmFindLabelExport(&internal_624a900, 0x624a908);
