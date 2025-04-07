#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9dd9 _public_5b9dd9
#define public_5b9de2 _public_5b9de2

PROC_DECLARE(0x5b9dd0, internal_5b9dd0, public_5b9dd0);
/* CHUNK of public_44fdd0 */
extern "C" NAKED register_t __cdecl internal_5b9dd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_5c61b4]
        public_5b9dd9 : nop
        lea ecx, ss:[ebp-0x4C]
        jmp dword ptr ds : [public_5c61b4]
        public_5b9de2 : nop
        mov eax, offset public_5f40a4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9dd0)
        ASM_EXPORT_ENTRY_FIRST(0x5b9dd9, public_5b9dd9)
        ASM_EXPORT_ENTRY_LAST(0x5b9de2, public_5b9de2)
    }
}

#undef public_5b9dd9
#undef public_5b9de2

#pragma init_seg(compiler)
extern "C" void const* const public_5b9dd9 = __AsmFindLabelExport(&internal_5b9dd0, 0x5b9dd9);
extern "C" void const* const public_5b9de2 = __AsmFindLabelExport(&internal_5b9dd0, 0x5b9de2);
