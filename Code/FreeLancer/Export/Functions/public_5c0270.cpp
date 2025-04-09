#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_528d00);
CLANG_FORWARD_PROC_SYMBOL(public_5298c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0278 _public_5c0278
#define public_5c0280 _public_5c0280

PROC_DECLARE(0x5c0270, internal_5c0270, public_5c0270);
/* CHUNK of public_528980 */
extern "C" NAKED register_t __cdecl internal_5c0270()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x48]
        jmp public_528d00
        public_5c0278 : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_5298c0
        public_5c0280 : nop
        mov eax, offset public_5fa288
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0270)
        ASM_EXPORT_ENTRY_FIRST(0x5c0278, public_5c0278)
        ASM_EXPORT_ENTRY_LAST(0x5c0280, public_5c0280)
    }
}

#undef public_5c0278
#undef public_5c0280

#pragma init_seg(compiler)
extern "C" void const* const public_5c0278 = __AsmFindLabelExport(&internal_5c0270, 0x5c0278);
extern "C" void const* const public_5c0280 = __AsmFindLabelExport(&internal_5c0270, 0x5c0280);
