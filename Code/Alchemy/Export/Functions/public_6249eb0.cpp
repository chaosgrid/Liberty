#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249ebb _public_6249ebb

PROC_DECLARE(0x6249eb0, internal_6249eb0, public_6249eb0);
/* CHUNK of public_6236360 */
extern "C" NAKED register_t __cdecl internal_6249eb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6249ebb : nop
        mov eax, offset public_6252f04
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249eb0)
        ASM_EXPORT_ENTRY_SINGLE(0x6249ebb, public_6249ebb)
    }
}

#undef public_6249ebb

#pragma init_seg(compiler)
extern "C" void const* const public_6249ebb = __AsmFindLabelExport(&internal_6249eb0, 0x6249ebb);
