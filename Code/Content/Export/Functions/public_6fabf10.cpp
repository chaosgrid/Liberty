#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fabf19 _public_6fabf19

PROC_DECLARE(0x6fabf10, internal_6fabf10, public_6fabf10);
/* CHUNK of public_6ef02a0 */
extern "C" NAKED register_t __cdecl internal_6fabf10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_6fb3034]
        public_6fabf19 : nop
        mov eax, offset public_6fc0b0c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fabf10)
        ASM_EXPORT_ENTRY_SINGLE(0x6fabf19, public_6fabf19)
    }
}

#undef public_6fabf19

#pragma init_seg(compiler)
extern "C" void const* const public_6fabf19 = __AsmFindLabelExport(&internal_6fabf10, 0x6fabf19);
