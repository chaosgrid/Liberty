#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb18ab _public_6fb18ab

PROC_DECLARE(0x6fb18a0, internal_6fb18a0, public_6fb18a0);
/* CHUNK of public_6f9a270 */
extern "C" NAKED register_t __cdecl internal_6fb18a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fb18ab : nop
        mov eax, offset public_6fc6ea8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb18a0)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb18ab, public_6fb18ab)
    }
}

#undef public_6fb18ab

#pragma init_seg(compiler)
extern "C" void const* const public_6fb18ab = __AsmFindLabelExport(&internal_6fb18a0, 0x6fb18ab);
