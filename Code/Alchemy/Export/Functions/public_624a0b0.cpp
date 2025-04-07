#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6239880);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a0bb _public_624a0bb
#define public_624a0c6 _public_624a0c6

PROC_DECLARE(0x624a0b0, internal_624a0b0, public_624a0b0);
/* CHUNK of public_6238a70 */
extern "C" NAKED register_t __cdecl internal_624a0b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x120]
        jmp public_6239880
        public_624a0bb : nop
        lea ecx, ss:[ebp-0xF4]
        jmp public_6239880
        public_624a0c6 : nop
        mov eax, offset public_6253120
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a0b0)
        ASM_EXPORT_ENTRY_FIRST(0x624a0bb, public_624a0bb)
        ASM_EXPORT_ENTRY_LAST(0x624a0c6, public_624a0c6)
    }
}

#undef public_624a0bb
#undef public_624a0c6

#pragma init_seg(compiler)
extern "C" void const* const public_624a0bb = __AsmFindLabelExport(&internal_624a0b0, 0x624a0bb);
extern "C" void const* const public_624a0c6 = __AsmFindLabelExport(&internal_624a0b0, 0x624a0c6);
