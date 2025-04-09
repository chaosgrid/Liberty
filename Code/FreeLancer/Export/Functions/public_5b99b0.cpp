#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b99bb _public_5b99bb

PROC_DECLARE(0x5b99b0, internal_5b99b0, public_5b99b0);
/* CHUNK of public_447120 */
extern "C" NAKED register_t __cdecl internal_5b99b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b99bb : nop
        mov eax, offset public_5f3a28
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b99b0)
        ASM_EXPORT_ENTRY_SINGLE(0x5b99bb, public_5b99bb)
    }
}

#undef public_5b99bb

#pragma init_seg(compiler)
extern "C" void const* const public_5b99bb = __AsmFindLabelExport(&internal_5b99b0, 0x5b99bb);
