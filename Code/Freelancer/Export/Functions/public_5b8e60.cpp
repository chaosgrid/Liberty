#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8e71 _public_5b8e71

PROC_DECLARE(0x5b8e60, internal_5b8e60, public_5b8e60);
/* CHUNK of public_4304b0 */
extern "C" NAKED register_t __cdecl internal_5b8e60()
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
        public_5b8e71 : nop
        mov eax, offset public_5f2d54
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8e60)
        ASM_EXPORT_ENTRY_SINGLE(0x5b8e71, public_5b8e71)
    }
}

#undef public_5b8e71

#pragma init_seg(compiler)
extern "C" void const* const public_5b8e71 = __AsmFindLabelExport(&internal_5b8e60, 0x5b8e71);
