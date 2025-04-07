#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d30);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63960cc _public_63960cc
#define public_63960d7 _public_63960d7

PROC_DECLARE(0x63960c0, internal_63960c0, public_63960c0);
/* CHUNK of public_6306c40 */
extern "C" NAKED register_t __cdecl internal_63960c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xFC]
        jmp dword ptr ds : [public_6399178]
        public_63960cc : nop
        lea ecx, ss:[ebp-0xE8]
        jmp public_6391d30
        public_63960d7 : nop
        mov eax, offset public_63afee0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63960c0)
        ASM_EXPORT_ENTRY_FIRST(0x63960cc, public_63960cc)
        ASM_EXPORT_ENTRY_LAST(0x63960d7, public_63960d7)
    }
}

#undef public_63960cc
#undef public_63960d7

#pragma init_seg(compiler)
extern "C" void const* const public_63960cc = __AsmFindLabelExport(&internal_63960c0, 0x63960cc);
extern "C" void const* const public_63960d7 = __AsmFindLabelExport(&internal_63960c0, 0x63960d7);
