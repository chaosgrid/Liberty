#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_443b10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b916b _public_5b916b
#define public_5b9179 _public_5b9179

PROC_DECLARE(0x5b9160, internal_5b9160, public_5b9160);
/* CHUNK of public_435b80 */
extern "C" NAKED register_t __cdecl internal_5b9160()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xAC]
        jmp public_443b10
        public_5b916b : nop
        mov eax, dword ptr ss : [ebp-0xB0]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b9179 : nop
        mov eax, offset public_5f309c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9160)
        ASM_EXPORT_ENTRY_FIRST(0x5b916b, public_5b916b)
        ASM_EXPORT_ENTRY_LAST(0x5b9179, public_5b9179)
    }
}

#undef public_5b916b
#undef public_5b9179

#pragma init_seg(compiler)
extern "C" void const* const public_5b916b = __AsmFindLabelExport(&internal_5b9160, 0x5b916b);
extern "C" void const* const public_5b9179 = __AsmFindLabelExport(&internal_5b9160, 0x5b9179);
