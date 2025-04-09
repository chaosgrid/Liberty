#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8a61 _public_5b8a61
#define public_5b8a6a _public_5b8a6a

PROC_DECLARE(0x5b8a50, internal_5b8a50, public_5b8a50);
/* CHUNK of public_41d750 */
extern "C" NAKED register_t __cdecl internal_5b8a50()
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
        public_5b8a61 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_5c7058]
        public_5b8a6a : nop
        mov eax, offset public_5f290c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8a50)
        ASM_EXPORT_ENTRY_FIRST(0x5b8a61, public_5b8a61)
        ASM_EXPORT_ENTRY_LAST(0x5b8a6a, public_5b8a6a)
    }
}

#undef public_5b8a61
#undef public_5b8a6a

#pragma init_seg(compiler)
extern "C" void const* const public_5b8a61 = __AsmFindLabelExport(&internal_5b8a50, 0x5b8a61);
extern "C" void const* const public_5b8a6a = __AsmFindLabelExport(&internal_5b8a50, 0x5b8a6a);
