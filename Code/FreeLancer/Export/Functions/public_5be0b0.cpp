#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be0bb _public_5be0bb

PROC_DECLARE(0x5be0b0, internal_5be0b0, public_5be0b0);
/* CHUNK of public_4d5af0 */
extern "C" NAKED register_t __cdecl internal_5be0b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5be0bb : nop
        mov eax, offset public_5f8440
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be0b0)
        ASM_EXPORT_ENTRY_SINGLE(0x5be0bb, public_5be0bb)
    }
}

#undef public_5be0bb

#pragma init_seg(compiler)
extern "C" void const* const public_5be0bb = __AsmFindLabelExport(&internal_5be0b0, 0x5be0bb);
