#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed5930);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f74ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb010b _public_6fb010b
#define public_6fb0116 _public_6fb0116
#define public_6fb0121 _public_6fb0121

PROC_DECLARE(0x6fb0100, internal_6fb0100, public_6fb0100);
/* CHUNK of public_6f748a0 */
extern "C" NAKED register_t __cdecl internal_6fb0100()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x97C]
        jmp public_6f28e10
        public_6fb010b : nop
        lea ecx, ss:[ebp-0x9C4]
        jmp public_6f74ac0
        public_6fb0116 : nop
        lea ecx, ss:[ebp-0x554]
        jmp public_6ed5930
        public_6fb0121 : nop
        mov eax, offset public_6fc5444
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0100)
        ASM_EXPORT_ENTRY_FIRST(0x6fb010b, public_6fb010b)
        ASM_EXPORT_ENTRY(0x6fb0116, public_6fb0116)
        ASM_EXPORT_ENTRY_LAST(0x6fb0121, public_6fb0121)
    }
}

#undef public_6fb010b
#undef public_6fb0116
#undef public_6fb0121

#pragma init_seg(compiler)
extern "C" void const* const public_6fb010b = __AsmFindLabelExport(&internal_6fb0100, 0x6fb010b);
extern "C" void const* const public_6fb0116 = __AsmFindLabelExport(&internal_6fb0100, 0x6fb0116);
extern "C" void const* const public_6fb0121 = __AsmFindLabelExport(&internal_6fb0100, 0x6fb0121);
