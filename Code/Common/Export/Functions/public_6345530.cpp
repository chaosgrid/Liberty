#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6345530);
CLANG_FORWARD_PROC_SYMBOL(public_634ebd0);

#define public_634554c _public_634554c

PROC_DECLARE(0x6345530, internal_6345530, public_6345530);
/* CHUNK of public_6284e20 */
extern "C" NAKED register_t __cdecl internal_6345530()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ds : [ecx+0x90]
        test eax, eax
        je public_634554c
        mov eax, dword ptr ds : [ecx+0x98]
        push ecx
        mov ecx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [ecx+0x10]
        call public_634ebd0
        public_634554c : nop
        ret 
        UNREACHABLE_TRAP(0x6345530)
        ASM_EXPORT_ENTRY_SINGLE(0x634554c, public_634554c)
    }
}

#undef public_634554c

#pragma init_seg(compiler)
extern "C" void const* const public_634554c = __AsmFindLabelExport(&internal_6345530, 0x634554c);
