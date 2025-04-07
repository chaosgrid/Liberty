#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e580);

#define public_630e590 _public_630e590

PROC_DECLARE(0x630e580, internal_630e580, public_630e580);
extern "C" NAKED register_t __cdecl internal_630e580()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_630e590
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+4], edx
        dec dword ptr ds : [ecx+0xC]
        ret 
        public_630e590 : nop
        mov eax, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [public_6399328]
        add esp, 4
        ret 
        UNREACHABLE_TRAP(0x630e580)
    }
}

#undef public_630e590
