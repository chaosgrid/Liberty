#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c3be1 _public_5c3be1
#define public_5c3bea _public_5c3bea

PROC_DECLARE(0x5c3bd0, internal_5c3bd0, public_5c3bd0);
/* CHUNK of public_578a40 */
extern "C" NAKED register_t __cdecl internal_5c3bd0()
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
        public_5c3be1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_5c7090]
        public_5c3bea : nop
        mov eax, offset public_5fd8bc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c3bd0)
        ASM_EXPORT_ENTRY_FIRST(0x5c3be1, public_5c3be1)
        ASM_EXPORT_ENTRY_LAST(0x5c3bea, public_5c3bea)
    }
}

#undef public_5c3be1
#undef public_5c3bea

#pragma init_seg(compiler)
extern "C" void const* const public_5c3be1 = __AsmFindLabelExport(&internal_5c3bd0, 0x5c3be1);
extern "C" void const* const public_5c3bea = __AsmFindLabelExport(&internal_5c3bd0, 0x5c3bea);
