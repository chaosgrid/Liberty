#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd0cb _public_5bd0cb

PROC_DECLARE(0x5bd0c0, internal_5bd0c0, public_5bd0c0);
/* CHUNK of public_4b48a0 */
extern "C" NAKED register_t __cdecl internal_5bd0c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bd0cb : nop
        mov eax, offset public_5f7350
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd0c0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bd0cb, public_5bd0cb)
    }
}

#undef public_5bd0cb

#pragma init_seg(compiler)
extern "C" void const* const public_5bd0cb = __AsmFindLabelExport(&internal_5bd0c0, 0x5bd0cb);
