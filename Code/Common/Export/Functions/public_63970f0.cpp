#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6327aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63970fb _public_63970fb
#define public_6397107 _public_6397107

PROC_DECLARE(0x63970f0, internal_63970f0, public_63970f0);
/* CHUNK of public_6327880 */
extern "C" NAKED register_t __cdecl internal_63970f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x2064]
        jmp public_6327aa0
        public_63970fb : nop
        lea ecx, ss:[ebp-0x2074]
        jmp dword ptr ds : [public_63991ac]
        public_6397107 : nop
        mov eax, offset public_63b11ac
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63970f0)
        ASM_EXPORT_ENTRY_FIRST(0x63970fb, public_63970fb)
        ASM_EXPORT_ENTRY_LAST(0x6397107, public_6397107)
    }
}

#undef public_63970fb
#undef public_6397107

#pragma init_seg(compiler)
extern "C" void const* const public_63970fb = __AsmFindLabelExport(&internal_63970f0, 0x63970fb);
extern "C" void const* const public_6397107 = __AsmFindLabelExport(&internal_63970f0, 0x6397107);
