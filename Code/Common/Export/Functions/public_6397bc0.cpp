#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397bcb _public_6397bcb

PROC_DECLARE(0x6397bc0, internal_6397bc0, public_6397bc0);
/* CHUNK of public_6348960 */
extern "C" NAKED register_t __cdecl internal_6397bc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6397bcb : nop
        mov eax, offset public_63b1eb8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397bc0)
        ASM_EXPORT_ENTRY_SINGLE(0x6397bcb, public_6397bcb)
    }
}

#undef public_6397bcb

#pragma init_seg(compiler)
extern "C" void const* const public_6397bcb = __AsmFindLabelExport(&internal_6397bc0, 0x6397bcb);
