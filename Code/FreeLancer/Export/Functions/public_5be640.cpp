#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5be64b _public_5be64b

PROC_DECLARE(0x5be640, internal_5be640, public_5be640);
/* CHUNK of public_4de840 */
extern "C" NAKED register_t __cdecl internal_5be640()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5be64b : nop
        mov eax, offset public_5f8880
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5be640)
        ASM_EXPORT_ENTRY_SINGLE(0x5be64b, public_5be64b)
    }
}

#undef public_5be64b

#pragma init_seg(compiler)
extern "C" void const* const public_5be64b = __AsmFindLabelExport(&internal_5be640, 0x5be64b);
