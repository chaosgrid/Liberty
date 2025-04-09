#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bc0cb _public_5bc0cb

PROC_DECLARE(0x5bc0c0, internal_5bc0c0, public_5bc0c0);
/* CHUNK of public_485860 */
extern "C" NAKED register_t __cdecl internal_5bc0c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bc0cb : nop
        mov eax, offset public_5f64f4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bc0c0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bc0cb, public_5bc0cb)
    }
}

#undef public_5bc0cb

#pragma init_seg(compiler)
extern "C" void const* const public_5bc0cb = __AsmFindLabelExport(&internal_5bc0c0, 0x5bc0cb);
