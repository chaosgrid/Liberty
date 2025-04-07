#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394178 _public_6394178

PROC_DECLARE(0x6394170, internal_6394170, public_6394170);
/* CHUNK of public_62ad540 */
extern "C" NAKED register_t __cdecl internal_6394170()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6269110
        public_6394178 : nop
        mov eax, offset public_63ad6a8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394170)
        ASM_EXPORT_ENTRY_SINGLE(0x6394178, public_6394178)
    }
}

#undef public_6394178

#pragma init_seg(compiler)
extern "C" void const* const public_6394178 = __AsmFindLabelExport(&internal_6394170, 0x6394178);
