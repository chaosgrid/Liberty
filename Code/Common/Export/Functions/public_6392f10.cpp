#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392f19 _public_6392f19
#define public_6392f22 _public_6392f22

PROC_DECLARE(0x6392f10, internal_6392f10, public_6392f10);
/* CHUNK of public_6282cb0 */
extern "C" NAKED register_t __cdecl internal_6392f10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x38]
        jmp dword ptr ds : [public_63991ac]
        public_6392f19 : nop
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_6399314]
        public_6392f22 : nop
        mov eax, offset public_63abebc
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392f10)
        ASM_EXPORT_ENTRY_FIRST(0x6392f19, public_6392f19)
        ASM_EXPORT_ENTRY_LAST(0x6392f22, public_6392f22)
    }
}

#undef public_6392f19
#undef public_6392f22

#pragma init_seg(compiler)
extern "C" void const* const public_6392f19 = __AsmFindLabelExport(&internal_6392f10, 0x6392f19);
extern "C" void const* const public_6392f22 = __AsmFindLabelExport(&internal_6392f10, 0x6392f22);
