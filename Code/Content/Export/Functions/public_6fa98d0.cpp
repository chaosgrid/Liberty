#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea14b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ea1650);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fa98db _public_6fa98db
#define public_6fa98e7 _public_6fa98e7
#define public_6fa98f2 _public_6fa98f2
#define public_6fa98fe _public_6fa98fe
#define public_6fa990a _public_6fa990a

PROC_DECLARE(0x6fa98d0, internal_6fa98d0, public_6fa98d0);
/* CHUNK of public_6ea6ff0 */
extern "C" NAKED register_t __cdecl internal_6fa98d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1614]
        jmp public_6ea1650
        public_6fa98db : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb3004]
        public_6fa98e7 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6ea14b0
        public_6fa98f2 : nop
        mov ecx, dword ptr ss : [ebp-0x1610]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa98fe : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_6fb330c]
        public_6fa990a : nop
        mov eax, offset public_6fbdc50
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fa98d0)
        ASM_EXPORT_ENTRY_FIRST(0x6fa98db, public_6fa98db)
        ASM_EXPORT_ENTRY(0x6fa98e7, public_6fa98e7)
        ASM_EXPORT_ENTRY(0x6fa98f2, public_6fa98f2)
        ASM_EXPORT_ENTRY(0x6fa98fe, public_6fa98fe)
        ASM_EXPORT_ENTRY_LAST(0x6fa990a, public_6fa990a)
    }
}

#undef public_6fa98db
#undef public_6fa98e7
#undef public_6fa98f2
#undef public_6fa98fe
#undef public_6fa990a

#pragma init_seg(compiler)
extern "C" void const* const public_6fa98db = __AsmFindLabelExport(&internal_6fa98d0, 0x6fa98db);
extern "C" void const* const public_6fa98e7 = __AsmFindLabelExport(&internal_6fa98d0, 0x6fa98e7);
extern "C" void const* const public_6fa98f2 = __AsmFindLabelExport(&internal_6fa98d0, 0x6fa98f2);
extern "C" void const* const public_6fa98fe = __AsmFindLabelExport(&internal_6fa98d0, 0x6fa98fe);
extern "C" void const* const public_6fa990a = __AsmFindLabelExport(&internal_6fa98d0, 0x6fa990a);
