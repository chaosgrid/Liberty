#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247f9b _public_6247f9b

PROC_DECLARE(0x6247f90, internal_6247f90, public_6247f90);
/* CHUNK of public_6212db0 */
extern "C" NAKED register_t __cdecl internal_6247f90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_6209fc0
        public_6247f9b : nop
        mov eax, offset public_6250e08
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247f90)
        ASM_EXPORT_ENTRY_SINGLE(0x6247f9b, public_6247f9b)
    }
}

#undef public_6247f9b

#pragma init_seg(compiler)
extern "C" void const* const public_6247f9b = __AsmFindLabelExport(&internal_6247f90, 0x6247f9b);
