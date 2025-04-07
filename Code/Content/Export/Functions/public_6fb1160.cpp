#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f867a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb1168 _public_6fb1168
#define public_6fb1170 _public_6fb1170
#define public_6fb1178 _public_6fb1178
#define public_6fb1180 _public_6fb1180

PROC_DECLARE(0x6fb1160, internal_6fb1160, public_6fb1160);
/* CHUNK of public_6f8ab10 */
extern "C" NAKED register_t __cdecl internal_6fb1160()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2C]
        jmp public_6f867a0
        public_6fb1168 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp public_6f867a0
        public_6fb1170 : nop
        lea ecx, ss:[ebp-0x4C]
        jmp public_6f867a0
        public_6fb1178 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_6f867a0
        public_6fb1180 : nop
        mov eax, offset public_6fc6698
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1160)
        ASM_EXPORT_ENTRY_FIRST(0x6fb1168, public_6fb1168)
        ASM_EXPORT_ENTRY(0x6fb1170, public_6fb1170)
        ASM_EXPORT_ENTRY(0x6fb1178, public_6fb1178)
        ASM_EXPORT_ENTRY_LAST(0x6fb1180, public_6fb1180)
    }
}

#undef public_6fb1168
#undef public_6fb1170
#undef public_6fb1178
#undef public_6fb1180

#pragma init_seg(compiler)
extern "C" void const* const public_6fb1168 = __AsmFindLabelExport(&internal_6fb1160, 0x6fb1168);
extern "C" void const* const public_6fb1170 = __AsmFindLabelExport(&internal_6fb1160, 0x6fb1170);
extern "C" void const* const public_6fb1178 = __AsmFindLabelExport(&internal_6fb1160, 0x6fb1178);
extern "C" void const* const public_6fb1180 = __AsmFindLabelExport(&internal_6fb1160, 0x6fb1180);
