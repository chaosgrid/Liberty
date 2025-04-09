#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c131b _public_5c131b

PROC_DECLARE(0x5c1310, internal_5c1310, public_5c1310);
/* CHUNK of public_54c8b0 */
extern "C" NAKED register_t __cdecl internal_5c1310()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x7C]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c131b : nop
        mov eax, offset public_5fb654
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1310)
        ASM_EXPORT_ENTRY_SINGLE(0x5c131b, public_5c131b)
    }
}

#undef public_5c131b

#pragma init_seg(compiler)
extern "C" void const* const public_5c131b = __AsmFindLabelExport(&internal_5c1310, 0x5c131b);
