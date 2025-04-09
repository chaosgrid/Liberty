#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be39b _public_5be39b

PROC_DECLARE(0x5be390, internal_5be390, public_5be390);
/* CHUNK of public_4d9a00 */
extern "C" NAKED register_t __cdecl internal_5be390()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5be39b : nop
        mov eax, offset public_5f86a4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be390)
        ASM_EXPORT_ENTRY_SINGLE(0x5be39b, public_5be39b)
    }
}

#undef public_5be39b

#pragma init_seg(compiler)
extern "C" void const* const public_5be39b = __AsmFindLabelExport(&internal_5be390, 0x5be39b);
