#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249b6b _public_6249b6b

PROC_DECLARE(0x6249b60, internal_6249b60, public_6249b60);
/* CHUNK of public_6232b00 */
extern "C" NAKED register_t __cdecl internal_6249b60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6249b6b : nop
        mov eax, offset public_6252b78
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249b60)
        ASM_EXPORT_ENTRY_SINGLE(0x6249b6b, public_6249b6b)
    }
}

#undef public_6249b6b

#pragma init_seg(compiler)
extern "C" void const* const public_6249b6b = __AsmFindLabelExport(&internal_6249b60, 0x6249b6b);
