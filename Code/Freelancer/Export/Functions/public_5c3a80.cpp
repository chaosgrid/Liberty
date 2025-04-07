#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c3a91 _public_5c3a91
#define public_5c3a9d _public_5c3a9d

PROC_DECLARE(0x5c3a80, internal_5c3a80, public_5c3a80);
/* CHUNK of public_575b80 */
extern "C" NAKED register_t __cdecl internal_5c3a80()
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
        public_5c3a91 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp dword ptr ds : [public_5c7058]
        public_5c3a9d : nop
        mov eax, offset public_5fd768
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c3a80)
        ASM_EXPORT_ENTRY_FIRST(0x5c3a91, public_5c3a91)
        ASM_EXPORT_ENTRY_LAST(0x5c3a9d, public_5c3a9d)
    }
}

#undef public_5c3a91
#undef public_5c3a9d

#pragma init_seg(compiler)
extern "C" void const* const public_5c3a91 = __AsmFindLabelExport(&internal_5c3a80, 0x5c3a91);
extern "C" void const* const public_5c3a9d = __AsmFindLabelExport(&internal_5c3a80, 0x5c3a9d);
