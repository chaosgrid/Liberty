#include "Common-PCH.h"


#define public_62c5ade _public_62c5ade

PROC_DECLARE(0x62c5ac0, internal_62c5ac0, public_62c5ac0);
extern "C" NAKED register_t __cdecl internal_62c5ac0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+8]
        test al, al
        je public_62c5ade
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        lea esi, ds:[ecx+0xC]
        mov ecx, 0x16
        rep movsd
        pop edi
        mov al, 1
        pop esi
        ret 4
        public_62c5ade : nop
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x62c5ac0)
    }
}

#undef public_62c5ade
