#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb28f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2a60);
CLANG_FORWARD_PROC_SYMBOL(public_6eb4dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb83e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ccb);

#define public_6eb7d00 _public_6eb7d00
#define public_6eb7d1a _public_6eb7d1a
#define public_6eb8087 _public_6eb8087
#define public_6eb8097 _public_6eb8097

PROC_DECLARE(0x6eb7ce0, internal_6eb7ce0, public_6eb7ce0);
extern "C" NAKED register_t __cdecl internal_6eb7ce0()
{
    __asm
    {
        mov al, byte ptr ds : [public_6ed6e3c]
        test al, 1
        push esi
        push edi
        jne public_6eb7d1a
        or al, 1
        mov byte ptr ds : [public_6ed6e3c], al
        mov esi, offset public_6ed6e40
        mov edi, 0xD
        lea esp, ss:[esp]
        public_6eb7d00 : nop
        mov ecx, esi
        call public_6eb2a60
        add esi, 0x4C
        dec edi
        jne public_6eb7d00
/*FIXUP push offset _public_6eb83e0 @0x6eb7d0d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6eb83e0
        call public_6ed0ccb
        add esp, 4
        public_6eb7d1a : nop
        mov eax, dword ptr ds : [public_6ed6e50]
        xor edi, edi
        cmp eax, edi
        jne public_6eb8087
/*FIXUP push offset public_6ed1a6c @0x6eb7d29*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1a6c
        mov esi, offset public_6ed56c4
        push 3
        mov ecx, offset public_6ed6e50
        mov dword ptr ds : [public_6ed6e40], edi
        mov dword ptr ds : [public_6ed6e44], offset public_6ed41f4
        mov dword ptr ds : [public_6ed6e48], offset public_6ed41e4
        mov dword ptr ds : [public_6ed6e4c], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed1a5c @0x6eb7d5f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1a5c
        push 3
        mov ecx, offset public_6ed6e64
        call public_6eb28f0
/*FIXUP push offset public_6ed1a6c @0x6eb7d70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1a6c
        push 3
        mov ecx, offset public_6ed6e78
        call public_6eb28f0
/*FIXUP push offset public_6ed1a6c @0x6eb7d81*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1a6c
        push 3
        mov ecx, offset public_6ed6e9c
        mov dword ptr ds : [public_6ed6e8c], edi
        mov dword ptr ds : [public_6ed6e90], offset public_6ed41e0
        mov dword ptr ds : [public_6ed6e94], offset public_6ed41d0
        mov dword ptr ds : [public_6ed6e98], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed1a5c @0x6eb7db2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1a5c
        push 3
        mov ecx, offset public_6ed6eb0
        call public_6eb28f0
/*FIXUP push offset public_6ed1b7c @0x6eb7dc3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1b7c
        push 3
        mov ecx, offset public_6ed6ec4
        call public_6eb28f0
/*FIXUP push offset public_6ed411c @0x6eb7dd4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed411c
        push 7
        mov ecx, offset public_6ed6ee8
        mov dword ptr ds : [public_6ed6ed8], edi
        mov dword ptr ds : [public_6ed6edc], offset public_6ed41c8
        mov dword ptr ds : [public_6ed6ee0], offset public_6ed45c0
        mov dword ptr ds : [public_6ed6ee4], esi
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed6efc
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed6f10
        call public_6eb28f0
        push 4
        push 8
        mov ecx, offset public_6ed6f34
        mov dword ptr ds : [public_6ed6f24], edi
        mov dword ptr ds : [public_6ed6f28], offset public_6ed41a4
        mov dword ptr ds : [public_6ed6f2c], offset public_6ed45a4
        mov dword ptr ds : [public_6ed6f30], esi
        call public_6eb28f0
        push edi
        push 8
        mov ecx, offset public_6ed6f48
        call public_6eb28f0
        push edi
        push 8
        mov ecx, offset public_6ed6f5c
        call public_6eb28f0
        push 2
        push 9
        mov ecx, offset public_6ed6f80
        mov dword ptr ds : [public_6ed6f70], 0x20000
        mov dword ptr ds : [public_6ed6f74], offset public_6ed41a4
        mov dword ptr ds : [public_6ed6f78], offset public_6ed4584
        mov dword ptr ds : [public_6ed6f7c], esi
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed6f94
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed6fa8
        call public_6eb28f0
        push 2
        push 9
        mov ecx, offset public_6ed6fcc
        mov dword ptr ds : [public_6ed6fbc], 0x40000
        mov dword ptr ds : [public_6ed6fc0], offset public_6ed41a4
        mov dword ptr ds : [public_6ed6fc4], offset public_6ed4564
        mov dword ptr ds : [public_6ed6fc8], esi
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed6fe0
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed6ff4
        call public_6eb28f0
        push edi
        push 1
        mov ecx, offset public_6ed7018
        mov dword ptr ds : [public_6ed7008], edi
        mov dword ptr ds : [public_6ed700c], offset public_6ed4690
        mov dword ptr ds : [public_6ed7010], offset public_6ed4688
        mov dword ptr ds : [public_6ed7014], esi
        call public_6eb28f0
        push edi
        push 1
        mov ecx, offset public_6ed702c
        call public_6eb28f0
        push 1
        push 1
        mov ecx, offset public_6ed7040
        call public_6eb28f0
        push edi
        push 1
        mov ecx, offset public_6ed7064
        mov dword ptr ds : [public_6ed7054], edi
        mov dword ptr ds : [public_6ed7058], offset public_6ed4680
        mov dword ptr ds : [public_6ed705c], offset public_6ed4678
        mov dword ptr ds : [public_6ed7060], esi
        call public_6eb28f0
        push edi
        push 1
        mov ecx, offset public_6ed7078
        call public_6eb28f0
        push 1
        push 1
        mov ecx, offset public_6ed708c
        call public_6eb28f0
/*FIXUP push offset public_6ed411c @0x6eb7f8f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed411c
        push 7
        mov ecx, offset public_6ed70b0
        mov dword ptr ds : [public_6ed70a0], edi
        mov dword ptr ds : [public_6ed70a4], offset public_6ed46a4
        mov dword ptr ds : [public_6ed70a8], offset public_6ed4658
        mov dword ptr ds : [public_6ed70ac], esi
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed70c4
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed70d8
        call public_6eb28f0
        push 4
        push 8
        mov ecx, offset public_6ed70fc
        mov dword ptr ds : [public_6ed70ec], edi
        mov dword ptr ds : [public_6ed70f0], offset public_6ed4698
        mov dword ptr ds : [public_6ed70f4], offset public_6ed4630
        mov dword ptr ds : [public_6ed70f8], esi
        call public_6eb28f0
        push edi
        push 8
        mov ecx, offset public_6ed7110
        call public_6eb28f0
        push edi
        push 8
        mov ecx, offset public_6ed7124
        call public_6eb28f0
        push edi
        push edi
        push edi
        push esi
/*FIXUP push offset public_6ed4610 @0x6eb8026*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4610
/*FIXUP push offset public_6ed4698 @0x6eb802b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4698
        push 0x20000
        push 9
        mov ecx, offset public_6ed7138
        call public_6eb4dc0
        push edi
        push edi
        push edi
        push esi
/*FIXUP push offset public_6ed45f0 @0x6eb8045*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed45f0
/*FIXUP push offset public_6ed4698 @0x6eb804a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4698
        push 0x40000
        push 9
        mov ecx, offset public_6ed7184
        call public_6eb4dc0
/*FIXUP push offset public_6ed1a7c @0x6eb8060*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1a7c
/*FIXUP push offset public_6ed1a8c @0x6eb8065*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1a8c
/*FIXUP push offset public_6ed1b78 @0x6eb806a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1b78
        push esi
/*FIXUP push offset public_6ed45e4 @0x6eb8070*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed45e4
/*FIXUP push offset public_6ed45d8 @0x6eb8075*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed45d8
        push edi
        push 2
        mov ecx, offset public_6ed71d0
        call public_6eb4dc0
        public_6eb8087 : nop
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        pop edi
        pop esi
        je public_6eb8097
        mov dword ptr ds : [eax], offset public_6ed6e40
        public_6eb8097 : nop
        mov eax, 0xD
        ret 4
        UNREACHABLE_TRAP(0x6eb7ce0)
    }
}

#undef public_6eb7d00
#undef public_6eb7d1a
#undef public_6eb8087
#undef public_6eb8097
