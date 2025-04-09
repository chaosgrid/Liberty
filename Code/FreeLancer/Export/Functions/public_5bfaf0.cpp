#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bfafb _public_5bfafb

PROC_DECLARE(0x5bfaf0, internal_5bfaf0, public_5bfaf0);
/* CHUNK of public_509b00 */
extern "C" NAKED register_t __cdecl internal_5bfaf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bfafb : nop
        mov eax, offset public_5f9a18
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bfaf0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bfafb, public_5bfafb)
    }
}

#undef public_5bfafb

#pragma init_seg(compiler)
extern "C" void const* const public_5bfafb = __AsmFindLabelExport(&internal_5bfaf0, 0x5bfafb);
