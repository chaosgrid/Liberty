#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c39d9 _public_5c39d9
#define public_5c39e2 _public_5c39e2
#define public_5c39eb _public_5c39eb

PROC_DECLARE(0x5c39d0, internal_5c39d0, public_5c39d0);
/* CHUNK of public_5739c0 */
extern "C" NAKED register_t __cdecl internal_5c39d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_5c7058]
        public_5c39d9 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp dword ptr ds : [public_5c7058]
        public_5c39e2 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp dword ptr ds : [public_5c7058]
        public_5c39eb : nop
        mov eax, offset public_5fd6d8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c39d0)
        ASM_EXPORT_ENTRY_FIRST(0x5c39d9, public_5c39d9)
        ASM_EXPORT_ENTRY(0x5c39e2, public_5c39e2)
        ASM_EXPORT_ENTRY_LAST(0x5c39eb, public_5c39eb)
    }
}

#undef public_5c39d9
#undef public_5c39e2
#undef public_5c39eb

#pragma init_seg(compiler)
extern "C" void const* const public_5c39d9 = __AsmFindLabelExport(&internal_5c39d0, 0x5c39d9);
extern "C" void const* const public_5c39e2 = __AsmFindLabelExport(&internal_5c39d0, 0x5c39e2);
extern "C" void const* const public_5c39eb = __AsmFindLabelExport(&internal_5c39d0, 0x5c39eb);
