#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd34b _public_5bd34b

PROC_DECLARE(0x5bd340, internal_5bd340, public_5bd340);
/* CHUNK of public_4b9720 */
extern "C" NAKED register_t __cdecl internal_5bd340()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bd34b : nop
        mov eax, offset public_5f761c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd340)
        ASM_EXPORT_ENTRY_SINGLE(0x5bd34b, public_5bd34b)
    }
}

#undef public_5bd34b

#pragma init_seg(compiler)
extern "C" void const* const public_5bd34b = __AsmFindLabelExport(&internal_5bd340, 0x5bd34b);
