#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6225910);
CLANG_FORWARD_PROC_SYMBOL(public_6225920);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248e88 _public_6248e88
#define public_6248e90 _public_6248e90
#define public_6248e98 _public_6248e98
#define public_6248ea0 _public_6248ea0

PROC_DECLARE(0x6248e80, internal_6248e80, public_6248e80);
/* CHUNK of public_6225470 */
extern "C" NAKED register_t __cdecl internal_6248e80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2C]
        jmp public_6225920
        public_6248e88 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp public_6225910
        public_6248e90 : nop
        lea ecx, ss:[ebp-0x30]
        jmp public_6225920
        public_6248e98 : nop
        lea ecx, ss:[ebp-0x40]
        jmp public_6225910
        public_6248ea0 : nop
        mov eax, offset public_6251dcc
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248e80)
        ASM_EXPORT_ENTRY_FIRST(0x6248e88, public_6248e88)
        ASM_EXPORT_ENTRY(0x6248e90, public_6248e90)
        ASM_EXPORT_ENTRY(0x6248e98, public_6248e98)
        ASM_EXPORT_ENTRY_LAST(0x6248ea0, public_6248ea0)
    }
}

#undef public_6248e88
#undef public_6248e90
#undef public_6248e98
#undef public_6248ea0

#pragma init_seg(compiler)
extern "C" void const* const public_6248e88 = __AsmFindLabelExport(&internal_6248e80, 0x6248e88);
extern "C" void const* const public_6248e90 = __AsmFindLabelExport(&internal_6248e80, 0x6248e90);
extern "C" void const* const public_6248e98 = __AsmFindLabelExport(&internal_6248e80, 0x6248e98);
extern "C" void const* const public_6248ea0 = __AsmFindLabelExport(&internal_6248e80, 0x6248ea0);
