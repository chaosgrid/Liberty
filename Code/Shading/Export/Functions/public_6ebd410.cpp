#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb28f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2a60);
CLANG_FORWARD_PROC_SYMBOL(public_6eb4dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6ebdd70);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ccb);

#define public_6ebd430 _public_6ebd430
#define public_6ebd44a _public_6ebd44a
#define public_6ebd74d _public_6ebd74d
#define public_6ebd75d _public_6ebd75d

PROC_DECLARE(0x6ebd410, internal_6ebd410, public_6ebd410);
extern "C" NAKED register_t __cdecl internal_6ebd410()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6ed5c61]
        mov al, 1
        test al, cl
        push esi
        push edi
        jne public_6ebd44a
        or cl, al
        mov byte ptr ds : [public_6ed5c61], cl
        mov esi, offset public_6ed5c80
        mov edi, 0xA
        public_6ebd430 : nop
        mov ecx, esi
        call public_6eb2a60
        add esi, 0x4C
        dec edi
        jne public_6ebd430
/*FIXUP push offset _public_6ebdd70 @0x6ebd43d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ebdd70
        call public_6ed0ccb
        add esp, 4
        public_6ebd44a : nop
        mov eax, dword ptr ds : [public_6ed5c90]
        xor edi, edi
        cmp eax, edi
        jne public_6ebd74d
/*FIXUP push offset public_6ed267c @0x6ebd459*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed267c
        mov esi, offset public_6ed56c4
        push 3
        mov ecx, offset public_6ed5c90
        mov dword ptr ds : [public_6ed5c80], edi
        mov dword ptr ds : [public_6ed5c84], offset public_6ed41f4
        mov dword ptr ds : [public_6ed5c88], offset public_6ed41e4
        mov dword ptr ds : [public_6ed5c8c], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed266c @0x6ebd48f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed266c
        push 3
        mov ecx, offset public_6ed5ca4
        call public_6eb28f0
/*FIXUP push offset public_6ed267c @0x6ebd4a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed267c
        push 3
        mov ecx, offset public_6ed5cb8
        call public_6eb28f0
/*FIXUP push offset public_6ed267c @0x6ebd4b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed267c
        push 3
        mov ecx, offset public_6ed5cdc
        mov dword ptr ds : [public_6ed5ccc], edi
        mov dword ptr ds : [public_6ed5cd0], offset public_6ed41e0
        mov dword ptr ds : [public_6ed5cd4], offset public_6ed41d0
        mov dword ptr ds : [public_6ed5cd8], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed266c @0x6ebd4e2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed266c
        push 3
        mov ecx, offset public_6ed5cf0
        call public_6eb28f0
/*FIXUP push offset public_6ed267c @0x6ebd4f3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed267c
        push 3
        mov ecx, offset public_6ed5d04
        call public_6eb28f0
/*FIXUP push offset public_6ed266c @0x6ebd504*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed266c
        push 3
        mov ecx, offset public_6ed5d28
        mov dword ptr ds : [public_6ed5d18], edi
        mov dword ptr ds : [public_6ed5d1c], offset public_6ed44cc
        mov dword ptr ds : [public_6ed5d20], offset public_6ed44bc
        mov dword ptr ds : [public_6ed5d24], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed266c @0x6ebd535*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed266c
        push 3
        mov ecx, offset public_6ed5d3c
        call public_6eb28f0
/*FIXUP push offset public_6ed267c @0x6ebd546*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed267c
        push 3
        mov ecx, offset public_6ed5d50
        call public_6eb28f0
/*FIXUP push offset public_6ed266c @0x6ebd557*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed266c
        push 3
        mov ecx, offset public_6ed5d74
        mov dword ptr ds : [public_6ed5d64], edi
        mov dword ptr ds : [public_6ed5d68], offset public_6ed44b8
        mov dword ptr ds : [public_6ed5d6c], offset public_6ed44a8
        mov dword ptr ds : [public_6ed5d70], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed266c @0x6ebd588*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed266c
        push 3
        mov ecx, offset public_6ed5d88
        call public_6eb28f0
/*FIXUP push offset public_6ed267c @0x6ebd599*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed267c
        push 3
        mov ecx, offset public_6ed5d9c
        call public_6eb28f0
/*FIXUP push offset public_6ed266c @0x6ebd5aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed266c
        push 2
        mov ecx, offset public_6ed5dc0
        mov dword ptr ds : [public_6ed5db0], edi
        mov dword ptr ds : [public_6ed5db4], offset public_6ed44a4
        mov dword ptr ds : [public_6ed5db8], offset public_6ed4494
        mov dword ptr ds : [public_6ed5dbc], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed266c @0x6ebd5db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed266c
        push 2
        mov ecx, offset public_6ed5dd4
        call public_6eb28f0
/*FIXUP push offset public_6ed267c @0x6ebd5ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed267c
        push 2
        mov ecx, offset public_6ed5de8
        call public_6eb28f0
/*FIXUP push offset public_6ed267c @0x6ebd5fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed267c
        push 2
        mov ecx, offset public_6ed5e0c
        mov dword ptr ds : [public_6ed5dfc], edi
        mov dword ptr ds : [public_6ed5e00], offset public_6ed4490
        mov dword ptr ds : [public_6ed5e04], offset public_6ed4484
        mov dword ptr ds : [public_6ed5e08], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed266c @0x6ebd62e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed266c
        push 2
        mov ecx, offset public_6ed5e20
        call public_6eb28f0
/*FIXUP push offset public_6ed267c @0x6ebd63f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed267c
        push 2
        mov ecx, offset public_6ed5e34
        call public_6eb28f0
/*FIXUP push offset public_6ed411c @0x6ebd650*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed411c
        push 7
        mov ecx, offset public_6ed5e58
        mov dword ptr ds : [public_6ed5e48], edi
        mov dword ptr ds : [public_6ed5e4c], offset public_6ed41c8
        mov dword ptr ds : [public_6ed5e50], offset public_6ed4474
        mov dword ptr ds : [public_6ed5e54], esi
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed5e6c
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed5e80
        call public_6eb28f0
        push 4
        push 8
        mov ecx, offset public_6ed5ea4
        mov dword ptr ds : [public_6ed5e94], edi
        mov dword ptr ds : [public_6ed5e98], offset public_6ed41a4
        mov dword ptr ds : [public_6ed5e9c], offset public_6ed4460
        mov dword ptr ds : [public_6ed5ea0], esi
        call public_6eb28f0
        push edi
        push 8
        mov ecx, offset public_6ed5eb8
        call public_6eb28f0
        push edi
        push 8
        mov ecx, offset public_6ed5ecc
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed5ef0
        mov dword ptr ds : [public_6ed5ee0], 0x20000
        mov dword ptr ds : [public_6ed5ee4], offset public_6ed41a4
        mov dword ptr ds : [public_6ed5ee8], offset public_6ed4448
        mov dword ptr ds : [public_6ed5eec], esi
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed5f04
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed5f18
        call public_6eb28f0
        push edi
        push edi
        push edi
        push esi
/*FIXUP push offset public_6ed4430 @0x6ebd732*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4430
/*FIXUP push offset public_6ed41a4 @0x6ebd737*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed41a4
        push 0x40000
        push 9
        mov ecx, offset public_6ed5f2c
        call public_6eb4dc0
        public_6ebd74d : nop
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        pop edi
        pop esi
        je public_6ebd75d
        mov dword ptr ds : [eax], offset public_6ed5c80
        public_6ebd75d : nop
        mov eax, 0xA
        ret 4
        UNREACHABLE_TRAP(0x6ebd410)
    }
}

#undef public_6ebd430
#undef public_6ebd44a
#undef public_6ebd74d
#undef public_6ebd75d
