#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b91a1 _public_5b91a1

PROC_DECLARE(0x5b9190, internal_5b9190, public_5b9190);
/* CHUNK of public_436d30 */
extern "C" NAKED register_t __cdecl internal_5b9190()
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
        public_5b91a1 : nop
        mov eax, offset public_5f30e4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9190)
        ASM_EXPORT_ENTRY_SINGLE(0x5b91a1, public_5b91a1)
    }
}

#undef public_5b91a1

#pragma init_seg(compiler)
extern "C" void const* const public_5b91a1 = __AsmFindLabelExport(&internal_5b9190, 0x5b91a1);
