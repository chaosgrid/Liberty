#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a73b _public_624a73b

PROC_DECLARE(0x624a730, internal_624a730, public_624a730);
/* CHUNK of public_623fc90 */
extern "C" NAKED register_t __cdecl internal_624a730()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a73b : nop
        mov eax, offset public_62537b0
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a730)
        ASM_EXPORT_ENTRY_SINGLE(0x624a73b, public_624a73b)
    }
}

#undef public_624a73b

#pragma init_seg(compiler)
extern "C" void const* const public_624a73b = __AsmFindLabelExport(&internal_624a730, 0x624a73b);
