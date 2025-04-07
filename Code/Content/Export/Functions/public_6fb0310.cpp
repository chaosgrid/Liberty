#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f305d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb031b _public_6fb031b
#define public_6fb0326 _public_6fb0326
#define public_6fb0331 _public_6fb0331
#define public_6fb033c _public_6fb033c
#define public_6fb0347 _public_6fb0347
#define public_6fb0352 _public_6fb0352
#define public_6fb035d _public_6fb035d

PROC_DECLARE(0x6fb0310, internal_6fb0310, public_6fb0310);
/* CHUNK of public_6f76b10 */
extern "C" NAKED register_t __cdecl internal_6fb0310()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x224]
        jmp public_6eec8d0
        public_6fb031b : nop
        lea ecx, ss:[ebp-0x1CC]
        jmp public_6eec8d0
        public_6fb0326 : nop
        lea ecx, ss:[ebp-0x1BC]
        jmp public_6eec8d0
        public_6fb0331 : nop
        lea ecx, ss:[ebp-0x224]
        jmp public_6f305d0
        public_6fb033c : nop
        lea ecx, ss:[ebp-0x224]
        jmp public_6eec8d0
        public_6fb0347 : nop
        lea ecx, ss:[ebp-0x1CC]
        jmp public_6eec8d0
        public_6fb0352 : nop
        lea ecx, ss:[ebp-0x1BC]
        jmp public_6eec8d0
        public_6fb035d : nop
        mov eax, offset public_6fc562c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0310)
        ASM_EXPORT_ENTRY_FIRST(0x6fb031b, public_6fb031b)
        ASM_EXPORT_ENTRY(0x6fb0326, public_6fb0326)
        ASM_EXPORT_ENTRY(0x6fb0331, public_6fb0331)
        ASM_EXPORT_ENTRY(0x6fb033c, public_6fb033c)
        ASM_EXPORT_ENTRY(0x6fb0347, public_6fb0347)
        ASM_EXPORT_ENTRY(0x6fb0352, public_6fb0352)
        ASM_EXPORT_ENTRY_LAST(0x6fb035d, public_6fb035d)
    }
}

#undef public_6fb031b
#undef public_6fb0326
#undef public_6fb0331
#undef public_6fb033c
#undef public_6fb0347
#undef public_6fb0352
#undef public_6fb035d

#pragma init_seg(compiler)
extern "C" void const* const public_6fb031b = __AsmFindLabelExport(&internal_6fb0310, 0x6fb031b);
extern "C" void const* const public_6fb0326 = __AsmFindLabelExport(&internal_6fb0310, 0x6fb0326);
extern "C" void const* const public_6fb0331 = __AsmFindLabelExport(&internal_6fb0310, 0x6fb0331);
extern "C" void const* const public_6fb033c = __AsmFindLabelExport(&internal_6fb0310, 0x6fb033c);
extern "C" void const* const public_6fb0347 = __AsmFindLabelExport(&internal_6fb0310, 0x6fb0347);
extern "C" void const* const public_6fb0352 = __AsmFindLabelExport(&internal_6fb0310, 0x6fb0352);
extern "C" void const* const public_6fb035d = __AsmFindLabelExport(&internal_6fb0310, 0x6fb035d);
