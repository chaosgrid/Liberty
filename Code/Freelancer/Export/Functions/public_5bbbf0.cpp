#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bbbfb _public_5bbbfb

PROC_DECLARE(0x5bbbf0, internal_5bbbf0, public_5bbbf0);
/* CHUNK of public_474a30 */
extern "C" NAKED register_t __cdecl internal_5bbbf0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bbbfb : nop
        mov eax, offset public_5f5f88
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bbbf0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bbbfb, public_5bbbfb)
    }
}

#undef public_5bbbfb

#pragma init_seg(compiler)
extern "C" void const* const public_5bbbfb = __AsmFindLabelExport(&internal_5bbbf0, 0x5bbbfb);
