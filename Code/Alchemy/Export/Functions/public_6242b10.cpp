#include "Alchemy-PCH.h"


#define public_6242b2c _public_6242b2c
#define public_6242b47 _public_6242b47
#define public_6242b70 _public_6242b70
#define public_6242b84 _public_6242b84
#define public_6242ba7 _public_6242ba7
#define public_6242bba _public_6242bba
#define public_6242bde _public_6242bde
#define public_6242be5 _public_6242be5
#define public_6242be7 _public_6242be7

PROC_DECLARE(0x6242b10, internal_6242b10, public_6242b10);
extern "C" NAKED register_t __cdecl internal_6242b10()
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
        jp public_6242b2c
        fld dword ptr ds : [ecx+4]
        pop esi
        ret 8
        public_6242b2c : nop
        mov edx, dword ptr ds : [esi+0x14]
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [ecx+edx*8]
        fnstsw ax
        and eax, 0x100
        jne public_6242b47
        fld dword ptr ds : [ecx+edx*8+4]
        pop esi
        ret 8
        public_6242b47 : nop
        fld dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ds : [esi+0x20]
        fcomp dword ptr ds : [ecx+edi*8]
        lea edx, ds:[ecx+edi*8]
        fnstsw ax
        test ah, 5
        jp public_6242b84
        fld dword ptr ss : [esp+0x10]
        lea edx, ds:[edi-1]
        mov dword ptr ds : [esi+0x20], edx
        fcomp dword ptr ds : [ecx+edx*8]
        fnstsw ax
        test ah, 5
        jp public_6242bba
        public_6242b70 : nop
        fld dword ptr ss : [esp+0x10]
        dec edx
        mov dword ptr ds : [esi+0x20], edx
        fcomp dword ptr ds : [ecx+edx*8]
        fnstsw ax
        test ah, 5
        jnp public_6242b70
        jmp public_6242bba
        public_6242b84 : nop
        fld dword ptr ds : [edx+8]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_6242be7
        lea edx, ds:[edi+1]
        mov dword ptr ds : [esi+0x20], edx
        fld dword ptr ds : [ecx+edx*8+8]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_6242bba
        public_6242ba7 : nop
        inc edx
        mov dword ptr ds : [esi+0x20], edx
        fld dword ptr ds : [ecx+edx*8+8]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jnp public_6242ba7
        public_6242bba : nop
        fld dword ptr ds : [ecx+edx*8+8]
        fsub dword ptr ds : [ecx+edx*8]
        lea edx, ds:[ecx+edx*8]
        fcom dword ptr ds : [public_624bc38]
        fnstsw ax
        test ah, 0x44
        jnp public_6242bde
        fld dword ptr ds : [public_624bac4]
        fdiv st, st(1)
        fstp dword ptr ds : [esi+0x1C]
        jmp public_6242be5
        public_6242bde : nop
        mov dword ptr ds : [esi+0x1C], 0
        public_6242be5 : nop
        fstp st(0)
        public_6242be7 : nop
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
        UNREACHABLE_TRAP(0x6242b10)
    }
}

#undef public_6242b2c
#undef public_6242b47
#undef public_6242b70
#undef public_6242b84
#undef public_6242ba7
#undef public_6242bba
#undef public_6242bde
#undef public_6242be5
#undef public_6242be7
