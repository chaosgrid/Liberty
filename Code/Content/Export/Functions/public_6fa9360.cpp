#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea14b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7d30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa936b _public_6fa936b
#define public_6fa9377 _public_6fa9377
#define public_6fa9382 _public_6fa9382
#define public_6fa938e _public_6fa938e
#define public_6fa939a _public_6fa939a

PROC_DECLARE(0x6fa9360, internal_6fa9360, public_6fa9360);
/* CHUNK of public_6ea1220 */
extern "C" NAKED register_t __cdecl internal_6fa9360()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1578]
        jmp public_6eb7d30
        public_6fa936b : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb3004]
        public_6fa9377 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6ea14b0
        public_6fa9382 : nop
        mov ecx, dword ptr ss : [ebp-0x157C]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa938e : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa939a : nop
        mov eax, offset public_6fbd758
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9360)
        ASM_EXPORT_ENTRY_FIRST(0x6fa936b, public_6fa936b)
        ASM_EXPORT_ENTRY(0x6fa9377, public_6fa9377)
        ASM_EXPORT_ENTRY(0x6fa9382, public_6fa9382)
        ASM_EXPORT_ENTRY(0x6fa938e, public_6fa938e)
        ASM_EXPORT_ENTRY_LAST(0x6fa939a, public_6fa939a)
    }
}

#undef public_6fa936b
#undef public_6fa9377
#undef public_6fa9382
#undef public_6fa938e
#undef public_6fa939a

#pragma init_seg(compiler)
extern "C" void const* const public_6fa936b = __AsmFindLabelExport(&internal_6fa9360, 0x6fa936b);
extern "C" void const* const public_6fa9377 = __AsmFindLabelExport(&internal_6fa9360, 0x6fa9377);
extern "C" void const* const public_6fa9382 = __AsmFindLabelExport(&internal_6fa9360, 0x6fa9382);
extern "C" void const* const public_6fa938e = __AsmFindLabelExport(&internal_6fa9360, 0x6fa938e);
extern "C" void const* const public_6fa939a = __AsmFindLabelExport(&internal_6fa9360, 0x6fa939a);
