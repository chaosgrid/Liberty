#include "FLMaterials-PCH.h"


#define public_66f2a08 _public_66f2a08
#define public_66f2a20 _public_66f2a20
#define public_66f2a57 _public_66f2a57
#define public_66f2a5e _public_66f2a5e
#define public_66f2a66 _public_66f2a66
#define public_66f2a9c _public_66f2a9c
#define public_66f2ab6 _public_66f2ab6
#define public_66f2ac9 _public_66f2ac9

PROC_DECLARE(0x66f29f0, internal_66f29f0, public_66f29f0);
extern "C" NAKED register_t __cdecl internal_66f29f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx+0x10]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [edi], eax
        je public_66f2a08
        pop edi
        xor al, al
        pop esi
        ret 0xC
        public_66f2a08 : nop
        sub eax, 2
        je public_66f2a9c
        dec eax
        je public_66f2a5e
        dec eax
        jne public_66f2a57
        lea edx, ds:[ecx+0x28]
        xor esi, esi
        lea ecx, ds:[edi+4]
        nop 
        public_66f2a20 : nop
        fld dword ptr ds : [edx+0x14]
        fadd dword ptr ds : [public_67013ec]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 0x41
        jnp public_66f2ac9
        fld dword ptr ds : [edx]
        fsub dword ptr ds : [public_67013ec]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 1
        je public_66f2ac9
        inc esi
        add ecx, 4
        add edx, 4
        cmp esi, 4
        jl public_66f2a20
        public_66f2a57 : nop
        pop edi
        mov al, 1
        pop esi
        ret 0xC
        public_66f2a5e : nop
        lea edx, ds:[ecx+0x28]
        xor esi, esi
        lea ecx, ds:[edi+4]
        public_66f2a66 : nop
        fld dword ptr ds : [edx+0x14]
        fadd dword ptr ds : [public_67013ec]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 0x41
        jnp public_66f2ac9
        fld dword ptr ds : [edx]
        fsub dword ptr ds : [public_67013ec]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 1
        je public_66f2ac9
        inc esi
        add ecx, 4
        add edx, 4
        cmp esi, 3
        jl public_66f2a66
        pop edi
        mov al, 1
        pop esi
        ret 0xC
        public_66f2a9c : nop
        fld dword ptr ds : [ecx+0x3C]
        fadd dword ptr ds : [public_67013ec]
        fcomp dword ptr ds : [edi+4]
        fnstsw ax
        test ah, 0x41
        jp public_66f2ab6
        pop edi
        xor al, al
        pop esi
        ret 0xC
        public_66f2ab6 : nop
        fld dword ptr ds : [ecx+0x28]
        fsub dword ptr ds : [public_67013ec]
        fcomp dword ptr ds : [edi+4]
        fnstsw ax
        test ah, 1
        jne public_66f2a57
        public_66f2ac9 : nop
        pop edi
        xor al, al
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x66f29f0)
    }
}

#undef public_66f2a08
#undef public_66f2a20
#undef public_66f2a57
#undef public_66f2a5e
#undef public_66f2a66
#undef public_66f2a9c
#undef public_66f2ab6
#undef public_66f2ac9
