#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be839 _public_5be839

PROC_DECLARE(0x5be830, internal_5be830, public_5be830);
/* CHUNK of public_4e45b0 */
extern "C" NAKED register_t __cdecl internal_5be830()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_5c7090]
        public_5be839 : nop
        mov eax, offset public_5f8a04
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be830)
        ASM_EXPORT_ENTRY_SINGLE(0x5be839, public_5be839)
    }
}

#undef public_5be839

#pragma init_seg(compiler)
extern "C" void const* const public_5be839 = __AsmFindLabelExport(&internal_5be830, 0x5be839);
