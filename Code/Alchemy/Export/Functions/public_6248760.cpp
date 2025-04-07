#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624876b _public_624876b

PROC_DECLARE(0x6248760, internal_6248760, public_6248760);
/* CHUNK of public_621b7b0 */
extern "C" NAKED register_t __cdecl internal_6248760()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624876b : nop
        mov eax, offset public_625162c
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248760)
        ASM_EXPORT_ENTRY_SINGLE(0x624876b, public_624876b)
    }
}

#undef public_624876b

#pragma init_seg(compiler)
extern "C" void const* const public_624876b = __AsmFindLabelExport(&internal_6248760, 0x624876b);
