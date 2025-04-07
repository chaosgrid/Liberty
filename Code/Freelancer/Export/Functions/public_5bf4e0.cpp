#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf4f1 _public_5bf4f1

PROC_DECLARE(0x5bf4e0, internal_5bf4e0, public_5bf4e0);
/* CHUNK of public_4fd480 */
extern "C" NAKED register_t __cdecl internal_5bf4e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5bf4f1 : nop
        mov eax, offset public_5f94c8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf4e0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bf4f1, public_5bf4f1)
    }
}

#undef public_5bf4f1

#pragma init_seg(compiler)
extern "C" void const* const public_5bf4f1 = __AsmFindLabelExport(&internal_5bf4e0, 0x5bf4f1);
