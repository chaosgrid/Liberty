#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247c7b _public_6247c7b

PROC_DECLARE(0x6247c70, internal_6247c70, public_6247c70);
/* CHUNK of public_6210860 */
extern "C" NAKED register_t __cdecl internal_6247c70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_6209ea0
        public_6247c7b : nop
        mov eax, offset public_6250aa0
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247c70)
        ASM_EXPORT_ENTRY_SINGLE(0x6247c7b, public_6247c7b)
    }
}

#undef public_6247c7b

#pragma init_seg(compiler)
extern "C" void const* const public_6247c7b = __AsmFindLabelExport(&internal_6247c70, 0x6247c7b);
