#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bb539 _public_5bb539
#define public_5bb542 _public_5bb542
#define public_5bb54a _public_5bb54a
#define public_5bb553 _public_5bb553
#define public_5bb55b _public_5bb55b

PROC_DECLARE(0x5bb530, internal_5bb530, public_5bb530);
/* CHUNK of public_468c20 */
extern "C" NAKED register_t __cdecl internal_5bb530()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_5c62c4]
        public_5bb539 : nop
        lea ecx, ss:[ebp-0x20]
        jmp dword ptr ds : [public_5c6308]
        public_5bb542 : nop
        lea ecx, ss:[ebp-0x38]
        jmp public_45eeb0
        public_5bb54a : nop
        lea ecx, ss:[ebp-0x34]
        jmp dword ptr ds : [public_5c62bc]
        public_5bb553 : nop
        lea ecx, ss:[ebp-0x38]
        jmp public_45eeb0
        public_5bb55b : nop
        mov eax, offset public_5f5710
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bb530)
        ASM_EXPORT_ENTRY_FIRST(0x5bb539, public_5bb539)
        ASM_EXPORT_ENTRY(0x5bb542, public_5bb542)
        ASM_EXPORT_ENTRY(0x5bb54a, public_5bb54a)
        ASM_EXPORT_ENTRY(0x5bb553, public_5bb553)
        ASM_EXPORT_ENTRY_LAST(0x5bb55b, public_5bb55b)
    }
}

#undef public_5bb539
#undef public_5bb542
#undef public_5bb54a
#undef public_5bb553
#undef public_5bb55b

#pragma init_seg(compiler)
extern "C" void const* const public_5bb539 = __AsmFindLabelExport(&internal_5bb530, 0x5bb539);
extern "C" void const* const public_5bb542 = __AsmFindLabelExport(&internal_5bb530, 0x5bb542);
extern "C" void const* const public_5bb54a = __AsmFindLabelExport(&internal_5bb530, 0x5bb54a);
extern "C" void const* const public_5bb553 = __AsmFindLabelExport(&internal_5bb530, 0x5bb553);
extern "C" void const* const public_5bb55b = __AsmFindLabelExport(&internal_5bb530, 0x5bb55b);
