#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247f7b _public_6247f7b

PROC_DECLARE(0x6247f70, internal_6247f70, public_6247f70);
/* CHUNK of public_6212b00 */
extern "C" NAKED register_t __cdecl internal_6247f70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6247f7b : nop
        mov eax, offset public_6250de4
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247f70)
        ASM_EXPORT_ENTRY_SINGLE(0x6247f7b, public_6247f7b)
    }
}

#undef public_6247f7b

#pragma init_seg(compiler)
extern "C" void const* const public_6247f7b = __AsmFindLabelExport(&internal_6247f70, 0x6247f7b);
