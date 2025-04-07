#include "SoundManager-PCH.h"


#define public_6ee1649 _public_6ee1649
#define public_6ee165e _public_6ee165e

PROC_DECLARE(0x6ee1620, internal_6ee1620, public_6ee1620);
extern "C" NAKED register_t __cdecl internal_6ee1620()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        fcom qword ptr ds : [public_6ee9238]
        fnstsw ax
        test ah, 0x41
        jne public_6ee1649
        mov eax, dword ptr ss : [esp+4]
        fstp st(0)
        fld dword ptr ds : [public_6ee9230]
        mov byte ptr ds : [eax+0x28], 1
        fstp dword ptr ds : [eax+0x18]
        xor eax, eax
        ret 8
        public_6ee1649 : nop
        fcom qword ptr ds : [public_6ee9228]
        fnstsw ax
        test ah, 5
        jp public_6ee165e
        fstp st(0)
        fld dword ptr ds : [public_6ee9220]
        public_6ee165e : nop
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x18]
        mov byte ptr ds : [eax+0x28], 1
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6ee1620)
    }
}

#undef public_6ee1649
#undef public_6ee165e
