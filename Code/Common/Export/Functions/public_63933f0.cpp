#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348710);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63933fb _public_63933fb
#define public_6393403 _public_6393403

PROC_DECLARE(0x63933f0, internal_63933f0, public_63933f0);
/* CHUNK of public_628a0c0 */
extern "C" NAKED register_t __cdecl internal_63933f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x7C]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_63933fb : nop
        lea ecx, ss:[ebp-0x70]
        jmp public_6348710
        public_6393403 : nop
        mov eax, offset public_63ac46c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63933f0)
        ASM_EXPORT_ENTRY_FIRST(0x63933fb, public_63933fb)
        ASM_EXPORT_ENTRY_LAST(0x6393403, public_6393403)
    }
}

#undef public_63933fb
#undef public_6393403

#pragma init_seg(compiler)
extern "C" void const* const public_63933fb = __AsmFindLabelExport(&internal_63933f0, 0x63933fb);
extern "C" void const* const public_6393403 = __AsmFindLabelExport(&internal_63933f0, 0x6393403);
