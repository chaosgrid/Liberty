#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f2ac);

#define public_6d0cb8e _public_6d0cb8e
#define public_6d0cbbb _public_6d0cbbb
#define public_6d0cbc5 _public_6d0cbc5
#define public_6d0cca8 _public_6d0cca8
#define public_6d0ccaa _public_6d0ccaa

PROC_DECLARE(0x6d0cb25, internal_6d0cb25, public_6d0cb25);
extern "C" NAKED register_t __cdecl internal_6d0cb25()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x60
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0cb8e
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0x4C]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0x4C], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0x4C]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0x4C], ecx
/*FIXUP push offset public_6d66ba8 @0x6d0cb64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66ba8
        push 0xB3D
/*FIXUP push offset public_6d66be0 @0x6d0cb6e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66be0
/*FIXUP push offset public_6d66c2c @0x6d0cb73*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66c2c
        mov edx, dword ptr ss : [ebp-0x4C]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0ccaa
        public_6d0cb8e : nop
        fld dword ptr ss : [ebp+0x14]
        fcomp qword ptr ds : [public_6d5e4a8]
        fnstsw ax
        test ah, 0x41
        jnp public_6d0cbbb
        fld dword ptr ss : [ebp+0x18]
        fcomp qword ptr ds : [public_6d5e4a8]
        fnstsw ax
        test ah, 0x41
        jnp public_6d0cbbb
        fld dword ptr ss : [ebp+0x18]
        fcomp dword ptr ss : [ebp+0x14]
        fnstsw ax
        test ah, 0x44
        jp public_6d0cbc5
        public_6d0cbbb : nop
        mov eax, 0xFFFFFFFF
        jmp public_6d0ccaa
        public_6d0cbc5 : nop
        fld qword ptr ds : [public_6d5e1c8]
        fdiv qword ptr ds : [public_6d5e4a0]
        fmul dword ptr ss : [ebp+0xC]
        fst dword ptr ss : [ebp-0x60]
        call public_6d2f2ac
        fdivr qword ptr ds : [public_6d5e498]
        fstp dword ptr ss : [ebp-0x48]
        fld dword ptr ss : [ebp+0x18]
        fsub dword ptr ss : [ebp+0x14]
        fdivr dword ptr ds : [public_6d5e488]
        fstp dword ptr ss : [ebp-0x44]
        mov ecx, 0x10
        xor eax, eax
        lea edi, ss:[ebp-0x40]
        rep stosd
        fld dword ptr ss : [ebp-0x48]
        fdiv dword ptr ss : [ebp+0x10]
        fstp dword ptr ss : [ebp-0x40]
        mov ecx, dword ptr ss : [ebp-0x48]
        mov dword ptr ss : [ebp-0x2C], ecx
        fld dword ptr ss : [ebp+0x18]
        fmul dword ptr ss : [ebp-0x44]
        fstp dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-0x14], 0x3F800000
        fld dword ptr ss : [ebp+0x18]
        fchs 
        fmul dword ptr ss : [ebp+0x14]
        fmul dword ptr ss : [ebp-0x44]
        fstp dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x5C], 3
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x130]
        mov dword ptr ss : [ebp-0x58], eax
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x2284
        mov dword ptr ss : [ebp-0x54], ecx
        mov ecx, 0x10
        lea esi, ss:[ebp-0x40]
        mov edi, dword ptr ss : [ebp-0x54]
        rep movsd
        mov edx, dword ptr ss : [ebp-0x54]
        mov byte ptr ds : [edx+0x40], 0
        xor eax, eax
        test eax, eax
        je public_6d0cca8
        mov ecx, dword ptr ss : [ebp-0x54]
        movzx edx, byte ptr ds : [ecx+0x40]
        test edx, edx
        jne public_6d0cca8
        mov eax, dword ptr ss : [ebp-0x54]
        mov byte ptr ds : [eax+0x41], 0
        mov ecx, dword ptr ss : [ebp-0x54]
        mov byte ptr ds : [ecx+0x40], 1
        mov edx, dword ptr ss : [ebp-0x54]
        push edx
        mov eax, dword ptr ss : [ebp-0x5C]
        push eax
        mov ecx, dword ptr ss : [ebp-0x58]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0x58]
        push eax
        call dword ptr ds : [edx+0x94]
        mov dword ptr ss : [ebp-0x50], eax
        xor ecx, ecx
        cmp dword ptr ss : [ebp-0x50], 0
        setge cl
        mov edx, dword ptr ss : [ebp-0x54]
        mov byte ptr ds : [edx+0x40], cl
        public_6d0cca8 : nop
        xor eax, eax
        public_6d0ccaa : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x14
        UNREACHABLE_TRAP(0x6d0cb25)
    }
}

#undef public_6d0cb8e
#undef public_6d0cbbb
#undef public_6d0cbc5
#undef public_6d0cca8
#undef public_6d0ccaa
