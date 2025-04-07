#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea14b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac9bc _public_6fac9bc
#define public_6fac9c7 _public_6fac9c7
#define public_6fac9d3 _public_6fac9d3
#define public_6fac9df _public_6fac9df

PROC_DECLARE(0x6fac9b0, internal_6fac9b0, public_6fac9b0);
/* CHUNK of public_6efe300 */
extern "C" NAKED register_t __cdecl internal_6fac9b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb3004]
        public_6fac9bc : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6ea14b0
        public_6fac9c7 : nop
        mov ecx, dword ptr ss : [ebp-0x1578]
        jmp dword ptr ds : [public_6fb330c]
        public_6fac9d3 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb330c]
        public_6fac9df : nop
        mov eax, offset public_6fc1658
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac9b0)
        ASM_EXPORT_ENTRY_FIRST(0x6fac9bc, public_6fac9bc)
        ASM_EXPORT_ENTRY(0x6fac9c7, public_6fac9c7)
        ASM_EXPORT_ENTRY(0x6fac9d3, public_6fac9d3)
        ASM_EXPORT_ENTRY_LAST(0x6fac9df, public_6fac9df)
    }
}

#undef public_6fac9bc
#undef public_6fac9c7
#undef public_6fac9d3
#undef public_6fac9df

#pragma init_seg(compiler)
extern "C" void const* const public_6fac9bc = __AsmFindLabelExport(&internal_6fac9b0, 0x6fac9bc);
extern "C" void const* const public_6fac9c7 = __AsmFindLabelExport(&internal_6fac9b0, 0x6fac9c7);
extern "C" void const* const public_6fac9d3 = __AsmFindLabelExport(&internal_6fac9b0, 0x6fac9d3);
extern "C" void const* const public_6fac9df = __AsmFindLabelExport(&internal_6fac9b0, 0x6fac9df);
