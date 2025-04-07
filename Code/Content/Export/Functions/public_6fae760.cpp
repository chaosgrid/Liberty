#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea14b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2c6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fae76b _public_6fae76b
#define public_6fae777 _public_6fae777
#define public_6fae782 _public_6fae782
#define public_6fae78e _public_6fae78e
#define public_6fae79a _public_6fae79a

PROC_DECLARE(0x6fae760, internal_6fae760, public_6fae760);
/* CHUNK of public_6f2bf30 */
extern "C" NAKED register_t __cdecl internal_6fae760()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x15C8]
        jmp public_6f2c6a0
        public_6fae76b : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb3004]
        public_6fae777 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6ea14b0
        public_6fae782 : nop
        mov ecx, dword ptr ss : [ebp-0x15B0]
        jmp dword ptr ds : [public_6fb330c]
        public_6fae78e : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb330c]
        public_6fae79a : nop
        mov eax, offset public_6fc3654
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fae760)
        ASM_EXPORT_ENTRY_FIRST(0x6fae76b, public_6fae76b)
        ASM_EXPORT_ENTRY(0x6fae777, public_6fae777)
        ASM_EXPORT_ENTRY(0x6fae782, public_6fae782)
        ASM_EXPORT_ENTRY(0x6fae78e, public_6fae78e)
        ASM_EXPORT_ENTRY_LAST(0x6fae79a, public_6fae79a)
    }
}

#undef public_6fae76b
#undef public_6fae777
#undef public_6fae782
#undef public_6fae78e
#undef public_6fae79a

#pragma init_seg(compiler)
extern "C" void const* const public_6fae76b = __AsmFindLabelExport(&internal_6fae760, 0x6fae76b);
extern "C" void const* const public_6fae777 = __AsmFindLabelExport(&internal_6fae760, 0x6fae777);
extern "C" void const* const public_6fae782 = __AsmFindLabelExport(&internal_6fae760, 0x6fae782);
extern "C" void const* const public_6fae78e = __AsmFindLabelExport(&internal_6fae760, 0x6fae78e);
extern "C" void const* const public_6fae79a = __AsmFindLabelExport(&internal_6fae760, 0x6fae79a);
