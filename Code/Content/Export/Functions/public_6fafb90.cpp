#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafb98 _public_6fafb98
#define public_6fafba0 _public_6fafba0
#define public_6fafba8 _public_6fafba8
#define public_6fafbb3 _public_6fafbb3

PROC_DECLARE(0x6fafb90, internal_6fafb90, public_6fafb90);
/* CHUNK of public_6f64800 */
extern "C" NAKED register_t __cdecl internal_6fafb90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x70]
        jmp public_6eec8d0
        public_6fafb98 : nop
        lea ecx, ss:[ebp-0x60]
        jmp public_6eec8d0
        public_6fafba0 : nop
        lea ecx, ss:[ebp-0x80]
        jmp public_6eec8d0
        public_6fafba8 : nop
        lea ecx, ss:[ebp-0x84]
        jmp public_6f28e10
        public_6fafbb3 : nop
        mov eax, offset public_6fc4c4c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafb90)
        ASM_EXPORT_ENTRY_FIRST(0x6fafb98, public_6fafb98)
        ASM_EXPORT_ENTRY(0x6fafba0, public_6fafba0)
        ASM_EXPORT_ENTRY(0x6fafba8, public_6fafba8)
        ASM_EXPORT_ENTRY_LAST(0x6fafbb3, public_6fafbb3)
    }
}

#undef public_6fafb98
#undef public_6fafba0
#undef public_6fafba8
#undef public_6fafbb3

#pragma init_seg(compiler)
extern "C" void const* const public_6fafb98 = __AsmFindLabelExport(&internal_6fafb90, 0x6fafb98);
extern "C" void const* const public_6fafba0 = __AsmFindLabelExport(&internal_6fafb90, 0x6fafba0);
extern "C" void const* const public_6fafba8 = __AsmFindLabelExport(&internal_6fafb90, 0x6fafba8);
extern "C" void const* const public_6fafbb3 = __AsmFindLabelExport(&internal_6fafb90, 0x6fafbb3);
