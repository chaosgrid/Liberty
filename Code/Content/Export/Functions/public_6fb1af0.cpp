#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f85550);
CLANG_FORWARD_PROC_SYMBOL(public_6f99890);
CLANG_FORWARD_PROC_SYMBOL(public_6f9e6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb1afb _public_6fb1afb
#define public_6fb1b03 _public_6fb1b03
#define public_6fb1b0b _public_6fb1b0b

PROC_DECLARE(0x6fb1af0, internal_6fb1af0, public_6fb1af0);
/* CHUNK of public_6f9e1f0 */
extern "C" NAKED register_t __cdecl internal_6fb1af0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x90]
        jmp public_6f9e6a0
        public_6fb1afb : nop
        lea ecx, ss:[ebp-0x3C]
        jmp public_6f85550
        public_6fb1b03 : nop
        lea ecx, ss:[ebp-0x70]
        jmp public_6f99890
        public_6fb1b0b : nop
        mov eax, offset public_6fc7174
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1af0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb1afb, public_6fb1afb)
        ASM_EXPORT_ENTRY(0x6fb1b03, public_6fb1b03)
        ASM_EXPORT_ENTRY_LAST(0x6fb1b0b, public_6fb1b0b)
    }
}

#undef public_6fb1afb
#undef public_6fb1b03
#undef public_6fb1b0b

#pragma init_seg(compiler)
extern "C" void const* const public_6fb1afb = __AsmFindLabelExport(&internal_6fb1af0, 0x6fb1afb);
extern "C" void const* const public_6fb1b03 = __AsmFindLabelExport(&internal_6fb1af0, 0x6fb1b03);
extern "C" void const* const public_6fb1b0b = __AsmFindLabelExport(&internal_6fb1af0, 0x6fb1b0b);
