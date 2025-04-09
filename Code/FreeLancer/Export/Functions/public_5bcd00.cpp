#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bcd0b _public_5bcd0b

PROC_DECLARE(0x5bcd00, internal_5bcd00, public_5bcd00);
/* CHUNK of public_4a7720 */
extern "C" NAKED register_t __cdecl internal_5bcd00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bcd0b : nop
        mov eax, offset public_5f6fa8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bcd00)
        ASM_EXPORT_ENTRY_SINGLE(0x5bcd0b, public_5bcd0b)
    }
}

#undef public_5bcd0b

#pragma init_seg(compiler)
extern "C" void const* const public_5bcd0b = __AsmFindLabelExport(&internal_5bcd00, 0x5bcd0b);
