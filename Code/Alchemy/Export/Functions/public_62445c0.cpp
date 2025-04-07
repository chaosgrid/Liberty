#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62445c0);

#define public_62445d9 _public_62445d9
#define public_62445e5 _public_62445e5
#define public_6244610 _public_6244610
#define public_6244645 _public_6244645
#define public_624464c _public_624464c

PROC_DECLARE(0x62445c0, internal_62445c0, public_62445c0);
extern "C" NAKED register_t __cdecl internal_62445c0()
{
    __asm
    {
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_624fc60]
        sub esp, 0x18
        push ebx
        xor ebx, ebx
        fnstsw ax
        push esi
        push edi
        test ah, 5
        jp public_62445e5
        public_62445d9 : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x18
        ret 0x10
        public_62445e5 : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov esi, dword ptr ss : [esp+0x2C]
        mov ecx, 6
        lea edi, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ss : [esp+0x28]
        rep movsd
        mov edi, dword ptr ds : [eax+0xA0]
        mov esi, dword ptr ds : [eax+0x9C]
        cmp esi, edi
        je public_624464c
        public_6244610 : nop
        mov eax, dword ptr ds : [esi]
        lea edx, ss:[esp+0x2C]
        push edx
        lea edx, ss:[esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xA4]
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ss : [esp+0x30]
        fnstsw ax
        test ah, 0x44
        jnp public_6244645
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ss : [esp+0x34]
        fnstsw ax
        and eax, 0x4100
        je public_62445d9
        public_6244645 : nop
        add esi, 4
        cmp esi, edi
        jne public_6244610
        public_624464c : nop
        pop edi
        mov eax, ebx
        pop esi
        pop ebx
        add esp, 0x18
        ret 0x10
        UNREACHABLE_TRAP(0x62445c0)
    }
}

#undef public_62445d9
#undef public_62445e5
#undef public_6244610
#undef public_6244645
#undef public_624464c
