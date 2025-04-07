#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea14b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7d30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa951b _public_6fa951b
#define public_6fa9527 _public_6fa9527
#define public_6fa9532 _public_6fa9532
#define public_6fa953e _public_6fa953e
#define public_6fa954a _public_6fa954a

PROC_DECLARE(0x6fa9510, internal_6fa9510, public_6fa9510);
/* CHUNK of public_6ea3060 */
extern "C" NAKED register_t __cdecl internal_6fa9510()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1578]
        jmp public_6eb7d30
        public_6fa951b : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb3004]
        public_6fa9527 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6ea14b0
        public_6fa9532 : nop
        mov ecx, dword ptr ss : [ebp-0x157C]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa953e : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa954a : nop
        mov eax, offset public_6fbd8d0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9510)
        ASM_EXPORT_ENTRY_FIRST(0x6fa951b, public_6fa951b)
        ASM_EXPORT_ENTRY(0x6fa9527, public_6fa9527)
        ASM_EXPORT_ENTRY(0x6fa9532, public_6fa9532)
        ASM_EXPORT_ENTRY(0x6fa953e, public_6fa953e)
        ASM_EXPORT_ENTRY_LAST(0x6fa954a, public_6fa954a)
    }
}

#undef public_6fa951b
#undef public_6fa9527
#undef public_6fa9532
#undef public_6fa953e
#undef public_6fa954a

#pragma init_seg(compiler)
extern "C" void const* const public_6fa951b = __AsmFindLabelExport(&internal_6fa9510, 0x6fa951b);
extern "C" void const* const public_6fa9527 = __AsmFindLabelExport(&internal_6fa9510, 0x6fa9527);
extern "C" void const* const public_6fa9532 = __AsmFindLabelExport(&internal_6fa9510, 0x6fa9532);
extern "C" void const* const public_6fa953e = __AsmFindLabelExport(&internal_6fa9510, 0x6fa953e);
extern "C" void const* const public_6fa954a = __AsmFindLabelExport(&internal_6fa9510, 0x6fa954a);
