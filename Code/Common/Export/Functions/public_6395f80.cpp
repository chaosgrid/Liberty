#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395f8b _public_6395f8b

PROC_DECLARE(0x6395f80, internal_6395f80, public_6395f80);
/* CHUNK of public_6301090 */
extern "C" NAKED register_t __cdecl internal_6395f80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6395f8b : nop
        mov eax, offset public_63afd18
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395f80)
        ASM_EXPORT_ENTRY_SINGLE(0x6395f8b, public_6395f8b)
    }
}

#undef public_6395f8b

#pragma init_seg(compiler)
extern "C" void const* const public_6395f8b = __AsmFindLabelExport(&internal_6395f80, 0x6395f8b);
