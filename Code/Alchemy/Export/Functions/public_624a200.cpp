#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6239880);
CLANG_FORWARD_PROC_SYMBOL(public_6239ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a208 _public_624a208
#define public_624a210 _public_624a210

PROC_DECLARE(0x624a200, internal_624a200, public_624a200);
/* CHUNK of public_623a360 */
extern "C" NAKED register_t __cdecl internal_624a200()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x10]
        jmp public_6239880
        public_624a208 : nop
        lea ecx, ss:[ebp-0x1C]
        jmp public_6239ed0
        public_624a210 : nop
        mov eax, offset public_6253288
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a200)
        ASM_EXPORT_ENTRY_FIRST(0x624a208, public_624a208)
        ASM_EXPORT_ENTRY_LAST(0x624a210, public_624a210)
    }
}

#undef public_624a208
#undef public_624a210

#pragma init_seg(compiler)
extern "C" void const* const public_624a208 = __AsmFindLabelExport(&internal_624a200, 0x624a208);
extern "C" void const* const public_624a210 = __AsmFindLabelExport(&internal_624a200, 0x624a210);
