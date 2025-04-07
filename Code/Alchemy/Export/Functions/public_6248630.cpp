#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624863b _public_624863b

PROC_DECLARE(0x6248630, internal_6248630, public_6248630);
/* CHUNK of public_6219d30 */
extern "C" NAKED register_t __cdecl internal_6248630()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624863b : nop
        mov eax, offset public_62514f8
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248630)
        ASM_EXPORT_ENTRY_SINGLE(0x624863b, public_624863b)
    }
}

#undef public_624863b

#pragma init_seg(compiler)
extern "C" void const* const public_624863b = __AsmFindLabelExport(&internal_6248630, 0x624863b);
