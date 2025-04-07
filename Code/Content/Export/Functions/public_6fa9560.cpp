#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea14b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7d30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa956b _public_6fa956b
#define public_6fa9577 _public_6fa9577
#define public_6fa9582 _public_6fa9582
#define public_6fa958e _public_6fa958e
#define public_6fa959a _public_6fa959a

PROC_DECLARE(0x6fa9560, internal_6fa9560, public_6fa9560);
/* CHUNK of public_6ea34e0 */
extern "C" NAKED register_t __cdecl internal_6fa9560()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1578]
        jmp public_6eb7d30
        public_6fa956b : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb3004]
        public_6fa9577 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6ea14b0
        public_6fa9582 : nop
        mov ecx, dword ptr ss : [ebp-0x157C]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa958e : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa959a : nop
        mov eax, offset public_6fbd914
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9560)
        ASM_EXPORT_ENTRY_FIRST(0x6fa956b, public_6fa956b)
        ASM_EXPORT_ENTRY(0x6fa9577, public_6fa9577)
        ASM_EXPORT_ENTRY(0x6fa9582, public_6fa9582)
        ASM_EXPORT_ENTRY(0x6fa958e, public_6fa958e)
        ASM_EXPORT_ENTRY_LAST(0x6fa959a, public_6fa959a)
    }
}

#undef public_6fa956b
#undef public_6fa9577
#undef public_6fa9582
#undef public_6fa958e
#undef public_6fa959a

#pragma init_seg(compiler)
extern "C" void const* const public_6fa956b = __AsmFindLabelExport(&internal_6fa9560, 0x6fa956b);
extern "C" void const* const public_6fa9577 = __AsmFindLabelExport(&internal_6fa9560, 0x6fa9577);
extern "C" void const* const public_6fa9582 = __AsmFindLabelExport(&internal_6fa9560, 0x6fa9582);
extern "C" void const* const public_6fa958e = __AsmFindLabelExport(&internal_6fa9560, 0x6fa958e);
extern "C" void const* const public_6fa959a = __AsmFindLabelExport(&internal_6fa9560, 0x6fa959a);
