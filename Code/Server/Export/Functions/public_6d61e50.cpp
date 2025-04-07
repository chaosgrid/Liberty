#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d61e5b _public_6d61e5b
#define public_6d61e72 _public_6d61e72
#define public_6d61e73 _public_6d61e73

PROC_DECLARE(0x6d61e50, internal_6d61e50, public_6d61e50);
/* CHUNK of public_6d18ac0 */
extern "C" NAKED register_t __cdecl internal_6d61e50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6d5ffb0
        pop ecx
        ret 
        public_6d61e5b : nop
        mov eax, dword ptr ss : [ebp-0x20]
        and eax, 1
        test eax, eax
        je public_6d61e72
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_6d64b68]
        public_6d61e72 : nop
        ret 
        public_6d61e73 : nop
        mov eax, offset public_6d72b9c
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d61e50)
        ASM_EXPORT_ENTRY_FIRST(0x6d61e5b, public_6d61e5b)
        ASM_EXPORT_ENTRY(0x6d61e72, public_6d61e72)
        ASM_EXPORT_ENTRY_LAST(0x6d61e73, public_6d61e73)
    }
}

#undef public_6d61e5b
#undef public_6d61e72
#undef public_6d61e73

#pragma init_seg(compiler)
extern "C" void const* const public_6d61e5b = __AsmFindLabelExport(&internal_6d61e50, 0x6d61e5b);
extern "C" void const* const public_6d61e72 = __AsmFindLabelExport(&internal_6d61e50, 0x6d61e72);
extern "C" void const* const public_6d61e73 = __AsmFindLabelExport(&internal_6d61e50, 0x6d61e73);
