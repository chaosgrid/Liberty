#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea14b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7d30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa965b _public_6fa965b
#define public_6fa9667 _public_6fa9667
#define public_6fa9672 _public_6fa9672
#define public_6fa967e _public_6fa967e
#define public_6fa968a _public_6fa968a

PROC_DECLARE(0x6fa9650, internal_6fa9650, public_6fa9650);
/* CHUNK of public_6ea4260 */
extern "C" NAKED register_t __cdecl internal_6fa9650()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1578]
        jmp public_6eb7d30
        public_6fa965b : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb3004]
        public_6fa9667 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6ea14b0
        public_6fa9672 : nop
        mov ecx, dword ptr ss : [ebp-0x157C]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa967e : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa968a : nop
        mov eax, offset public_6fbd9e0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9650)
        ASM_EXPORT_ENTRY_FIRST(0x6fa965b, public_6fa965b)
        ASM_EXPORT_ENTRY(0x6fa9667, public_6fa9667)
        ASM_EXPORT_ENTRY(0x6fa9672, public_6fa9672)
        ASM_EXPORT_ENTRY(0x6fa967e, public_6fa967e)
        ASM_EXPORT_ENTRY_LAST(0x6fa968a, public_6fa968a)
    }
}

#undef public_6fa965b
#undef public_6fa9667
#undef public_6fa9672
#undef public_6fa967e
#undef public_6fa968a

#pragma init_seg(compiler)
extern "C" void const* const public_6fa965b = __AsmFindLabelExport(&internal_6fa9650, 0x6fa965b);
extern "C" void const* const public_6fa9667 = __AsmFindLabelExport(&internal_6fa9650, 0x6fa9667);
extern "C" void const* const public_6fa9672 = __AsmFindLabelExport(&internal_6fa9650, 0x6fa9672);
extern "C" void const* const public_6fa967e = __AsmFindLabelExport(&internal_6fa9650, 0x6fa967e);
extern "C" void const* const public_6fa968a = __AsmFindLabelExport(&internal_6fa9650, 0x6fa968a);
