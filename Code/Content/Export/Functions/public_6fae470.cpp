#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f29560);
CLANG_FORWARD_PROC_SYMBOL(public_6f29630);
CLANG_FORWARD_PROC_SYMBOL(public_6f29680);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fae478 _public_6fae478
#define public_6fae480 _public_6fae480
#define public_6fae488 _public_6fae488
#define public_6fae490 _public_6fae490

PROC_DECLARE(0x6fae470, internal_6fae470, public_6fae470);
/* CHUNK of public_6f29320 */
extern "C" NAKED register_t __cdecl internal_6fae470()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x44]
        jmp public_6f15350
        public_6fae478 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_6f29560
        public_6fae480 : nop
        lea ecx, ss:[ebp-0x38]
        jmp public_6f29630
        public_6fae488 : nop
        lea ecx, ss:[ebp-0x38]
        jmp public_6f29680
        public_6fae490 : nop
        mov eax, offset public_6fc33e8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fae470)
        ASM_EXPORT_ENTRY_FIRST(0x6fae478, public_6fae478)
        ASM_EXPORT_ENTRY(0x6fae480, public_6fae480)
        ASM_EXPORT_ENTRY(0x6fae488, public_6fae488)
        ASM_EXPORT_ENTRY_LAST(0x6fae490, public_6fae490)
    }
}

#undef public_6fae478
#undef public_6fae480
#undef public_6fae488
#undef public_6fae490

#pragma init_seg(compiler)
extern "C" void const* const public_6fae478 = __AsmFindLabelExport(&internal_6fae470, 0x6fae478);
extern "C" void const* const public_6fae480 = __AsmFindLabelExport(&internal_6fae470, 0x6fae480);
extern "C" void const* const public_6fae488 = __AsmFindLabelExport(&internal_6fae470, 0x6fae488);
extern "C" void const* const public_6fae490 = __AsmFindLabelExport(&internal_6fae470, 0x6fae490);
