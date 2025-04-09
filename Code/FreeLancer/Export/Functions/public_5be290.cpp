#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be29b _public_5be29b

PROC_DECLARE(0x5be290, internal_5be290, public_5be290);
/* CHUNK of public_4d74c0 */
extern "C" NAKED register_t __cdecl internal_5be290()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5be29b : nop
        mov eax, offset public_5f85f0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be290)
        ASM_EXPORT_ENTRY_SINGLE(0x5be29b, public_5be29b)
    }
}

#undef public_5be29b

#pragma init_seg(compiler)
extern "C" void const* const public_5be29b = __AsmFindLabelExport(&internal_5be290, 0x5be29b);
