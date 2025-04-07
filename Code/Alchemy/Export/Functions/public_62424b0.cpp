#include "Alchemy-PCH.h"


#define public_62424cc _public_62424cc
#define public_62424e7 _public_62424e7
#define public_6242510 _public_6242510
#define public_6242524 _public_6242524
#define public_6242547 _public_6242547
#define public_624255a _public_624255a
#define public_624257e _public_624257e
#define public_6242585 _public_6242585
#define public_6242587 _public_6242587

PROC_DECLARE(0x62424b0, internal_62424b0, public_62424b0);
extern "C" NAKED register_t __cdecl internal_62424b0()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+0xC]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 0x41
        jp public_62424cc
        mov eax, dword ptr ds : [ecx+4]
        pop esi
        ret 8
        public_62424cc : nop
        mov edx, dword ptr ds : [esi+0x14]
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [ecx+edx*8]
        fnstsw ax
        and eax, 0x100
        jne public_62424e7
        mov eax, dword ptr ds : [ecx+edx*8+4]
        pop esi
        ret 8
        public_62424e7 : nop
        fld dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ds : [esi+0x20]
        fcomp dword ptr ds : [ecx+edi*8]
        lea edx, ds:[ecx+edi*8]
        fnstsw ax
        test ah, 5
        jp public_6242524
        fld dword ptr ss : [esp+0x10]
        lea edx, ds:[edi-1]
        mov dword ptr ds : [esi+0x20], edx
        fcomp dword ptr ds : [ecx+edx*8]
        fnstsw ax
        test ah, 5
        jp public_624255a
        public_6242510 : nop
        fld dword ptr ss : [esp+0x10]
        dec edx
        mov dword ptr ds : [esi+0x20], edx
        fcomp dword ptr ds : [ecx+edx*8]
        fnstsw ax
        test ah, 5
        jnp public_6242510
        jmp public_624255a
        public_6242524 : nop
        fld dword ptr ds : [edx+8]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_6242587
        lea edx, ds:[edi+1]
        mov dword ptr ds : [esi+0x20], edx
        fld dword ptr ds : [ecx+edx*8+8]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_624255a
        public_6242547 : nop
        inc edx
        mov dword ptr ds : [esi+0x20], edx
        fld dword ptr ds : [ecx+edx*8+8]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jnp public_6242547
        public_624255a : nop
        fld dword ptr ds : [ecx+edx*8+8]
        fsub dword ptr ds : [ecx+edx*8]
        lea edx, ds:[ecx+edx*8]
        fcom dword ptr ds : [public_624bc38]
        fnstsw ax
        test ah, 0x44
        jnp public_624257e
        fld dword ptr ds : [public_624bac4]
        fdiv st, st(1)
        fstp dword ptr ds : [esi+0x1C]
        jmp public_6242585
        public_624257e : nop
        mov dword ptr ds : [esi+0x1C], 0
        public_6242585 : nop
        fstp st(0)
        public_6242587 : nop
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+0xC]
        mov edx, dword ptr ds : [edx+4]
        fmul dword ptr ds : [esi+0x1C]
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        push edx
        call dword ptr ds : [esi+0x24]
        add esp, 0xC
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x62424b0)
    }
}

#undef public_62424cc
#undef public_62424e7
#undef public_6242510
#undef public_6242524
#undef public_6242547
#undef public_624255a
#undef public_624257e
#undef public_6242585
#undef public_6242587
