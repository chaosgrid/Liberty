#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea14b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7d30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa96ab _public_6fa96ab
#define public_6fa96b7 _public_6fa96b7
#define public_6fa96c2 _public_6fa96c2
#define public_6fa96ce _public_6fa96ce
#define public_6fa96da _public_6fa96da

PROC_DECLARE(0x6fa96a0, internal_6fa96a0, public_6fa96a0);
/* CHUNK of public_6ea46e0 */
extern "C" NAKED register_t __cdecl internal_6fa96a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1578]
        jmp public_6eb7d30
        public_6fa96ab : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb3004]
        public_6fa96b7 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6ea14b0
        public_6fa96c2 : nop
        mov ecx, dword ptr ss : [ebp-0x157C]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa96ce : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa96da : nop
        mov eax, offset public_6fbda24
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa96a0)
        ASM_EXPORT_ENTRY_FIRST(0x6fa96ab, public_6fa96ab)
        ASM_EXPORT_ENTRY(0x6fa96b7, public_6fa96b7)
        ASM_EXPORT_ENTRY(0x6fa96c2, public_6fa96c2)
        ASM_EXPORT_ENTRY(0x6fa96ce, public_6fa96ce)
        ASM_EXPORT_ENTRY_LAST(0x6fa96da, public_6fa96da)
    }
}

#undef public_6fa96ab
#undef public_6fa96b7
#undef public_6fa96c2
#undef public_6fa96ce
#undef public_6fa96da

#pragma init_seg(compiler)
extern "C" void const* const public_6fa96ab = __AsmFindLabelExport(&internal_6fa96a0, 0x6fa96ab);
extern "C" void const* const public_6fa96b7 = __AsmFindLabelExport(&internal_6fa96a0, 0x6fa96b7);
extern "C" void const* const public_6fa96c2 = __AsmFindLabelExport(&internal_6fa96a0, 0x6fa96c2);
extern "C" void const* const public_6fa96ce = __AsmFindLabelExport(&internal_6fa96a0, 0x6fa96ce);
extern "C" void const* const public_6fa96da = __AsmFindLabelExport(&internal_6fa96a0, 0x6fa96da);
