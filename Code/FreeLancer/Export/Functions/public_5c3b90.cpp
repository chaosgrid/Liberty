#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c3b9b _public_5c3b9b

PROC_DECLARE(0x5c3b90, internal_5c3b90, public_5c3b90);
/* CHUNK of public_577b40 */
extern "C" NAKED register_t __cdecl internal_5c3b90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c3b9b : nop
        mov eax, offset public_5fd86c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c3b90)
        ASM_EXPORT_ENTRY_SINGLE(0x5c3b9b, public_5c3b9b)
    }
}

#undef public_5c3b9b

#pragma init_seg(compiler)
extern "C" void const* const public_5c3b9b = __AsmFindLabelExport(&internal_5c3b90, 0x5c3b9b);
