#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392669 _public_6392669
#define public_6392672 _public_6392672

PROC_DECLARE(0x6392660, internal_6392660, public_6392660);
/* CHUNK of public_6267e10 */
extern "C" NAKED register_t __cdecl internal_6392660()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x38]
        jmp dword ptr ds : [public_63991ac]
        public_6392669 : nop
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_6399314]
        public_6392672 : nop
        mov eax, offset public_63ab25c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392660)
        ASM_EXPORT_ENTRY_FIRST(0x6392669, public_6392669)
        ASM_EXPORT_ENTRY_LAST(0x6392672, public_6392672)
    }
}

#undef public_6392669
#undef public_6392672

#pragma init_seg(compiler)
extern "C" void const* const public_6392669 = __AsmFindLabelExport(&internal_6392660, 0x6392669);
extern "C" void const* const public_6392672 = __AsmFindLabelExport(&internal_6392660, 0x6392672);
