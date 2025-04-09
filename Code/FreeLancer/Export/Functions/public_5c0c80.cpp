#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0c8e _public_5c0c8e

PROC_DECLARE(0x5c0c80, internal_5c0c80, public_5c0c80);
/* CHUNK of public_53d080 */
extern "C" NAKED register_t __cdecl internal_5c0c80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0xD8]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c0c8e : nop
        mov eax, offset public_5faec0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0c80)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0c8e, public_5c0c8e)
    }
}

#undef public_5c0c8e

#pragma init_seg(compiler)
extern "C" void const* const public_5c0c8e = __AsmFindLabelExport(&internal_5c0c80, 0x5c0c8e);
