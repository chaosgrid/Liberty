#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48e5f0);
CLANG_FORWARD_PROC_SYMBOL(public_4ceb50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c11a8 _public_5c11a8
#define public_5c11b0 _public_5c11b0

PROC_DECLARE(0x5c11a0, internal_5c11a0, public_5c11a0);
/* CHUNK of public_549210 */
extern "C" NAKED register_t __cdecl internal_5c11a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4ceb50
        public_5c11a8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_48e5f0
        public_5c11b0 : nop
        mov eax, offset public_5fb464
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c11a0)
        ASM_EXPORT_ENTRY_FIRST(0x5c11a8, public_5c11a8)
        ASM_EXPORT_ENTRY_LAST(0x5c11b0, public_5c11b0)
    }
}

#undef public_5c11a8
#undef public_5c11b0

#pragma init_seg(compiler)
extern "C" void const* const public_5c11a8 = __AsmFindLabelExport(&internal_5c11a0, 0x5c11a8);
extern "C" void const* const public_5c11b0 = __AsmFindLabelExport(&internal_5c11a0, 0x5c11b0);
