#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be81b _public_5be81b
#define public_5be826 _public_5be826

PROC_DECLARE(0x5be810, internal_5be810, public_5be810);
/* CHUNK of public_4e3f80 */
extern "C" NAKED register_t __cdecl internal_5be810()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x820]
        jmp public_444e20
        public_5be81b : nop
        lea ecx, ss:[ebp-0x818]
        jmp public_444e20
        public_5be826 : nop
        mov eax, offset public_5f89e0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be810)
        ASM_EXPORT_ENTRY_FIRST(0x5be81b, public_5be81b)
        ASM_EXPORT_ENTRY_LAST(0x5be826, public_5be826)
    }
}

#undef public_5be81b
#undef public_5be826

#pragma init_seg(compiler)
extern "C" void const* const public_5be81b = __AsmFindLabelExport(&internal_5be810, 0x5be81b);
extern "C" void const* const public_5be826 = __AsmFindLabelExport(&internal_5be810, 0x5be826);
