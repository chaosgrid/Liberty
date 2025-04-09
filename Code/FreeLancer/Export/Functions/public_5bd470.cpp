#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd47b _public_5bd47b

PROC_DECLARE(0x5bd470, internal_5bd470, public_5bd470);
/* CHUNK of public_4bd030 */
extern "C" NAKED register_t __cdecl internal_5bd470()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bd47b : nop
        mov eax, offset public_5f77dc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd470)
        ASM_EXPORT_ENTRY_SINGLE(0x5bd47b, public_5bd47b)
    }
}

#undef public_5bd47b

#pragma init_seg(compiler)
extern "C" void const* const public_5bd47b = __AsmFindLabelExport(&internal_5bd470, 0x5bd47b);
