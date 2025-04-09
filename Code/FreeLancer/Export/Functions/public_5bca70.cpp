#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bca7e _public_5bca7e

PROC_DECLARE(0x5bca70, internal_5bca70, public_5bca70);
/* CHUNK of public_4997d0 */
extern "C" NAKED register_t __cdecl internal_5bca70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x21C]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bca7e : nop
        mov eax, offset public_5f6c88
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bca70)
        ASM_EXPORT_ENTRY_SINGLE(0x5bca7e, public_5bca7e)
    }
}

#undef public_5bca7e

#pragma init_seg(compiler)
extern "C" void const* const public_5bca7e = __AsmFindLabelExport(&internal_5bca70, 0x5bca7e);
