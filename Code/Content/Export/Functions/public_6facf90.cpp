#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6facf98 _public_6facf98
#define public_6facfa0 _public_6facfa0

PROC_DECLARE(0x6facf90, internal_6facf90, public_6facf90);
/* CHUNK of public_6f07950 */
extern "C" NAKED register_t __cdecl internal_6facf90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6facf98 : nop
        lea ecx, ss:[ebp-0x24]
        jmp public_6f28e10
        public_6facfa0 : nop
        mov eax, offset public_6fc1d5c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6facf90)
        ASM_EXPORT_ENTRY_FIRST(0x6facf98, public_6facf98)
        ASM_EXPORT_ENTRY_LAST(0x6facfa0, public_6facfa0)
    }
}

#undef public_6facf98
#undef public_6facfa0

#pragma init_seg(compiler)
extern "C" void const* const public_6facf98 = __AsmFindLabelExport(&internal_6facf90, 0x6facf98);
extern "C" void const* const public_6facfa0 = __AsmFindLabelExport(&internal_6facf90, 0x6facfa0);
