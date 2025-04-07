#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea14b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7d30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa93db _public_6fa93db
#define public_6fa93e7 _public_6fa93e7
#define public_6fa93f2 _public_6fa93f2
#define public_6fa93fe _public_6fa93fe
#define public_6fa940a _public_6fa940a

PROC_DECLARE(0x6fa93d0, internal_6fa93d0, public_6fa93d0);
/* CHUNK of public_6ea1880 */
extern "C" NAKED register_t __cdecl internal_6fa93d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1578]
        jmp public_6eb7d30
        public_6fa93db : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb3004]
        public_6fa93e7 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6ea14b0
        public_6fa93f2 : nop
        mov ecx, dword ptr ss : [ebp-0x157C]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa93fe : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa940a : nop
        mov eax, offset public_6fbd7c0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa93d0)
        ASM_EXPORT_ENTRY_FIRST(0x6fa93db, public_6fa93db)
        ASM_EXPORT_ENTRY(0x6fa93e7, public_6fa93e7)
        ASM_EXPORT_ENTRY(0x6fa93f2, public_6fa93f2)
        ASM_EXPORT_ENTRY(0x6fa93fe, public_6fa93fe)
        ASM_EXPORT_ENTRY_LAST(0x6fa940a, public_6fa940a)
    }
}

#undef public_6fa93db
#undef public_6fa93e7
#undef public_6fa93f2
#undef public_6fa93fe
#undef public_6fa940a

#pragma init_seg(compiler)
extern "C" void const* const public_6fa93db = __AsmFindLabelExport(&internal_6fa93d0, 0x6fa93db);
extern "C" void const* const public_6fa93e7 = __AsmFindLabelExport(&internal_6fa93d0, 0x6fa93e7);
extern "C" void const* const public_6fa93f2 = __AsmFindLabelExport(&internal_6fa93d0, 0x6fa93f2);
extern "C" void const* const public_6fa93fe = __AsmFindLabelExport(&internal_6fa93d0, 0x6fa93fe);
extern "C" void const* const public_6fa940a = __AsmFindLabelExport(&internal_6fa93d0, 0x6fa940a);
