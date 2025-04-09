#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b967c _public_5b967c
#define public_5b9688 _public_5b9688

PROC_DECLARE(0x5b9670, internal_5b9670, public_5b9670);
/* CHUNK of public_43f2e0 */
extern "C" NAKED register_t __cdecl internal_5b9670()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x22C]
        jmp dword ptr ds : [public_5c7090]
        public_5b967c : nop
        lea ecx, ss:[ebp-0x21C]
        jmp dword ptr ds : [public_5c7090]
        public_5b9688 : nop
        mov eax, offset public_5f363c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9670)
        ASM_EXPORT_ENTRY_FIRST(0x5b967c, public_5b967c)
        ASM_EXPORT_ENTRY_LAST(0x5b9688, public_5b9688)
    }
}

#undef public_5b967c
#undef public_5b9688

#pragma init_seg(compiler)
extern "C" void const* const public_5b967c = __AsmFindLabelExport(&internal_5b9670, 0x5b967c);
extern "C" void const* const public_5b9688 = __AsmFindLabelExport(&internal_5b9670, 0x5b9688);
