#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6239880);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a098 _public_624a098
#define public_624a0a0 _public_624a0a0

PROC_DECLARE(0x624a090, internal_624a090, public_624a090);
/* CHUNK of public_62388b0 */
extern "C" NAKED register_t __cdecl internal_624a090()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x70]
        jmp public_6239880
        public_624a098 : nop
        lea ecx, ss:[ebp-0x74]
        jmp public_6239880
        public_624a0a0 : nop
        mov eax, offset public_62530f4
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a090)
        ASM_EXPORT_ENTRY_FIRST(0x624a098, public_624a098)
        ASM_EXPORT_ENTRY_LAST(0x624a0a0, public_624a0a0)
    }
}

#undef public_624a098
#undef public_624a0a0

#pragma init_seg(compiler)
extern "C" void const* const public_624a098 = __AsmFindLabelExport(&internal_624a090, 0x624a098);
extern "C" void const* const public_624a0a0 = __AsmFindLabelExport(&internal_624a090, 0x624a0a0);
