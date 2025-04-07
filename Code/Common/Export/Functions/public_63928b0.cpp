#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63928b9 _public_63928b9
#define public_63928c2 _public_63928c2

PROC_DECLARE(0x63928b0, internal_63928b0, public_63928b0);
/* CHUNK of public_62727b0 */
extern "C" NAKED register_t __cdecl internal_63928b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x38]
        jmp dword ptr ds : [public_63991ac]
        public_63928b9 : nop
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_6399314]
        public_63928c2 : nop
        mov eax, offset public_63ab6a4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63928b0)
        ASM_EXPORT_ENTRY_FIRST(0x63928b9, public_63928b9)
        ASM_EXPORT_ENTRY_LAST(0x63928c2, public_63928c2)
    }
}

#undef public_63928b9
#undef public_63928c2

#pragma init_seg(compiler)
extern "C" void const* const public_63928b9 = __AsmFindLabelExport(&internal_63928b0, 0x63928b9);
extern "C" void const* const public_63928c2 = __AsmFindLabelExport(&internal_63928b0, 0x63928c2);
