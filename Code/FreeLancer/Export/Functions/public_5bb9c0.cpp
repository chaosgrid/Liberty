#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bb9cb _public_5bb9cb

PROC_DECLARE(0x5bb9c0, internal_5bb9c0, public_5bb9c0);
/* CHUNK of public_470790 */
extern "C" NAKED register_t __cdecl internal_5bb9c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bb9cb : nop
        mov eax, offset public_5f5cb0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bb9c0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bb9cb, public_5bb9cb)
    }
}

#undef public_5bb9cb

#pragma init_seg(compiler)
extern "C" void const* const public_5bb9cb = __AsmFindLabelExport(&internal_5bb9c0, 0x5bb9cb);
