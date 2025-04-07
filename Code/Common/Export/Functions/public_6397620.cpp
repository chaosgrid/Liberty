#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639762b _public_639762b

PROC_DECLARE(0x6397620, internal_6397620, public_6397620);
/* CHUNK of public_6333bb0 */
extern "C" NAKED register_t __cdecl internal_6397620()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_639762b : nop
        mov eax, offset public_63b1808
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397620)
        ASM_EXPORT_ENTRY_SINGLE(0x639762b, public_639762b)
    }
}

#undef public_639762b

#pragma init_seg(compiler)
extern "C" void const* const public_639762b = __AsmFindLabelExport(&internal_6397620, 0x639762b);
