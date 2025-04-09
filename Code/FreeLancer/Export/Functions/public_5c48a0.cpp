#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c48b1 _public_5c48b1
#define public_5c48ba _public_5c48ba

PROC_DECLARE(0x5c48a0, internal_5c48a0, public_5c48a0);
/* CHUNK of public_5909c0 */
extern "C" NAKED register_t __cdecl internal_5c48a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x18]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5c48b1 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp dword ptr ds : [public_5c62c4]
        public_5c48ba : nop
        mov eax, offset public_5fe594
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c48a0)
        ASM_EXPORT_ENTRY_FIRST(0x5c48b1, public_5c48b1)
        ASM_EXPORT_ENTRY_LAST(0x5c48ba, public_5c48ba)
    }
}

#undef public_5c48b1
#undef public_5c48ba

#pragma init_seg(compiler)
extern "C" void const* const public_5c48b1 = __AsmFindLabelExport(&internal_5c48a0, 0x5c48b1);
extern "C" void const* const public_5c48ba = __AsmFindLabelExport(&internal_5c48a0, 0x5c48ba);
