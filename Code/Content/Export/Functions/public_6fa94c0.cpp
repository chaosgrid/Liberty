#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea14b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7d30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa94cb _public_6fa94cb
#define public_6fa94d7 _public_6fa94d7
#define public_6fa94e2 _public_6fa94e2
#define public_6fa94ee _public_6fa94ee
#define public_6fa94fa _public_6fa94fa

PROC_DECLARE(0x6fa94c0, internal_6fa94c0, public_6fa94c0);
/* CHUNK of public_6ea2be0 */
extern "C" NAKED register_t __cdecl internal_6fa94c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1578]
        jmp public_6eb7d30
        public_6fa94cb : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb3004]
        public_6fa94d7 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6ea14b0
        public_6fa94e2 : nop
        mov ecx, dword ptr ss : [ebp-0x157C]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa94ee : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa94fa : nop
        mov eax, offset public_6fbd88c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa94c0)
        ASM_EXPORT_ENTRY_FIRST(0x6fa94cb, public_6fa94cb)
        ASM_EXPORT_ENTRY(0x6fa94d7, public_6fa94d7)
        ASM_EXPORT_ENTRY(0x6fa94e2, public_6fa94e2)
        ASM_EXPORT_ENTRY(0x6fa94ee, public_6fa94ee)
        ASM_EXPORT_ENTRY_LAST(0x6fa94fa, public_6fa94fa)
    }
}

#undef public_6fa94cb
#undef public_6fa94d7
#undef public_6fa94e2
#undef public_6fa94ee
#undef public_6fa94fa

#pragma init_seg(compiler)
extern "C" void const* const public_6fa94cb = __AsmFindLabelExport(&internal_6fa94c0, 0x6fa94cb);
extern "C" void const* const public_6fa94d7 = __AsmFindLabelExport(&internal_6fa94c0, 0x6fa94d7);
extern "C" void const* const public_6fa94e2 = __AsmFindLabelExport(&internal_6fa94c0, 0x6fa94e2);
extern "C" void const* const public_6fa94ee = __AsmFindLabelExport(&internal_6fa94c0, 0x6fa94ee);
extern "C" void const* const public_6fa94fa = __AsmFindLabelExport(&internal_6fa94c0, 0x6fa94fa);
