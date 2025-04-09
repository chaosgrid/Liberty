#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402500);
CLANG_FORWARD_PROC_SYMBOL(public_406cd0);

#define public_40c2ca _public_40c2ca
#define public_40c2d8 _public_40c2d8
#define public_40c304 _public_40c304
#define public_40c309 _public_40c309
#define public_40c31e _public_40c31e
#define public_40c373 _public_40c373
#define public_40c3c7 _public_40c3c7
#define public_40c41c _public_40c41c
#define public_40c471 _public_40c471
#define public_40c4c5 _public_40c4c5

PROC_DECLARE(0x40c290, internal_40c290, public_40c290);
extern "C" NAKED register_t __cdecl internal_40c290()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        push ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        test edi, edi
        mov esi, ecx
        je public_40c4c5
        mov eax, dword ptr ds : [edi+4]
        push eax
        lea ebx, ds:[esi+4]
        push ebx
        call public_402500
        fld dword ptr ds : [edi+8]
        fcomp dword ptr ds : [esi+8]
        add esp, 8
        fnstsw ax
        test ah, 0x44
        jnp public_40c2ca
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], ecx
        public_40c2ca : nop
        cmp dword ptr ds : [ebx], 0
        jne public_40c2d8
        mov dword ptr ds : [esi+0xC], 0xBF800000
        jmp public_40c31e
        public_40c2d8 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        call dword ptr ds : [public_5c602c]
        test al, al
        je public_40c31e
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 3
        je public_40c304
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        cmp eax, 2
        mov byte ptr ss : [esp+0xC], 0
        jne public_40c309
        public_40c304 : nop
        mov byte ptr ss : [esp+0xC], 1
        public_40c309 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [edx+0x40]
        push ecx
        push 0
        push eax
        mov ecx, esi
        call public_406cd0
        public_40c31e : nop
        fld dword ptr ds : [edi+0xAC]
        fcomp dword ptr ds : [esi+0xAC]
        fnstsw ax
        test ah, 0x44
        jnp public_40c373
        fld dword ptr ds : [edi+0xAC]
        mov ecx, dword ptr ds : [public_5c6d18]
        sub esp, 0x10
        fstp qword ptr ss : [esp+8]
        mov eax, 0x100002
        fld dword ptr ds : [esi+0xAC]
        fstp qword ptr ss : [esp]
        push 0x747
/*FIXUP push offset public_5c8368 @0x40c357*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8368
/*FIXUP push offset public_5c8334 @0x40c35c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8334
        push eax
        call dword ptr ds : [ecx]
        mov edx, dword ptr ds : [edi+0xAC]
        add esp, 0x20
        mov dword ptr ds : [esi+0xAC], edx
        public_40c373 : nop
        fld dword ptr ds : [edi+0xA8]
        fcomp dword ptr ds : [esi+0xA8]
        fnstsw ax
        test ah, 0x44
        jnp public_40c3c7
        fld dword ptr ds : [edi+0xA8]
        sub esp, 0x10
        fstp qword ptr ss : [esp+8]
        mov eax, 0x100002
        fld dword ptr ds : [esi+0xA8]
        fstp qword ptr ss : [esp]
        push 0x748
/*FIXUP push offset public_5c8368 @0x40c3a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8368
/*FIXUP push offset public_5c82fc @0x40c3ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c82fc
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+0xA8]
        add esp, 0x20
        mov dword ptr ds : [esi+0xA8], ecx
        public_40c3c7 : nop
        fld dword ptr ds : [edi+0x94]
        fcomp dword ptr ds : [esi+0x94]
        fnstsw ax
        test ah, 0x44
        jnp public_40c41c
        fld dword ptr ds : [edi+0x94]
        mov edx, dword ptr ds : [public_5c6d18]
        sub esp, 0x10
        fstp qword ptr ss : [esp+8]
        mov eax, 0x100002
        fld dword ptr ds : [esi+0x94]
        fstp qword ptr ss : [esp]
        push 0x74A
/*FIXUP push offset public_5c8368 @0x40c400*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8368
/*FIXUP push offset public_5c82bc @0x40c405*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c82bc
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [edi+0x94]
        add esp, 0x20
        mov dword ptr ds : [esi+0x94], eax
        public_40c41c : nop
        fld dword ptr ds : [edi+0x9C]
        fcomp dword ptr ds : [esi+0x9C]
        fnstsw ax
        test ah, 0x44
        jnp public_40c471
        fld dword ptr ds : [edi+0x9C]
        mov ecx, dword ptr ds : [public_5c6d18]
        sub esp, 0x10
        fstp qword ptr ss : [esp+8]
        mov eax, 0x100002
        fld dword ptr ds : [esi+0x9C]
        fstp qword ptr ss : [esp]
        push 0x74B
/*FIXUP push offset public_5c8368 @0x40c455*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8368
/*FIXUP push offset public_5c827c @0x40c45a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c827c
        push eax
        call dword ptr ds : [ecx]
        mov edx, dword ptr ds : [edi+0x9C]
        add esp, 0x20
        mov dword ptr ds : [esi+0x9C], edx
        public_40c471 : nop
        fld dword ptr ds : [edi+0x98]
        fcomp dword ptr ds : [esi+0x98]
        fnstsw ax
        test ah, 0x44
        jnp public_40c4c5
        fld dword ptr ds : [edi+0x98]
        sub esp, 0x10
        fstp qword ptr ss : [esp+8]
        mov eax, 0x100002
        fld dword ptr ds : [esi+0x98]
        fstp qword ptr ss : [esp]
        push 0x74C
/*FIXUP push offset public_5c8368 @0x40c4a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8368
/*FIXUP push offset public_5c8240 @0x40c4a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8240
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+0x98]
        add esp, 0x20
        mov dword ptr ds : [esi+0x98], ecx
        public_40c4c5 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x40c290)
    }
}

#undef public_40c2ca
#undef public_40c2d8
#undef public_40c304
#undef public_40c309
#undef public_40c31e
#undef public_40c373
#undef public_40c3c7
#undef public_40c41c
#undef public_40c471
#undef public_40c4c5
