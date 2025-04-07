#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d30);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63960fb _public_63960fb
#define public_6396106 _public_6396106

PROC_DECLARE(0x63960f0, internal_63960f0, public_63960f0);
/* CHUNK of public_6306df0 */
extern "C" NAKED register_t __cdecl internal_63960f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x21C4]
        jmp public_6391d30
        public_63960fb : nop
        lea ecx, ss:[ebp-0x20E8]
        jmp public_6391d30
        public_6396106 : nop
        mov eax, offset public_63aff0c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63960f0)
        ASM_EXPORT_ENTRY_FIRST(0x63960fb, public_63960fb)
        ASM_EXPORT_ENTRY_LAST(0x6396106, public_6396106)
    }
}

#undef public_63960fb
#undef public_6396106

#pragma init_seg(compiler)
extern "C" void const* const public_63960fb = __AsmFindLabelExport(&internal_63960f0, 0x63960fb);
extern "C" void const* const public_6396106 = __AsmFindLabelExport(&internal_63960f0, 0x6396106);
