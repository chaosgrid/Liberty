#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfd1b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d60dab _public_6d60dab
#define public_6d60db3 _public_6d60db3

PROC_DECLARE(0x6d60da0, internal_6d60da0, public_6d60da0);
/* CHUNK of public_6cfcc00 */
extern "C" NAKED register_t __cdecl internal_6d60da0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d60dab : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6cfd1b0
        public_6d60db3 : nop
        mov eax, offset public_6d71794
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d60da0)
        ASM_EXPORT_ENTRY_FIRST(0x6d60dab, public_6d60dab)
        ASM_EXPORT_ENTRY_LAST(0x6d60db3, public_6d60db3)
    }
}

#undef public_6d60dab
#undef public_6d60db3

#pragma init_seg(compiler)
extern "C" void const* const public_6d60dab = __AsmFindLabelExport(&internal_6d60da0, 0x6d60dab);
extern "C" void const* const public_6d60db3 = __AsmFindLabelExport(&internal_6d60da0, 0x6d60db3);
