#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_531af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0788 _public_5c0788

PROC_DECLARE(0x5c0780, internal_5c0780, public_5c0780);
/* CHUNK of public_532530 */
extern "C" NAKED register_t __cdecl internal_5c0780()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x40]
        jmp public_531af0
        public_5c0788 : nop
        mov eax, offset public_5fa928
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0780)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0788, public_5c0788)
    }
}

#undef public_5c0788

#pragma init_seg(compiler)
extern "C" void const* const public_5c0788 = __AsmFindLabelExport(&internal_5c0780, 0x5c0788);
