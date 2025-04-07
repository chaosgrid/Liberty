#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209f60);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a948 _public_624a948

PROC_DECLARE(0x624a940, internal_624a940, public_624a940);
/* CHUNK of public_6243850 */
extern "C" NAKED register_t __cdecl internal_624a940()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x28]
        jmp public_6209f60
        public_624a948 : nop
        mov eax, offset public_62539e0
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a940)
        ASM_EXPORT_ENTRY_SINGLE(0x624a948, public_624a948)
    }
}

#undef public_624a948

#pragma init_seg(compiler)
extern "C" void const* const public_624a948 = __AsmFindLabelExport(&internal_624a940, 0x624a948);
