#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ccbd0);
CLANG_FORWARD_PROC_SYMBOL(public_59ec80);

#define public_4ccc75 _public_4ccc75
#define public_4cccd4 _public_4cccd4
#define public_4ccd33 _public_4ccd33
#define public_4ccd63 _public_4ccd63
#define public_4ccd86 _public_4ccd86
#define public_4ccdb9 _public_4ccdb9
#define public_4ccdc9 _public_4ccdc9

PROC_DECLARE(0x4ccbd0, internal_4ccbd0, public_4ccbd0);
extern "C" NAKED register_t __cdecl internal_4ccbd0()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        mov ebx, dword ptr ds : [public_5c6cf4]
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov edi, ecx
/*FIXUP push offset public_5d74c0 @0x4ccbe2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d74c0
        mov ecx, esi
        call ebx
        test al, al
        mov ecx, esi
        je public_4ccc75
        push 0
        push 0
        add edi, 0x50
        call dword ptr ds : [public_5c6698]
        push eax
        mov ecx, edi
        call public_59ec80
        movzx eax, byte ptr ds : [public_679bb0]
        mov dword ptr ss : [esp+0x24], eax
        fild dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [edi+0x14]
        movzx ecx, byte ptr ds : [public_679bb1]
        mov dword ptr ss : [esp+0x24], ecx
        fild dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [edi+0x18]
        movzx edx, byte ptr ds : [public_679bb2]
        mov dword ptr ss : [esp+0x24], edx
        fild dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [edi+0x1C]
        movzx eax, byte ptr ds : [public_679bb3]
        mov dword ptr ss : [esp+0x24], eax
        mov al, 1
        fild dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ds : [edi+0x24]
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret 4
/*FIXUP public_4ccc75 : nop
        push offset public_5d74b8 @0x4ccc75*/
  FIXUP public_4ccc75 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d74b8
        call ebx
        test al, al
        mov ecx, esi
        je public_4cccd4
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0xC]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x14]
        fld qword ptr ss : [esp+0xC]
        push 2
        mov ecx, esi
        fstp dword ptr ss : [esp+0x1C]
        call dword ptr ds : [public_5c6cfc]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        add edi, 0x30
        mov dword ptr ds : [edi], ecx
        fstp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x14
        ret 4
/*FIXUP public_4cccd4 : nop
        push offset public_5d74b0 @0x4cccd4*/
  FIXUP public_4cccd4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d74b0
        call ebx
        test al, al
        mov ecx, esi
        je public_4ccd33
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0xC]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x14]
        fld qword ptr ss : [esp+0xC]
        push 2
        mov ecx, esi
        fstp dword ptr ss : [esp+0x1C]
        call dword ptr ds : [public_5c6cfc]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        add edi, 0x24
        mov dword ptr ds : [edi], ecx
        fstp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x14
        ret 4
/*FIXUP public_4ccd33 : nop
        push offset public_5d74a4 @0x4ccd33*/
  FIXUP public_4ccd33 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d74a4
        call ebx
        test al, al
        mov ecx, esi
        je public_4ccd63
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x3C]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x40]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x14
        ret 4
/*FIXUP public_4ccd63 : nop
        push offset public_5d7498 @0x4ccd63*/
  FIXUP public_4ccd63 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7498
        call ebx
        test al, al
        mov ecx, esi
        je public_4ccd86
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x48]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x14
        ret 4
/*FIXUP public_4ccd86 : nop
        push offset public_5d7490 @0x4ccd86*/
  FIXUP public_4ccd86 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7490
        call ebx
        test al, al
        je public_4ccdc9
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jnp public_4ccdb9
        mov eax, 1
        mov byte ptr ds : [edi+0x4E], al
        pop edi
        pop esi
        pop ebx
        add esp, 0x14
        ret 4
        public_4ccdb9 : nop
        xor eax, eax
        mov byte ptr ds : [edi+0x4E], al
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x14
        ret 4
        public_4ccdc9 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x4ccbd0)
    }
}

#undef public_4ccc75
#undef public_4cccd4
#undef public_4ccd33
#undef public_4ccd63
#undef public_4ccd86
#undef public_4ccdb9
#undef public_4ccdc9
