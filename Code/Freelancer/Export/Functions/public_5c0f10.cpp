#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e2a0);
CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0f18 _public_5c0f18
#define public_5c0f23 _public_5c0f23

PROC_DECLARE(0x5c0f10, internal_5c0f10, public_5c0f10);
/* CHUNK of public_545670 */
extern "C" NAKED register_t __cdecl internal_5c0f10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x64]
        jmp public_40e2a0
        public_5c0f18 : nop
        lea ecx, ss:[ebp-0xF4]
        jmp public_502d90
        public_5c0f23 : nop
        mov eax, offset public_5fb1b8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0f10)
        ASM_EXPORT_ENTRY_FIRST(0x5c0f18, public_5c0f18)
        ASM_EXPORT_ENTRY_LAST(0x5c0f23, public_5c0f23)
    }
}

#undef public_5c0f18
#undef public_5c0f23

#pragma init_seg(compiler)
extern "C" void const* const public_5c0f18 = __AsmFindLabelExport(&internal_5c0f10, 0x5c0f18);
extern "C" void const* const public_5c0f23 = __AsmFindLabelExport(&internal_5c0f10, 0x5c0f23);
