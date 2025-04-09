#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bba6b _public_5bba6b

PROC_DECLARE(0x5bba60, internal_5bba60, public_5bba60);
/* CHUNK of public_472020 */
extern "C" NAKED register_t __cdecl internal_5bba60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bba6b : nop
        mov eax, offset public_5f5d48
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bba60)
        ASM_EXPORT_ENTRY_SINGLE(0x5bba6b, public_5bba6b)
    }
}

#undef public_5bba6b

#pragma init_seg(compiler)
extern "C" void const* const public_5bba6b = __AsmFindLabelExport(&internal_5bba60, 0x5bba6b);
