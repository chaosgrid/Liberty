#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fae568 _public_6fae568
#define public_6fae57e _public_6fae57e
#define public_6fae57f _public_6fae57f

PROC_DECLARE(0x6fae560, internal_6fae560, public_6fae560);
/* CHUNK of public_6f29d80 */
extern "C" NAKED register_t __cdecl internal_6fae560()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_6f15350
        public_6fae568 : nop
        mov eax, dword ptr ss : [ebp-0x20]
        and eax, 1
        test eax, eax
        je public_6fae57e
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_6f15350
        public_6fae57e : nop
        ret 
        public_6fae57f : nop
        mov eax, offset public_6fc34b4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fae560)
        ASM_EXPORT_ENTRY_FIRST(0x6fae568, public_6fae568)
        ASM_EXPORT_ENTRY(0x6fae57e, public_6fae57e)
        ASM_EXPORT_ENTRY_LAST(0x6fae57f, public_6fae57f)
    }
}

#undef public_6fae568
#undef public_6fae57e
#undef public_6fae57f

#pragma init_seg(compiler)
extern "C" void const* const public_6fae568 = __AsmFindLabelExport(&internal_6fae560, 0x6fae568);
extern "C" void const* const public_6fae57e = __AsmFindLabelExport(&internal_6fae560, 0x6fae57e);
extern "C" void const* const public_6fae57f = __AsmFindLabelExport(&internal_6fae560, 0x6fae57f);
