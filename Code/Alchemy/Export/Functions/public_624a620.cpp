#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a62b _public_624a62b

PROC_DECLARE(0x624a620, internal_624a620, public_624a620);
/* CHUNK of public_623d640 */
extern "C" NAKED register_t __cdecl internal_624a620()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a62b : nop
        mov eax, offset public_6253674
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a620)
        ASM_EXPORT_ENTRY_SINGLE(0x624a62b, public_624a62b)
    }
}

#undef public_624a62b

#pragma init_seg(compiler)
extern "C" void const* const public_624a62b = __AsmFindLabelExport(&internal_624a620, 0x624a62b);
