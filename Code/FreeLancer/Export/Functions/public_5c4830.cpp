#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58e360);
CLANG_FORWARD_PROC_SYMBOL(public_58e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4839 _public_5c4839
#define public_5c4841 _public_5c4841
#define public_5c484a _public_5c484a
#define public_5c4852 _public_5c4852

PROC_DECLARE(0x5c4830, internal_5c4830, public_5c4830);
/* CHUNK of public_58e000 */
extern "C" NAKED register_t __cdecl internal_5c4830()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_5c62c4]
        public_5c4839 : nop
        lea ecx, ss:[ebp-0x28]
        jmp public_58e360
        public_5c4841 : nop
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_5c62c4]
        public_5c484a : nop
        lea ecx, ss:[ebp-0x34]
        jmp public_58e430
        public_5c4852 : nop
        mov eax, offset public_5fe4b8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4830)
        ASM_EXPORT_ENTRY_FIRST(0x5c4839, public_5c4839)
        ASM_EXPORT_ENTRY(0x5c4841, public_5c4841)
        ASM_EXPORT_ENTRY(0x5c484a, public_5c484a)
        ASM_EXPORT_ENTRY_LAST(0x5c4852, public_5c4852)
    }
}

#undef public_5c4839
#undef public_5c4841
#undef public_5c484a
#undef public_5c4852

#pragma init_seg(compiler)
extern "C" void const* const public_5c4839 = __AsmFindLabelExport(&internal_5c4830, 0x5c4839);
extern "C" void const* const public_5c4841 = __AsmFindLabelExport(&internal_5c4830, 0x5c4841);
extern "C" void const* const public_5c484a = __AsmFindLabelExport(&internal_5c4830, 0x5c484a);
extern "C" void const* const public_5c4852 = __AsmFindLabelExport(&internal_5c4830, 0x5c4852);
