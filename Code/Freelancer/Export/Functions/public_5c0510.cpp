#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_531af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0518 _public_5c0518

PROC_DECLARE(0x5c0510, internal_5c0510, public_5c0510);
/* CHUNK of public_52e200 */
extern "C" NAKED register_t __cdecl internal_5c0510()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_531af0
        public_5c0518 : nop
        mov eax, offset public_5fa5b0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0510)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0518, public_5c0518)
    }
}

#undef public_5c0518

#pragma init_seg(compiler)
extern "C" void const* const public_5c0518 = __AsmFindLabelExport(&internal_5c0510, 0x5c0518);
