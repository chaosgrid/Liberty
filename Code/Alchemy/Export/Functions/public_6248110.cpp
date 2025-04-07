#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624811b _public_624811b

PROC_DECLARE(0x6248110, internal_6248110, public_6248110);
/* CHUNK of public_6214d70 */
extern "C" NAKED register_t __cdecl internal_6248110()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624811b : nop
        mov eax, offset public_6250f98
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248110)
        ASM_EXPORT_ENTRY_SINGLE(0x624811b, public_624811b)
    }
}

#undef public_624811b

#pragma init_seg(compiler)
extern "C" void const* const public_624811b = __AsmFindLabelExport(&internal_6248110, 0x624811b);
