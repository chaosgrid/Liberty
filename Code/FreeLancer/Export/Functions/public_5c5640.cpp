#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c564b _public_5c564b

PROC_DECLARE(0x5c5640, internal_5c5640, public_5c5640);
/* CHUNK of public_5ab4c0 */
extern "C" NAKED register_t __cdecl internal_5c5640()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x20]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c564b : nop
        mov eax, offset public_5ff438
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c5640)
        ASM_EXPORT_ENTRY_SINGLE(0x5c564b, public_5c564b)
    }
}

#undef public_5c564b

#pragma init_seg(compiler)
extern "C" void const* const public_5c564b = __AsmFindLabelExport(&internal_5c5640, 0x5c564b);
