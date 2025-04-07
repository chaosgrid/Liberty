#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6289e50);
CLANG_FORWARD_PROC_SYMBOL(public_6289e80);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63934cb _public_63934cb
#define public_63934d6 _public_63934d6
#define public_63934e1 _public_63934e1

PROC_DECLARE(0x63934c0, internal_63934c0, public_63934c0);
/* CHUNK of public_6289c90 */
extern "C" NAKED register_t __cdecl internal_63934c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x206C]
        jmp public_6289e50
        public_63934cb : nop
        lea ecx, ss:[ebp-0x206C]
        jmp public_6289e80
        public_63934d6 : nop
        lea ecx, ss:[ebp-0x206C]
        jmp public_6289e50
        public_63934e1 : nop
        mov eax, offset public_63ac600
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63934c0)
        ASM_EXPORT_ENTRY_FIRST(0x63934cb, public_63934cb)
        ASM_EXPORT_ENTRY(0x63934d6, public_63934d6)
        ASM_EXPORT_ENTRY_LAST(0x63934e1, public_63934e1)
    }
}

#undef public_63934cb
#undef public_63934d6
#undef public_63934e1

#pragma init_seg(compiler)
extern "C" void const* const public_63934cb = __AsmFindLabelExport(&internal_63934c0, 0x63934cb);
extern "C" void const* const public_63934d6 = __AsmFindLabelExport(&internal_63934c0, 0x63934d6);
extern "C" void const* const public_63934e1 = __AsmFindLabelExport(&internal_63934c0, 0x63934e1);
