#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40edf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c531c _public_5c531c
#define public_5c5328 _public_5c5328
#define public_5c5334 _public_5c5334
#define public_5c533f _public_5c533f
#define public_5c534b _public_5c534b
#define public_5c5357 _public_5c5357

PROC_DECLARE(0x5c5310, internal_5c5310, public_5c5310);
/* CHUNK of public_5a82d0 */
extern "C" NAKED register_t __cdecl internal_5c5310()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c6048]
        public_5c531c : nop
        lea ecx, ss:[ebp-0x15A8]
        jmp dword ptr ds : [public_5c7058]
        public_5c5328 : nop
        lea ecx, ss:[ebp-0x1598]
        jmp dword ptr ds : [public_5c7058]
        public_5c5334 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_40edf0
        public_5c533f : nop
        mov ecx, dword ptr ss : [ebp-0x1578]
        jmp dword ptr ds : [public_5c7090]
        public_5c534b : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_5c7090]
        public_5c5357 : nop
        mov eax, offset public_5ff1e4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c5310)
        ASM_EXPORT_ENTRY_FIRST(0x5c531c, public_5c531c)
        ASM_EXPORT_ENTRY(0x5c5328, public_5c5328)
        ASM_EXPORT_ENTRY(0x5c5334, public_5c5334)
        ASM_EXPORT_ENTRY(0x5c533f, public_5c533f)
        ASM_EXPORT_ENTRY(0x5c534b, public_5c534b)
        ASM_EXPORT_ENTRY_LAST(0x5c5357, public_5c5357)
    }
}

#undef public_5c531c
#undef public_5c5328
#undef public_5c5334
#undef public_5c533f
#undef public_5c534b
#undef public_5c5357

#pragma init_seg(compiler)
extern "C" void const* const public_5c531c = __AsmFindLabelExport(&internal_5c5310, 0x5c531c);
extern "C" void const* const public_5c5328 = __AsmFindLabelExport(&internal_5c5310, 0x5c5328);
extern "C" void const* const public_5c5334 = __AsmFindLabelExport(&internal_5c5310, 0x5c5334);
extern "C" void const* const public_5c533f = __AsmFindLabelExport(&internal_5c5310, 0x5c533f);
extern "C" void const* const public_5c534b = __AsmFindLabelExport(&internal_5c5310, 0x5c534b);
extern "C" void const* const public_5c5357 = __AsmFindLabelExport(&internal_5c5310, 0x5c5357);
