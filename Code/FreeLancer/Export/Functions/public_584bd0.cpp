#include "FreeLancer-PCH.h"


#define public_584c6f _public_584c6f

PROC_DECLARE(0x584bd0, internal_584bd0, public_584bd0);
extern "C" NAKED register_t __cdecl internal_584bd0()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax]
        push esi
        fmul dword ptr ds : [public_5e4d14]
        mov esi, ecx
        lea ecx, ss:[esp+0xC]
        lea edx, ss:[esp+8]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [public_5e4d14]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+8]
        lea eax, ss:[esp+0x10]
        fmul dword ptr ds : [public_5e4d14]
        push eax
        push ecx
        mov ecx, dword ptr ds : [public_67dbf8]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        fstp dword ptr ss : [esp+0x28]
/*FIXUP push offset public_67dbf8 @0x584c1a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call dword ptr ds : [ecx+0x34]
        fild dword ptr ds : [esi+0x494]
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 5
        jp public_584c6f
        fild dword ptr ds : [esi+0x49C]
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x41
        jne public_584c6f
        fild dword ptr ds : [esi+0x498]
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 5
        jp public_584c6f
        fild dword ptr ds : [esi+0x4A0]
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 0x41
        jne public_584c6f
        mov al, 1
        pop esi
        add esp, 0x18
        ret 4
        public_584c6f : nop
        xor al, al
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x584bd0)
    }
}

#undef public_584c6f
