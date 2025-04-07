#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9021 _public_5b9021

PROC_DECLARE(0x5b9010, internal_5b9010, public_5b9010);
/* CHUNK of public_433a50 */
extern "C" NAKED register_t __cdecl internal_5b9010()
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
        public_5b9021 : nop
        mov eax, offset public_5f2ef8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9010)
        ASM_EXPORT_ENTRY_SINGLE(0x5b9021, public_5b9021)
    }
}

#undef public_5b9021

#pragma init_seg(compiler)
extern "C" void const* const public_5b9021 = __AsmFindLabelExport(&internal_5b9010, 0x5b9021);
