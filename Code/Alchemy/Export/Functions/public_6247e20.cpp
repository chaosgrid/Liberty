#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6210850);
CLANG_FORWARD_PROC_SYMBOL(public_6211030);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247e28 _public_6247e28
#define public_6247e30 _public_6247e30

PROC_DECLARE(0x6247e20, internal_6247e20, public_6247e20);
/* CHUNK of public_62114c0 */
extern "C" NAKED register_t __cdecl internal_6247e20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x10]
        jmp public_6210850
        public_6247e28 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_6211030
        public_6247e30 : nop
        mov eax, offset public_6250c74
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247e20)
        ASM_EXPORT_ENTRY_FIRST(0x6247e28, public_6247e28)
        ASM_EXPORT_ENTRY_LAST(0x6247e30, public_6247e30)
    }
}

#undef public_6247e28
#undef public_6247e30

#pragma init_seg(compiler)
extern "C" void const* const public_6247e28 = __AsmFindLabelExport(&internal_6247e20, 0x6247e28);
extern "C" void const* const public_6247e30 = __AsmFindLabelExport(&internal_6247e20, 0x6247e30);
