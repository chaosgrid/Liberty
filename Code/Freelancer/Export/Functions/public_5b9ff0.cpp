#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9ff9 _public_5b9ff9

PROC_DECLARE(0x5b9ff0, internal_5b9ff0, public_5b9ff0);
/* CHUNK of public_455850 */
extern "C" NAKED register_t __cdecl internal_5b9ff0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_5c6098]
        public_5b9ff9 : nop
        mov eax, offset public_5f42fc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9ff0)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9ff9, public_5b9ff9)
    }
}

#undef public_5b9ff9

#pragma init_seg(compiler)
extern "C" void const* const public_5b9ff9 = __AsmFindLabelExport(&internal_5b9ff0, 0x5b9ff9);
