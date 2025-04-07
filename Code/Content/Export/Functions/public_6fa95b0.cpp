#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea14b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7d30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa95bb _public_6fa95bb
#define public_6fa95c7 _public_6fa95c7
#define public_6fa95d2 _public_6fa95d2
#define public_6fa95de _public_6fa95de
#define public_6fa95ea _public_6fa95ea

PROC_DECLARE(0x6fa95b0, internal_6fa95b0, public_6fa95b0);
/* CHUNK of public_6ea3960 */
extern "C" NAKED register_t __cdecl internal_6fa95b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1578]
        jmp public_6eb7d30
        public_6fa95bb : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb3004]
        public_6fa95c7 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6ea14b0
        public_6fa95d2 : nop
        mov ecx, dword ptr ss : [ebp-0x157C]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa95de : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa95ea : nop
        mov eax, offset public_6fbd958
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa95b0)
        ASM_EXPORT_ENTRY_FIRST(0x6fa95bb, public_6fa95bb)
        ASM_EXPORT_ENTRY(0x6fa95c7, public_6fa95c7)
        ASM_EXPORT_ENTRY(0x6fa95d2, public_6fa95d2)
        ASM_EXPORT_ENTRY(0x6fa95de, public_6fa95de)
        ASM_EXPORT_ENTRY_LAST(0x6fa95ea, public_6fa95ea)
    }
}

#undef public_6fa95bb
#undef public_6fa95c7
#undef public_6fa95d2
#undef public_6fa95de
#undef public_6fa95ea

#pragma init_seg(compiler)
extern "C" void const* const public_6fa95bb = __AsmFindLabelExport(&internal_6fa95b0, 0x6fa95bb);
extern "C" void const* const public_6fa95c7 = __AsmFindLabelExport(&internal_6fa95b0, 0x6fa95c7);
extern "C" void const* const public_6fa95d2 = __AsmFindLabelExport(&internal_6fa95b0, 0x6fa95d2);
extern "C" void const* const public_6fa95de = __AsmFindLabelExport(&internal_6fa95b0, 0x6fa95de);
extern "C" void const* const public_6fa95ea = __AsmFindLabelExport(&internal_6fa95b0, 0x6fa95ea);
