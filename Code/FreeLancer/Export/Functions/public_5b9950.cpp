#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b995b _public_5b995b

PROC_DECLARE(0x5b9950, internal_5b9950, public_5b9950);
/* CHUNK of public_4467e0 */
extern "C" NAKED register_t __cdecl internal_5b9950()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5b995b : nop
        mov eax, offset public_5f39ac
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9950)
        ASM_EXPORT_ENTRY_SINGLE(0x5b995b, public_5b995b)
    }
}

#undef public_5b995b

#pragma init_seg(compiler)
extern "C" void const* const public_5b995b = __AsmFindLabelExport(&internal_5b9950, 0x5b995b);
