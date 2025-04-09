#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c5821 _public_5c5821
#define public_5c582a _public_5c582a

PROC_DECLARE(0x5c5810, internal_5c5810, public_5c5810);
/* CHUNK of public_5af250 */
extern "C" NAKED register_t __cdecl internal_5c5810()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x14]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5c5821 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_5c7058]
        public_5c582a : nop
        mov eax, offset public_5ff60c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c5810)
        ASM_EXPORT_ENTRY_FIRST(0x5c5821, public_5c5821)
        ASM_EXPORT_ENTRY_LAST(0x5c582a, public_5c582a)
    }
}

#undef public_5c5821
#undef public_5c582a

#pragma init_seg(compiler)
extern "C" void const* const public_5c5821 = __AsmFindLabelExport(&internal_5c5810, 0x5c5821);
extern "C" void const* const public_5c582a = __AsmFindLabelExport(&internal_5c5810, 0x5c582a);
