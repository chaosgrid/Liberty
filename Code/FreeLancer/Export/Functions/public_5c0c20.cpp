#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0c2e _public_5c0c2e

PROC_DECLARE(0x5c0c20, internal_5c0c20, public_5c0c20);
/* CHUNK of public_53b910 */
extern "C" NAKED register_t __cdecl internal_5c0c20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0xB8]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c0c2e : nop
        mov eax, offset public_5fae30
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0c20)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0c2e, public_5c0c2e)
    }
}

#undef public_5c0c2e

#pragma init_seg(compiler)
extern "C" void const* const public_5c0c2e = __AsmFindLabelExport(&internal_5c0c20, 0x5c0c2e);
