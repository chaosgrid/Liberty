#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51b650);

#define public_51b6d5 _public_51b6d5

PROC_DECLARE(0x51b650, internal_51b650, public_51b650);
extern "C" NAKED register_t __cdecl internal_51b650()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0xC]
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_5c7474]
        mov ecx, eax
        fnstsw ax
        test ah, 0x44
        jnp public_51b6d5
        fld dword ptr ds : [ecx]
        lea edx, ds:[esi+0xDC]
        fsub dword ptr ds : [esi+0xD0]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [esi+0xD4]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [esi+0xD8]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [public_5c75dc]
        fdiv dword ptr ss : [esp+0x20]
        fst dword ptr ss : [esp+0x20]
        fmul st, st(2)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+4]
        fmul st, st(1)
        mov dword ptr ds : [edx], eax
        fstp dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+8]
        fstp st(0)
        mov dword ptr ds : [edx+4], eax
        fstp st(0)
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+8], eax
        public_51b6d5 : nop
        mov edx, dword ptr ds : [ecx]
        add esi, 0xD0
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ecx
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x51b650)
    }
}

#undef public_51b6d5
