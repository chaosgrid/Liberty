#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209f60);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_62474a8 _public_62474a8
#define public_62474b0 _public_62474b0

PROC_DECLARE(0x62474a0, internal_62474a0, public_62474a0);
/* CHUNK of public_6206d80 */
extern "C" NAKED register_t __cdecl internal_62474a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+8]
        jmp public_6209f60
        public_62474a8 : nop
        lea ecx, ss:[ebp+4]
        jmp public_6209f60
        public_62474b0 : nop
        mov eax, offset public_6250240
        jmp public_6246126
        UNREACHABLE_TRAP(0x62474a0)
        ASM_EXPORT_ENTRY_FIRST(0x62474a8, public_62474a8)
        ASM_EXPORT_ENTRY_LAST(0x62474b0, public_62474b0)
    }
}

#undef public_62474a8
#undef public_62474b0

#pragma init_seg(compiler)
extern "C" void const* const public_62474a8 = __AsmFindLabelExport(&internal_62474a0, 0x62474a8);
extern "C" void const* const public_62474b0 = __AsmFindLabelExport(&internal_62474a0, 0x62474b0);
