#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf449 _public_5bf449
#define public_5bf450 _public_5bf450
#define public_5bf458 _public_5bf458

PROC_DECLARE(0x5bf430, internal_5bf430, public_5bf430);
/* CHUNK of public_4f6b50 */
extern "C" NAKED register_t __cdecl internal_5bf430()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        sub eax, 4
        test eax, eax
        je public_5bf449
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x14], ecx
        jmp public_5bf450
        public_5bf449 : nop
        mov dword ptr ss : [ebp-0x14], 0
        public_5bf450 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_420d10
        public_5bf458 : nop
        mov eax, offset public_5f9390
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf430)
        ASM_EXPORT_ENTRY_FIRST(0x5bf449, public_5bf449)
        ASM_EXPORT_ENTRY(0x5bf450, public_5bf450)
        ASM_EXPORT_ENTRY_LAST(0x5bf458, public_5bf458)
    }
}

#undef public_5bf449
#undef public_5bf450
#undef public_5bf458

#pragma init_seg(compiler)
extern "C" void const* const public_5bf449 = __AsmFindLabelExport(&internal_5bf430, 0x5bf449);
extern "C" void const* const public_5bf450 = __AsmFindLabelExport(&internal_5bf430, 0x5bf450);
extern "C" void const* const public_5bf458 = __AsmFindLabelExport(&internal_5bf430, 0x5bf458);
