#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a75b _public_624a75b

PROC_DECLARE(0x624a750, internal_624a750, public_624a750);
/* CHUNK of public_623ff00 */
extern "C" NAKED register_t __cdecl internal_624a750()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a75b : nop
        mov eax, offset public_62537d4
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a750)
        ASM_EXPORT_ENTRY_SINGLE(0x624a75b, public_624a75b)
    }
}

#undef public_624a75b

#pragma init_seg(compiler)
extern "C" void const* const public_624a75b = __AsmFindLabelExport(&internal_624a750, 0x624a75b);
