#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6f74ac0);

#define public_6f74acc _public_6f74acc

PROC_DECLARE(0x6f74ac0, internal_6f74ac0, public_6f74ac0);
/* CHUNK of public_6f748a0 */
extern "C" NAKED register_t __cdecl internal_6f74ac0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        test ecx, ecx
        je public_6f74acc
        add ecx, 0x48
        jmp public_6f28e10
        public_6f74acc : nop
        xor ecx, ecx
        jmp public_6f28e10
        UNREACHABLE_TRAP(0x6f74ac0)
        ASM_EXPORT_ENTRY_SINGLE(0x6f74acc, public_6f74acc)
    }
}

#undef public_6f74acc

#pragma init_seg(compiler)
extern "C" void const* const public_6f74acc = __AsmFindLabelExport(&internal_6f74ac0, 0x6f74acc);
