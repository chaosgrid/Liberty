#include "Shading-PCH.h"


#define public_6eb22f8 _public_6eb22f8
#define public_6eb2310 _public_6eb2310
#define public_6eb2347 _public_6eb2347
#define public_6eb234e _public_6eb234e
#define public_6eb2356 _public_6eb2356
#define public_6eb238c _public_6eb238c
#define public_6eb23a6 _public_6eb23a6
#define public_6eb23b9 _public_6eb23b9

PROC_DECLARE(0x6eb22e0, internal_6eb22e0, public_6eb22e0);
extern "C" NAKED register_t __cdecl internal_6eb22e0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx+0x10]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [edi], eax
        je public_6eb22f8
        pop edi
        xor al, al
        pop esi
        ret 0xC
        public_6eb22f8 : nop
        sub eax, 2
        je public_6eb238c
        dec eax
        je public_6eb234e
        dec eax
        jne public_6eb2347
        lea edx, ds:[ecx+0x28]
        xor esi, esi
        lea ecx, ds:[edi+4]
        nop 
        public_6eb2310 : nop
        fld dword ptr ds : [edx+0x14]
        fadd dword ptr ds : [public_6ed1274]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 0x41
        jnp public_6eb23b9
        fld dword ptr ds : [edx]
        fsub dword ptr ds : [public_6ed1274]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 1
        je public_6eb23b9
        inc esi
        add ecx, 4
        add edx, 4
        cmp esi, 4
        jl public_6eb2310
        public_6eb2347 : nop
        pop edi
        mov al, 1
        pop esi
        ret 0xC
        public_6eb234e : nop
        lea edx, ds:[ecx+0x28]
        xor esi, esi
        lea ecx, ds:[edi+4]
        public_6eb2356 : nop
        fld dword ptr ds : [edx+0x14]
        fadd dword ptr ds : [public_6ed1274]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 0x41
        jnp public_6eb23b9
        fld dword ptr ds : [edx]
        fsub dword ptr ds : [public_6ed1274]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 1
        je public_6eb23b9
        inc esi
        add ecx, 4
        add edx, 4
        cmp esi, 3
        jl public_6eb2356
        pop edi
        mov al, 1
        pop esi
        ret 0xC
        public_6eb238c : nop
        fld dword ptr ds : [ecx+0x3C]
        fadd dword ptr ds : [public_6ed1274]
        fcomp dword ptr ds : [edi+4]
        fnstsw ax
        test ah, 0x41
        jp public_6eb23a6
        pop edi
        xor al, al
        pop esi
        ret 0xC
        public_6eb23a6 : nop
        fld dword ptr ds : [ecx+0x28]
        fsub dword ptr ds : [public_6ed1274]
        fcomp dword ptr ds : [edi+4]
        fnstsw ax
        test ah, 1
        jne public_6eb2347
        public_6eb23b9 : nop
        pop edi
        xor al, al
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6eb22e0)
    }
}

#undef public_6eb22f8
#undef public_6eb2310
#undef public_6eb2347
#undef public_6eb234e
#undef public_6eb2356
#undef public_6eb238c
#undef public_6eb23a6
#undef public_6eb23b9
