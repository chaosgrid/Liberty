#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d3731f);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd86);

#define public_6d5d125 _public_6d5d125
#define public_6d5d12f _public_6d5d12f

PROC_DECLARE(0x6d5d11d, internal_6d5d11d, public_6d5d11d);
/* CHUNK of public_6d3ad6d */
extern "C" NAKED register_t __cdecl internal_6d5d11d()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6d3731f
        public_6d5d125 : nop
        push dword ptr ss : [ebp-0x10]
        call public_6d2f249
        pop ecx
        ret 
        public_6d5d12f : nop
        mov eax, offset public_6d62b6c
        jmp public_6d5cd86
        UNREACHABLE_TRAP(0x6d5d11d)
        ASM_EXPORT_ENTRY_FIRST(0x6d5d125, public_6d5d125)
        ASM_EXPORT_ENTRY_LAST(0x6d5d12f, public_6d5d12f)
    }
}

#undef public_6d5d125
#undef public_6d5d12f

#pragma init_seg(compiler)
extern "C" void const* const public_6d5d125 = __AsmFindLabelExport(&internal_6d5d11d, 0x6d5d125);
extern "C" void const* const public_6d5d12f = __AsmFindLabelExport(&internal_6d5d11d, 0x6d5d12f);
