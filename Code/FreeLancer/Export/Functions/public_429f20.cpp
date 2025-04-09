#include "FreeLancer-PCH.h"


#define public_429f44 _public_429f44
#define public_429f52 _public_429f52

PROC_DECLARE(0x429f20, internal_429f20, public_429f20);
extern "C" NAKED register_t __cdecl internal_429f20()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0x54]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        je public_429f44
        fld dword ptr ds : [ecx+0x58]
        fcomp dword ptr ds : [public_5ca23c]
        fnstsw ax
        test ah, 5
        jp public_429f52
        public_429f44 : nop
        mov eax, dword ptr ds : [ecx+0x5C]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 8
        public_429f52 : nop
        mov eax, 0xFFFFFFF9
        ret 8
        UNREACHABLE_TRAP(0x429f20)
    }
}

#undef public_429f44
#undef public_429f52
