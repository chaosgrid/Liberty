#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249e9b _public_6249e9b

PROC_DECLARE(0x6249e90, internal_6249e90, public_6249e90);
/* CHUNK of public_6236280 */
extern "C" NAKED register_t __cdecl internal_6249e90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6249e9b : nop
        mov eax, offset public_6252ee0
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249e90)
        ASM_EXPORT_ENTRY_SINGLE(0x6249e9b, public_6249e9b)
    }
}

#undef public_6249e9b

#pragma init_seg(compiler)
extern "C" void const* const public_6249e9b = __AsmFindLabelExport(&internal_6249e90, 0x6249e9b);
