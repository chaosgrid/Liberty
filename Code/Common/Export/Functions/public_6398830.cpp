#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6377e50);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639883b _public_639883b
#define public_6398846 _public_6398846
#define public_6398851 _public_6398851

PROC_DECLARE(0x6398830, internal_6398830, public_6398830);
/* CHUNK of public_636c260 */
extern "C" NAKED register_t __cdecl internal_6398830()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x150]
        jmp public_63449d0
        public_639883b : nop
        lea ecx, ss:[ebp-0x124]
        jmp public_6377e50
        public_6398846 : nop
        lea ecx, ss:[ebp-0x124]
        jmp public_6377e50
        public_6398851 : nop
        mov eax, offset public_63b2e40
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398830)
        ASM_EXPORT_ENTRY_FIRST(0x639883b, public_639883b)
        ASM_EXPORT_ENTRY(0x6398846, public_6398846)
        ASM_EXPORT_ENTRY_LAST(0x6398851, public_6398851)
    }
}

#undef public_639883b
#undef public_6398846
#undef public_6398851

#pragma init_seg(compiler)
extern "C" void const* const public_639883b = __AsmFindLabelExport(&internal_6398830, 0x639883b);
extern "C" void const* const public_6398846 = __AsmFindLabelExport(&internal_6398830, 0x6398846);
extern "C" void const* const public_6398851 = __AsmFindLabelExport(&internal_6398830, 0x6398851);
