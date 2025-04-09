#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5394b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0168 _public_5c0168

PROC_DECLARE(0x5c0160, internal_5c0160, public_5c0160);
/* CHUNK of public_525140 */
extern "C" NAKED register_t __cdecl internal_5c0160()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_5394b0
        public_5c0168 : nop
        mov eax, offset public_5fa128
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0160)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0168, public_5c0168)
    }
}

#undef public_5c0168

#pragma init_seg(compiler)
extern "C" void const* const public_5c0168 = __AsmFindLabelExport(&internal_5c0160, 0x5c0168);
