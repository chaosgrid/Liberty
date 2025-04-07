#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bb8cb _public_5bb8cb

PROC_DECLARE(0x5bb8c0, internal_5bb8c0, public_5bb8c0);
/* CHUNK of public_46c000 */
extern "C" NAKED register_t __cdecl internal_5bb8c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bb8cb : nop
        mov eax, offset public_5f5b6c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bb8c0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bb8cb, public_5bb8cb)
    }
}

#undef public_5bb8cb

#pragma init_seg(compiler)
extern "C" void const* const public_5bb8cb = __AsmFindLabelExport(&internal_5bb8c0, 0x5bb8cb);
