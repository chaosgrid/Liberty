#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348710);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393228 _public_6393228
#define public_6393233 _public_6393233

PROC_DECLARE(0x6393220, internal_6393220, public_6393220);
/* CHUNK of public_6289370 */
extern "C" NAKED register_t __cdecl internal_6393220()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x64]
        jmp public_6348710
        public_6393228 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6393233 : nop
        mov eax, offset public_63ac2fc
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393220)
        ASM_EXPORT_ENTRY_FIRST(0x6393228, public_6393228)
        ASM_EXPORT_ENTRY_LAST(0x6393233, public_6393233)
    }
}

#undef public_6393228
#undef public_6393233

#pragma init_seg(compiler)
extern "C" void const* const public_6393228 = __AsmFindLabelExport(&internal_6393220, 0x6393228);
extern "C" void const* const public_6393233 = __AsmFindLabelExport(&internal_6393220, 0x6393233);
