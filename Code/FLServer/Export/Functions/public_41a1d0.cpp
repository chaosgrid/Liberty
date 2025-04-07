#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403af0);
CLANG_FORWARD_PROC_SYMBOL(public_4193c0);

#define public_41a1da _public_41a1da

PROC_DECLARE(0x41a1d0, internal_41a1d0, public_41a1d0);
/* CHUNK of public_40d630 */
extern "C" NAKED register_t __cdecl internal_41a1d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_403af0
        ret 
        public_41a1da : nop
        mov eax, offset public_41f330
        jmp public_4193c0
        UNREACHABLE_TRAP(0x41a1d0)
        ASM_EXPORT_ENTRY_SINGLE(0x41a1da, public_41a1da)
    }
}

#undef public_41a1da

#pragma init_seg(compiler)
extern "C" void const* const public_41a1da = __AsmFindLabelExport(&internal_41a1d0, 0x41a1da);
