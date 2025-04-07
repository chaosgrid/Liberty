#include "Freelancer-PCH.h"


#define public_429c0b _public_429c0b

PROC_DECLARE(0x429bf0, internal_429bf0, public_429bf0);
extern "C" NAKED register_t __cdecl internal_429bf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x18]
        test ecx, ecx
        je public_429c0b
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ss : [esp+8]
        fstp dword ptr ds : [eax]
        xor eax, eax
        ret 8
        public_429c0b : nop
        mov eax, 0xFFFFFFF9
        ret 8
        UNREACHABLE_TRAP(0x429bf0)
    }
}

#undef public_429c0b
