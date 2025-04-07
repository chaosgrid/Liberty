#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed61d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fab36b _public_6fab36b
#define public_6fab376 _public_6fab376

PROC_DECLARE(0x6fab360, internal_6fab360, public_6fab360);
/* CHUNK of public_6eda790 */
extern "C" NAKED register_t __cdecl internal_6fab360()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x164]
        jmp public_6ed61d0
        public_6fab36b : nop
        lea ecx, ss:[ebp-0x180]
        jmp public_6eec8d0
        public_6fab376 : nop
        mov eax, offset public_6fbfacc
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fab360)
        ASM_EXPORT_ENTRY_FIRST(0x6fab36b, public_6fab36b)
        ASM_EXPORT_ENTRY_LAST(0x6fab376, public_6fab376)
    }
}

#undef public_6fab36b
#undef public_6fab376

#pragma init_seg(compiler)
extern "C" void const* const public_6fab36b = __AsmFindLabelExport(&internal_6fab360, 0x6fab36b);
extern "C" void const* const public_6fab376 = __AsmFindLabelExport(&internal_6fab360, 0x6fab376);
