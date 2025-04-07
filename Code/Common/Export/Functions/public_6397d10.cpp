#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397d1b _public_6397d1b

PROC_DECLARE(0x6397d10, internal_6397d10, public_6397d10);
/* CHUNK of public_634be10 */
extern "C" NAKED register_t __cdecl internal_6397d10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6397d1b : nop
        mov eax, offset public_63b20c8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397d10)
        ASM_EXPORT_ENTRY_SINGLE(0x6397d1b, public_6397d1b)
    }
}

#undef public_6397d1b

#pragma init_seg(compiler)
extern "C" void const* const public_6397d1b = __AsmFindLabelExport(&internal_6397d10, 0x6397d1b);
