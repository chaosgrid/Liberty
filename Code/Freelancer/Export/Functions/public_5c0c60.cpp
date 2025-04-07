#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0c6e _public_5c0c6e

PROC_DECLARE(0x5c0c60, internal_5c0c60, public_5c0c60);
/* CHUNK of public_53ca40 */
extern "C" NAKED register_t __cdecl internal_5c0c60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0xA0]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c0c6e : nop
        mov eax, offset public_5fae9c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0c60)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0c6e, public_5c0c6e)
    }
}

#undef public_5c0c6e

#pragma init_seg(compiler)
extern "C" void const* const public_5c0c6e = __AsmFindLabelExport(&internal_5c0c60, 0x5c0c6e);
