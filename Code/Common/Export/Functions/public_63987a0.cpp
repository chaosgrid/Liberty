#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63987ab _public_63987ab

PROC_DECLARE(0x63987a0, internal_63987a0, public_63987a0);
/* CHUNK of public_636b190 */
extern "C" NAKED register_t __cdecl internal_63987a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63987ab : nop
        mov eax, offset public_63b2da0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63987a0)
        ASM_EXPORT_ENTRY_SINGLE(0x63987ab, public_63987ab)
    }
}

#undef public_63987ab

#pragma init_seg(compiler)
extern "C" void const* const public_63987ab = __AsmFindLabelExport(&internal_63987a0, 0x63987ab);
