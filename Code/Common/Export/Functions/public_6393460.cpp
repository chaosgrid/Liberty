#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639346b _public_639346b

PROC_DECLARE(0x6393460, internal_6393460, public_6393460);
/* CHUNK of public_628c900 */
extern "C" NAKED register_t __cdecl internal_6393460()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x50]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639346b : nop
        mov eax, offset public_63ac590
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393460)
        ASM_EXPORT_ENTRY_SINGLE(0x639346b, public_639346b)
    }
}

#undef public_639346b

#pragma init_seg(compiler)
extern "C" void const* const public_639346b = __AsmFindLabelExport(&internal_6393460, 0x639346b);
