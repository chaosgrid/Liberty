#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5914c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4a9b _public_5c4a9b
#define public_5c4aa3 _public_5c4aa3

PROC_DECLARE(0x5c4a90, internal_5c4a90, public_5c4a90);
/* CHUNK of public_594590 */
extern "C" NAKED register_t __cdecl internal_5c4a90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c4a9b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_5914c0
        public_5c4aa3 : nop
        mov eax, offset public_5fe770
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4a90)
        ASM_EXPORT_ENTRY_FIRST(0x5c4a9b, public_5c4a9b)
        ASM_EXPORT_ENTRY_LAST(0x5c4aa3, public_5c4aa3)
    }
}

#undef public_5c4a9b
#undef public_5c4aa3

#pragma init_seg(compiler)
extern "C" void const* const public_5c4a9b = __AsmFindLabelExport(&internal_5c4a90, 0x5c4a9b);
extern "C" void const* const public_5c4aa3 = __AsmFindLabelExport(&internal_5c4a90, 0x5c4aa3);
