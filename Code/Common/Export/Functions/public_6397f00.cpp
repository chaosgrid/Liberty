#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397f0b _public_6397f0b

PROC_DECLARE(0x6397f00, internal_6397f00, public_6397f00);
/* CHUNK of public_634cba0 */
extern "C" NAKED register_t __cdecl internal_6397f00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6397f0b : nop
        mov eax, offset public_63b2250
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397f00)
        ASM_EXPORT_ENTRY_SINGLE(0x6397f0b, public_6397f0b)
    }
}

#undef public_6397f0b

#pragma init_seg(compiler)
extern "C" void const* const public_6397f0b = __AsmFindLabelExport(&internal_6397f00, 0x6397f0b);
