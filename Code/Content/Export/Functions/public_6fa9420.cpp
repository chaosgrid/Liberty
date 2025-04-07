#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea14b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7d30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa942b _public_6fa942b
#define public_6fa9437 _public_6fa9437
#define public_6fa9442 _public_6fa9442
#define public_6fa944e _public_6fa944e
#define public_6fa945a _public_6fa945a

PROC_DECLARE(0x6fa9420, internal_6fa9420, public_6fa9420);
/* CHUNK of public_6ea1f50 */
extern "C" NAKED register_t __cdecl internal_6fa9420()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1578]
        jmp public_6eb7d30
        public_6fa942b : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb3004]
        public_6fa9437 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6ea14b0
        public_6fa9442 : nop
        mov ecx, dword ptr ss : [ebp-0x157C]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa944e : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa945a : nop
        mov eax, offset public_6fbd804
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9420)
        ASM_EXPORT_ENTRY_FIRST(0x6fa942b, public_6fa942b)
        ASM_EXPORT_ENTRY(0x6fa9437, public_6fa9437)
        ASM_EXPORT_ENTRY(0x6fa9442, public_6fa9442)
        ASM_EXPORT_ENTRY(0x6fa944e, public_6fa944e)
        ASM_EXPORT_ENTRY_LAST(0x6fa945a, public_6fa945a)
    }
}

#undef public_6fa942b
#undef public_6fa9437
#undef public_6fa9442
#undef public_6fa944e
#undef public_6fa945a

#pragma init_seg(compiler)
extern "C" void const* const public_6fa942b = __AsmFindLabelExport(&internal_6fa9420, 0x6fa942b);
extern "C" void const* const public_6fa9437 = __AsmFindLabelExport(&internal_6fa9420, 0x6fa9437);
extern "C" void const* const public_6fa9442 = __AsmFindLabelExport(&internal_6fa9420, 0x6fa9442);
extern "C" void const* const public_6fa944e = __AsmFindLabelExport(&internal_6fa9420, 0x6fa944e);
extern "C" void const* const public_6fa945a = __AsmFindLabelExport(&internal_6fa9420, 0x6fa945a);
