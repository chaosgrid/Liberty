#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209d60);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624931b _public_624931b

PROC_DECLARE(0x6249310, internal_6249310, public_6249310);
/* CHUNK of public_6229f00 */
extern "C" NAKED register_t __cdecl internal_6249310()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_6209d60
        public_624931b : nop
        mov eax, offset public_6252280
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249310)
        ASM_EXPORT_ENTRY_SINGLE(0x624931b, public_624931b)
    }
}

#undef public_624931b

#pragma init_seg(compiler)
extern "C" void const* const public_624931b = __AsmFindLabelExport(&internal_6249310, 0x624931b);
