#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6239880);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a078 _public_624a078
#define public_624a080 _public_624a080

PROC_DECLARE(0x624a070, internal_624a070, public_624a070);
/* CHUNK of public_6238280 */
extern "C" NAKED register_t __cdecl internal_624a070()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x50]
        jmp public_6239880
        public_624a078 : nop
        lea ecx, ss:[ebp-0x4C]
        jmp public_6239880
        public_624a080 : nop
        mov eax, offset public_62530c8
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a070)
        ASM_EXPORT_ENTRY_FIRST(0x624a078, public_624a078)
        ASM_EXPORT_ENTRY_LAST(0x624a080, public_624a080)
    }
}

#undef public_624a078
#undef public_624a080

#pragma init_seg(compiler)
extern "C" void const* const public_624a078 = __AsmFindLabelExport(&internal_624a070, 0x624a078);
extern "C" void const* const public_624a080 = __AsmFindLabelExport(&internal_624a070, 0x624a080);
