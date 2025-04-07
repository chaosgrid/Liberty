#include "Deformable2-PCH.h"


#define public_65ff488 _public_65ff488
#define public_65ff4a0 _public_65ff4a0
#define public_65ff4d7 _public_65ff4d7
#define public_65ff4de _public_65ff4de
#define public_65ff4e6 _public_65ff4e6
#define public_65ff51c _public_65ff51c
#define public_65ff536 _public_65ff536
#define public_65ff549 _public_65ff549

PROC_DECLARE(0x65ff470, internal_65ff470, public_65ff470);
extern "C" NAKED register_t __cdecl internal_65ff470()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx+0x10]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [edi], eax
        je public_65ff488
        pop edi
        xor al, al
        pop esi
        ret 0xC
        public_65ff488 : nop
        sub eax, 2
        je public_65ff51c
        dec eax
        je public_65ff4de
        dec eax
        jne public_65ff4d7
        lea edx, ds:[ecx+0x28]
        xor esi, esi
        lea ecx, ds:[edi+4]
        nop 
        public_65ff4a0 : nop
        fld dword ptr ds : [edx+0x14]
        fadd dword ptr ds : [public_6601578]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 0x41
        jnp public_65ff549
        fld dword ptr ds : [edx]
        fsub dword ptr ds : [public_6601578]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 1
        je public_65ff549
        inc esi
        add ecx, 4
        add edx, 4
        cmp esi, 4
        jl public_65ff4a0
        public_65ff4d7 : nop
        pop edi
        mov al, 1
        pop esi
        ret 0xC
        public_65ff4de : nop
        lea edx, ds:[ecx+0x28]
        xor esi, esi
        lea ecx, ds:[edi+4]
        public_65ff4e6 : nop
        fld dword ptr ds : [edx+0x14]
        fadd dword ptr ds : [public_6601578]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 0x41
        jnp public_65ff549
        fld dword ptr ds : [edx]
        fsub dword ptr ds : [public_6601578]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 1
        je public_65ff549
        inc esi
        add ecx, 4
        add edx, 4
        cmp esi, 3
        jl public_65ff4e6
        pop edi
        mov al, 1
        pop esi
        ret 0xC
        public_65ff51c : nop
        fld dword ptr ds : [ecx+0x3C]
        fadd dword ptr ds : [public_6601578]
        fcomp dword ptr ds : [edi+4]
        fnstsw ax
        test ah, 0x41
        jp public_65ff536
        pop edi
        xor al, al
        pop esi
        ret 0xC
        public_65ff536 : nop
        fld dword ptr ds : [ecx+0x28]
        fsub dword ptr ds : [public_6601578]
        fcomp dword ptr ds : [edi+4]
        fnstsw ax
        test ah, 1
        jne public_65ff4d7
        public_65ff549 : nop
        pop edi
        xor al, al
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x65ff470)
    }
}

#undef public_65ff488
#undef public_65ff4a0
#undef public_65ff4d7
#undef public_65ff4de
#undef public_65ff4e6
#undef public_65ff51c
#undef public_65ff536
#undef public_65ff549
