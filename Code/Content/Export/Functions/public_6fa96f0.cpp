#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea14b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7d30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa96fb _public_6fa96fb
#define public_6fa9707 _public_6fa9707
#define public_6fa9712 _public_6fa9712
#define public_6fa971e _public_6fa971e
#define public_6fa972a _public_6fa972a

PROC_DECLARE(0x6fa96f0, internal_6fa96f0, public_6fa96f0);
/* CHUNK of public_6ea4b60 */
extern "C" NAKED register_t __cdecl internal_6fa96f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1578]
        jmp public_6eb7d30
        public_6fa96fb : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb3004]
        public_6fa9707 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6ea14b0
        public_6fa9712 : nop
        mov ecx, dword ptr ss : [ebp-0x157C]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa971e : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa972a : nop
        mov eax, offset public_6fbda68
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa96f0)
        ASM_EXPORT_ENTRY_FIRST(0x6fa96fb, public_6fa96fb)
        ASM_EXPORT_ENTRY(0x6fa9707, public_6fa9707)
        ASM_EXPORT_ENTRY(0x6fa9712, public_6fa9712)
        ASM_EXPORT_ENTRY(0x6fa971e, public_6fa971e)
        ASM_EXPORT_ENTRY_LAST(0x6fa972a, public_6fa972a)
    }
}

#undef public_6fa96fb
#undef public_6fa9707
#undef public_6fa9712
#undef public_6fa971e
#undef public_6fa972a

#pragma init_seg(compiler)
extern "C" void const* const public_6fa96fb = __AsmFindLabelExport(&internal_6fa96f0, 0x6fa96fb);
extern "C" void const* const public_6fa9707 = __AsmFindLabelExport(&internal_6fa96f0, 0x6fa9707);
extern "C" void const* const public_6fa9712 = __AsmFindLabelExport(&internal_6fa96f0, 0x6fa9712);
extern "C" void const* const public_6fa971e = __AsmFindLabelExport(&internal_6fa96f0, 0x6fa971e);
extern "C" void const* const public_6fa972a = __AsmFindLabelExport(&internal_6fa96f0, 0x6fa972a);
