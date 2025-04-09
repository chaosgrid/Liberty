#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53aa40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0ac8 _public_5c0ac8

PROC_DECLARE(0x5c0ac0, internal_5c0ac0, public_5c0ac0);
/* CHUNK of public_5393e0 */
extern "C" NAKED register_t __cdecl internal_5c0ac0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_53aa40
        public_5c0ac8 : nop
        mov eax, offset public_5facec
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0ac0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0ac8, public_5c0ac8)
    }
}

#undef public_5c0ac8

#pragma init_seg(compiler)
extern "C" void const* const public_5c0ac8 = __AsmFindLabelExport(&internal_5c0ac0, 0x5c0ac8);
