#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_456a40);

#define public_456a89 _public_456a89
#define public_456ab3 _public_456ab3
#define public_456ac6 _public_456ac6
#define public_456ac8 _public_456ac8
#define public_456ade _public_456ade

PROC_DECLARE(0x456a40, internal_456a40, public_456a40);
extern "C" NAKED register_t __cdecl internal_456a40()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x10]
        fcomp dword ptr ds : [ecx+0x18]
        fnstsw ax
        test ah, 0x44
        jnp public_456ab3
        fld dword ptr ds : [ecx+0x1C]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_456ab3
        fld dword ptr ds : [ecx+0x10]
        fcomp dword ptr ds : [ecx+0x18]
        fnstsw ax
        test ah, 5
        jp public_456a89
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [ecx+0x1C]
        fadd dword ptr ds : [ecx+0x10]
        fst dword ptr ds : [ecx+0x10]
        fcomp dword ptr ds : [ecx+0x18]
        fnstsw ax
        test ah, 0x41
        jne public_456ab3
        mov eax, dword ptr ds : [ecx+0x18]
        mov dword ptr ds : [ecx+0x10], eax
        jmp public_456ab3
        public_456a89 : nop
        fld dword ptr ds : [ecx+0x10]
        fcomp dword ptr ds : [ecx+0x18]
        fnstsw ax
        test ah, 0x41
        jne public_456ab3
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [ecx+0x1C]
        fsubr dword ptr ds : [ecx+0x10]
        fst dword ptr ds : [ecx+0x10]
        fcomp dword ptr ds : [ecx+0x18]
        fnstsw ax
        test ah, 5
        jp public_456ab3
        mov edx, dword ptr ds : [ecx+0x18]
        mov dword ptr ds : [ecx+0x10], edx
        public_456ab3 : nop
        fld dword ptr ds : [ecx+0x10]
        xor dl, dl
        fcomp dword ptr ds : [ecx+0x14]
        fnstsw ax
        test ah, 0x44
        jnp public_456ac6
        mov al, 1
        jmp public_456ac8
        public_456ac6 : nop
        xor al, al
        public_456ac8 : nop
        push ebx
        mov bl, byte ptr ds : [ecx+0x20]
        push esi
        mov esi, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x14], esi
        pop esi
        cmp bl, dl
        pop ebx
        mov byte ptr ds : [ecx+0x20], dl
        je public_456ade
        mov al, 1
        public_456ade : nop
        ret 4
        UNREACHABLE_TRAP(0x456a40)
    }
}

#undef public_456a89
#undef public_456ab3
#undef public_456ac6
#undef public_456ac8
#undef public_456ade
