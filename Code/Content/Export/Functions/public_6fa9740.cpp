#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea14b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7d30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa974b _public_6fa974b
#define public_6fa9757 _public_6fa9757
#define public_6fa9762 _public_6fa9762
#define public_6fa976e _public_6fa976e
#define public_6fa977a _public_6fa977a

PROC_DECLARE(0x6fa9740, internal_6fa9740, public_6fa9740);
/* CHUNK of public_6ea4fe0 */
extern "C" NAKED register_t __cdecl internal_6fa9740()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1578]
        jmp public_6eb7d30
        public_6fa974b : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb3004]
        public_6fa9757 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6ea14b0
        public_6fa9762 : nop
        mov ecx, dword ptr ss : [ebp-0x157C]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa976e : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa977a : nop
        mov eax, offset public_6fbdaac
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa9740)
        ASM_EXPORT_ENTRY_FIRST(0x6fa974b, public_6fa974b)
        ASM_EXPORT_ENTRY(0x6fa9757, public_6fa9757)
        ASM_EXPORT_ENTRY(0x6fa9762, public_6fa9762)
        ASM_EXPORT_ENTRY(0x6fa976e, public_6fa976e)
        ASM_EXPORT_ENTRY_LAST(0x6fa977a, public_6fa977a)
    }
}

#undef public_6fa974b
#undef public_6fa9757
#undef public_6fa9762
#undef public_6fa976e
#undef public_6fa977a

#pragma init_seg(compiler)
extern "C" void const* const public_6fa974b = __AsmFindLabelExport(&internal_6fa9740, 0x6fa974b);
extern "C" void const* const public_6fa9757 = __AsmFindLabelExport(&internal_6fa9740, 0x6fa9757);
extern "C" void const* const public_6fa9762 = __AsmFindLabelExport(&internal_6fa9740, 0x6fa9762);
extern "C" void const* const public_6fa976e = __AsmFindLabelExport(&internal_6fa9740, 0x6fa976e);
extern "C" void const* const public_6fa977a = __AsmFindLabelExport(&internal_6fa9740, 0x6fa977a);
