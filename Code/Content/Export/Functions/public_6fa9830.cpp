#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa9839 _public_6fa9839

PROC_DECLARE(0x6fa9830, internal_6fa9830, public_6fa9830);
/* CHUNK of public_6ea5b50 */
extern "C" NAKED register_t __cdecl internal_6fa9830()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_6fb3034]
        public_6fa9839 : nop
        mov eax, offset public_6fbdb58
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9830)
        ASM_EXPORT_ENTRY_SINGLE(0x6fa9839, public_6fa9839)
    }
}

#undef public_6fa9839

#pragma init_seg(compiler)
extern "C" void const* const public_6fa9839 = __AsmFindLabelExport(&internal_6fa9830, 0x6fa9839);
