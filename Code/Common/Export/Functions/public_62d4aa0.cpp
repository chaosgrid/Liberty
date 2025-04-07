#include "Common-PCH.h"


#define public_62d4aeb _public_62d4aeb
#define public_62d4af3 _public_62d4af3
#define public_62d4af9 _public_62d4af9

PROC_DECLARE(0x62d4aa0, internal_62d4aa0, public_62d4aa0);
extern "C" NAKED register_t __cdecl internal_62d4aa0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x164], eax
        fld dword ptr ds : [ecx+0x164]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62d4aeb
        fld dword ptr ds : [ecx+0x164]
        fcomp dword ptr ds : [public_639c470]
        fnstsw ax
        test ah, 5
        jp public_62d4af3
        fld dword ptr ds : [ecx+0x164]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62d4aeb
        fld dword ptr ds : [ecx+0x164]
        jmp public_62d4af9
        public_62d4aeb : nop
        fld dword ptr ds : [public_6399408]
        jmp public_62d4af9
        public_62d4af3 : nop
        fld dword ptr ds : [public_639c470]
        public_62d4af9 : nop
        fstp dword ptr ds : [ecx+0x164]
        fld dword ptr ds : [public_639a1d0]
        fsub dword ptr ds : [ecx+0x164]
        fstp dword ptr ds : [ecx+0x164]
        ret 4
        UNREACHABLE_TRAP(0x62d4aa0)
    }
}

#undef public_62d4aeb
#undef public_62d4af3
#undef public_62d4af9
