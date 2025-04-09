#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4638 _public_5c4638
#define public_5c4640 _public_5c4640

PROC_DECLARE(0x5c4630, internal_5c4630, public_5c4630);
/* CHUNK of public_58bdb0 */
extern "C" NAKED register_t __cdecl internal_5c4630()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x28]
        jmp public_444e20
        public_5c4638 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_444e20
        public_5c4640 : nop
        mov eax, offset public_5fe2bc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4630)
        ASM_EXPORT_ENTRY_FIRST(0x5c4638, public_5c4638)
        ASM_EXPORT_ENTRY_LAST(0x5c4640, public_5c4640)
    }
}

#undef public_5c4638
#undef public_5c4640

#pragma init_seg(compiler)
extern "C" void const* const public_5c4638 = __AsmFindLabelExport(&internal_5c4630, 0x5c4638);
extern "C" void const* const public_5c4640 = __AsmFindLabelExport(&internal_5c4630, 0x5c4640);
