#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c2430);

#define public_62c1092 _public_62c1092
#define public_62c1094 _public_62c1094

PROC_DECLARE(0x62c1080, internal_62c1080, public_62c1080);
extern "C" NAKED register_t __cdecl internal_62c1080()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_62c1092
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_62c1094
        public_62c1092 : nop
        xor eax, eax
        public_62c1094 : nop
        mov eax, dword ptr ds : [eax+0xAC]
        mov edx, dword ptr ss : [esp+0xC]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        push edx
        push ecx
        call public_62c2430
        add esp, 0x18
        ret 0x10
        UNREACHABLE_TRAP(0x62c1080)
    }
}

#undef public_62c1092
#undef public_62c1094
