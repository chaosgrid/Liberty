#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea14b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb01dc _public_6fb01dc
#define public_6fb01e7 _public_6fb01e7
#define public_6fb01f3 _public_6fb01f3
#define public_6fb01ff _public_6fb01ff

PROC_DECLARE(0x6fb01d0, internal_6fb01d0, public_6fb01d0);
/* CHUNK of public_6f75940 */
extern "C" NAKED register_t __cdecl internal_6fb01d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb3004]
        public_6fb01dc : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6ea14b0
        public_6fb01e7 : nop
        mov ecx, dword ptr ss : [ebp-0x1578]
        jmp dword ptr ds : [public_6fb330c]
        public_6fb01f3 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb330c]
        public_6fb01ff : nop
        mov eax, offset public_6fc54fc
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb01d0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb01dc, public_6fb01dc)
        ASM_EXPORT_ENTRY(0x6fb01e7, public_6fb01e7)
        ASM_EXPORT_ENTRY(0x6fb01f3, public_6fb01f3)
        ASM_EXPORT_ENTRY_LAST(0x6fb01ff, public_6fb01ff)
    }
}

#undef public_6fb01dc
#undef public_6fb01e7
#undef public_6fb01f3
#undef public_6fb01ff

#pragma init_seg(compiler)
extern "C" void const* const public_6fb01dc = __AsmFindLabelExport(&internal_6fb01d0, 0x6fb01dc);
extern "C" void const* const public_6fb01e7 = __AsmFindLabelExport(&internal_6fb01d0, 0x6fb01e7);
extern "C" void const* const public_6fb01f3 = __AsmFindLabelExport(&internal_6fb01d0, 0x6fb01f3);
extern "C" void const* const public_6fb01ff = __AsmFindLabelExport(&internal_6fb01d0, 0x6fb01ff);
