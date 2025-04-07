#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f867a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb112b _public_6fb112b
#define public_6fb1133 _public_6fb1133
#define public_6fb113e _public_6fb113e
#define public_6fb1149 _public_6fb1149

PROC_DECLARE(0x6fb1120, internal_6fb1120, public_6fb1120);
/* CHUNK of public_6f8a820 */
extern "C" NAKED register_t __cdecl internal_6fb1120()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xC0]
        jmp public_6f867a0
        public_6fb112b : nop
        lea ecx, ss:[ebp-0x70]
        jmp public_6ea8cc0
        public_6fb1133 : nop
        lea ecx, ss:[ebp-0xE0]
        jmp public_6f867a0
        public_6fb113e : nop
        lea ecx, ss:[ebp-0xD0]
        jmp public_6f867a0
        public_6fb1149 : nop
        mov eax, offset public_6fc665c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1120)
        ASM_EXPORT_ENTRY_FIRST(0x6fb112b, public_6fb112b)
        ASM_EXPORT_ENTRY(0x6fb1133, public_6fb1133)
        ASM_EXPORT_ENTRY(0x6fb113e, public_6fb113e)
        ASM_EXPORT_ENTRY_LAST(0x6fb1149, public_6fb1149)
    }
}

#undef public_6fb112b
#undef public_6fb1133
#undef public_6fb113e
#undef public_6fb1149

#pragma init_seg(compiler)
extern "C" void const* const public_6fb112b = __AsmFindLabelExport(&internal_6fb1120, 0x6fb112b);
extern "C" void const* const public_6fb1133 = __AsmFindLabelExport(&internal_6fb1120, 0x6fb1133);
extern "C" void const* const public_6fb113e = __AsmFindLabelExport(&internal_6fb1120, 0x6fb113e);
extern "C" void const* const public_6fb1149 = __AsmFindLabelExport(&internal_6fb1120, 0x6fb1149);
