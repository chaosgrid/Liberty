#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bfd0b _public_5bfd0b

PROC_DECLARE(0x5bfd00, internal_5bfd00, public_5bfd00);
/* CHUNK of public_510d10 */
extern "C" NAKED register_t __cdecl internal_5bfd00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bfd0b : nop
        mov eax, offset public_5f9c64
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bfd00)
        ASM_EXPORT_ENTRY_SINGLE(0x5bfd0b, public_5bfd0b)
    }
}

#undef public_5bfd0b

#pragma init_seg(compiler)
extern "C" void const* const public_5bfd0b = __AsmFindLabelExport(&internal_5bfd00, 0x5bfd0b);
