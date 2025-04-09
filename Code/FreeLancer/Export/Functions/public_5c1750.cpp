#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c175b _public_5c175b

PROC_DECLARE(0x5c1750, internal_5c1750, public_5c1750);
/* CHUNK of public_55d2b0 */
extern "C" NAKED register_t __cdecl internal_5c1750()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c175b : nop
        mov eax, offset public_5fbb18
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c1750)
        ASM_EXPORT_ENTRY_SINGLE(0x5c175b, public_5c175b)
    }
}

#undef public_5c175b

#pragma init_seg(compiler)
extern "C" void const* const public_5c175b = __AsmFindLabelExport(&internal_5c1750, 0x5c175b);
