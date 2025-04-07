#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fae998 _public_6fae998
#define public_6fae9a1 _public_6fae9a1
#define public_6fae9aa _public_6fae9aa

PROC_DECLARE(0x6fae990, internal_6fae990, public_6fae990);
/* CHUNK of public_6f316c0 */
extern "C" NAKED register_t __cdecl internal_6fae990()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x44]
        jmp public_6ea8cc0
        public_6fae998 : nop
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_6fb3034]
        public_6fae9a1 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp dword ptr ds : [public_6fb3034]
        public_6fae9aa : nop
        mov eax, offset public_6fc3920
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fae990)
        ASM_EXPORT_ENTRY_FIRST(0x6fae998, public_6fae998)
        ASM_EXPORT_ENTRY(0x6fae9a1, public_6fae9a1)
        ASM_EXPORT_ENTRY_LAST(0x6fae9aa, public_6fae9aa)
    }
}

#undef public_6fae998
#undef public_6fae9a1
#undef public_6fae9aa

#pragma init_seg(compiler)
extern "C" void const* const public_6fae998 = __AsmFindLabelExport(&internal_6fae990, 0x6fae998);
extern "C" void const* const public_6fae9a1 = __AsmFindLabelExport(&internal_6fae990, 0x6fae9a1);
extern "C" void const* const public_6fae9aa = __AsmFindLabelExport(&internal_6fae990, 0x6fae9aa);
