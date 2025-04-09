#include "FreeLancer-PCH.h"


#define public_4547b5 _public_4547b5

PROC_DECLARE(0x454790, internal_454790, public_454790);
extern "C" NAKED register_t __cdecl internal_454790()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6d44]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_4547b5
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        public_4547b5 : nop
        xor eax, eax
        ret 0x14
        UNREACHABLE_TRAP(0x454790)
    }
}

#undef public_4547b5
