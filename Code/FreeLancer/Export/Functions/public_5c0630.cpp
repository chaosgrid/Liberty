#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c063b _public_5c063b

PROC_DECLARE(0x5c0630, internal_5c0630, public_5c0630);
/* CHUNK of public_530620 */
extern "C" NAKED register_t __cdecl internal_5c0630()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c063b : nop
        mov eax, offset public_5fa790
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0630)
        ASM_EXPORT_ENTRY_SINGLE(0x5c063b, public_5c063b)
    }
}

#undef public_5c063b

#pragma init_seg(compiler)
extern "C" void const* const public_5c063b = __AsmFindLabelExport(&internal_5c0630, 0x5c063b);
