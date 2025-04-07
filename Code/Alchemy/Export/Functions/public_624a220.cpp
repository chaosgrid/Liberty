#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6239ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a228 _public_624a228
#define public_624a230 _public_624a230

PROC_DECLARE(0x624a220, internal_624a220, public_624a220);
/* CHUNK of public_623a4a0 */
extern "C" NAKED register_t __cdecl internal_624a220()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp public_6239ed0
        public_624a228 : nop
        lea ecx, ss:[ebp+4]
        jmp public_6239ed0
        public_624a230 : nop
        mov eax, offset public_62532b4
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a220)
        ASM_EXPORT_ENTRY_FIRST(0x624a228, public_624a228)
        ASM_EXPORT_ENTRY_LAST(0x624a230, public_624a230)
    }
}

#undef public_624a228
#undef public_624a230

#pragma init_seg(compiler)
extern "C" void const* const public_624a228 = __AsmFindLabelExport(&internal_624a220, 0x624a228);
extern "C" void const* const public_624a230 = __AsmFindLabelExport(&internal_624a220, 0x624a230);
