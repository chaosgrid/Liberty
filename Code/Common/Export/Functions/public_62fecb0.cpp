#include "Common-PCH.h"


#define public_62fecbd _public_62fecbd
#define public_62fecc5 _public_62fecc5
#define public_62fece2 _public_62fece2
#define public_62fecfc _public_62fecfc
#define public_62fed07 _public_62fed07
#define public_62fed22 _public_62fed22
#define public_62fed2f _public_62fed2f
#define public_62fed54 _public_62fed54

PROC_DECLARE(0x62fecb0, internal_62fecb0, public_62fecb0);
extern "C" NAKED register_t __cdecl internal_62fecb0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [ecx+4]
        test esi, esi
        push edi
        jne public_62fecbd
        xor edx, edx
        jmp public_62fecc5
        public_62fecbd : nop
        mov edx, dword ptr ds : [ecx+8]
        sub edx, esi
        sar edx, 3
        public_62fecc5 : nop
        fld dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [esi]
        fnstsw ax
        test ah, 1
        jne public_62fece2
        fstp st(0)
        pop edi
        fld dword ptr ds : [esi+4]
        pop esi
        ret 4
        public_62fece2 : nop
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [esi+edx*8-8]
        fnstsw ax
        test ah, 0x41
        jp public_62fecfc
        fstp st(0)
        pop edi
        fld dword ptr ds : [esi+edx*8-4]
        pop esi
        ret 4
        public_62fecfc : nop
        lea edi, ds:[edx-1]
        xor ecx, ecx
        test edi, edi
        jle public_62fed54
        mov edx, esi
        public_62fed07 : nop
        fld dword ptr ds : [edx]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 1
        jne public_62fed22
        fld dword ptr ds : [edx+8]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x41
        jnp public_62fed2f
        public_62fed22 : nop
        inc ecx
        add edx, 8
        cmp ecx, edi
        jl public_62fed07
        pop edi
        pop esi
        ret 4
        public_62fed2f : nop
        fstp st(0)
        fld dword ptr ds : [esi+ecx*8]
        fld dword ptr ds : [esi+ecx*8+4]
        fld dword ptr ds : [esi+ecx*8+0xC]
        fsub st, st(1)
        fld dword ptr ss : [esp+0xC]
        fsub st, st(3)
        fmulp 
        fld dword ptr ds : [esi+ecx*8+8]
        fsub st, st(3)
        fdivp 
        fadd st, st(1)
        fstp st(2)
        fstp st(0)
        public_62fed54 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62fecb0)
    }
}

#undef public_62fecbd
#undef public_62fecc5
#undef public_62fece2
#undef public_62fecfc
#undef public_62fed07
#undef public_62fed22
#undef public_62fed2f
#undef public_62fed54
