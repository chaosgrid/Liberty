#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393dab _public_6393dab

PROC_DECLARE(0x6393da0, internal_6393da0, public_6393da0);
/* CHUNK of public_62a4410 */
extern "C" NAKED register_t __cdecl internal_6393da0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6391d5a
        pop ecx
        ret 
        public_6393dab : nop
        mov eax, offset public_63ad218
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393da0)
        ASM_EXPORT_ENTRY_SINGLE(0x6393dab, public_6393dab)
    }
}

#undef public_6393dab

#pragma init_seg(compiler)
extern "C" void const* const public_6393dab = __AsmFindLabelExport(&internal_6393da0, 0x6393dab);
