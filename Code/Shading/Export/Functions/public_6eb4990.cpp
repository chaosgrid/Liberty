#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb28f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2a60);
CLANG_FORWARD_PROC_SYMBOL(public_6eb4dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5350);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ccb);

#define public_6eb49b0 _public_6eb49b0
#define public_6eb49ca _public_6eb49ca
#define public_6eb4d9e _public_6eb4d9e
#define public_6eb4dae _public_6eb4dae

PROC_DECLARE(0x6eb4990, internal_6eb4990, public_6eb4990);
extern "C" NAKED register_t __cdecl internal_6eb4990()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6ed78ac]
        mov al, 1
        test al, cl
        push esi
        push edi
        jne public_6eb49ca
        or cl, al
        mov byte ptr ds : [public_6ed78ac], cl
        mov esi, offset public_6ed78c0
        mov edi, 0xD
        public_6eb49b0 : nop
        mov ecx, esi
        call public_6eb2a60
        add esi, 0x4C
        dec edi
        jne public_6eb49b0
/*FIXUP push offset _public_6eb5350 @0x6eb49bd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6eb5350
        call public_6ed0ccb
        add esp, 4
        public_6eb49ca : nop
        mov eax, dword ptr ds : [public_6ed78d0]
        xor edi, edi
        cmp eax, edi
        jne public_6eb4d9e
/*FIXUP push offset public_6ed1474 @0x6eb49d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1474
        mov esi, offset public_6ed56c4
        push 3
        mov ecx, offset public_6ed78d0
        mov dword ptr ds : [public_6ed78c0], edi
        mov dword ptr ds : [public_6ed78c4], offset public_6ed41f4
        mov dword ptr ds : [public_6ed78c8], offset public_6ed41e4
        mov dword ptr ds : [public_6ed78cc], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed1464 @0x6eb4a0f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1464
        push 3
        mov ecx, offset public_6ed78e4
        call public_6eb28f0
/*FIXUP push offset public_6ed1474 @0x6eb4a20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1474
        push 3
        mov ecx, offset public_6ed78f8
        call public_6eb28f0
/*FIXUP push offset public_6ed1474 @0x6eb4a31*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1474
        push 3
        mov ecx, offset public_6ed791c
        mov dword ptr ds : [public_6ed790c], edi
        mov dword ptr ds : [public_6ed7910], offset public_6ed41e0
        mov dword ptr ds : [public_6ed7914], offset public_6ed41d0
        mov dword ptr ds : [public_6ed7918], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed1464 @0x6eb4a62*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1464
        push 3
        mov ecx, offset public_6ed7930
        call public_6eb28f0
/*FIXUP push offset public_6ed1474 @0x6eb4a73*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1474
        push 3
        mov ecx, offset public_6ed7944
        call public_6eb28f0
/*FIXUP push offset public_6ed1464 @0x6eb4a84*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1464
        push 3
        mov ecx, offset public_6ed7968
        mov dword ptr ds : [public_6ed7958], edi
        mov dword ptr ds : [public_6ed795c], offset public_6ed44cc
        mov dword ptr ds : [public_6ed7960], offset public_6ed44bc
        mov dword ptr ds : [public_6ed7964], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed1464 @0x6eb4ab5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1464
        push 3
        mov ecx, offset public_6ed797c
        call public_6eb28f0
/*FIXUP push offset public_6ed1474 @0x6eb4ac6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1474
        push 3
        mov ecx, offset public_6ed7990
        call public_6eb28f0
/*FIXUP push offset public_6ed1464 @0x6eb4ad7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1464
        push 3
        mov ecx, offset public_6ed79b4
        mov dword ptr ds : [public_6ed79a4], edi
        mov dword ptr ds : [public_6ed79a8], offset public_6ed44b8
        mov dword ptr ds : [public_6ed79ac], offset public_6ed44a8
        mov dword ptr ds : [public_6ed79b0], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed1464 @0x6eb4b08*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1464
        push 3
        mov ecx, offset public_6ed79c8
        call public_6eb28f0
/*FIXUP push offset public_6ed1474 @0x6eb4b19*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1474
        push 3
        mov ecx, offset public_6ed79dc
        call public_6eb28f0
/*FIXUP push offset public_6ed1464 @0x6eb4b2a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1464
        push 2
        mov ecx, offset public_6ed7a00
        mov dword ptr ds : [public_6ed79f0], edi
        mov dword ptr ds : [public_6ed79f4], offset public_6ed44a4
        mov dword ptr ds : [public_6ed79f8], offset public_6ed4494
        mov dword ptr ds : [public_6ed79fc], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed1464 @0x6eb4b5b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1464
        push 2
        mov ecx, offset public_6ed7a14
        call public_6eb28f0
/*FIXUP push offset public_6ed1474 @0x6eb4b6c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1474
        push 2
        mov ecx, offset public_6ed7a28
        call public_6eb28f0
/*FIXUP push offset public_6ed1474 @0x6eb4b7d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1474
        push 2
        mov ecx, offset public_6ed7a4c
        mov dword ptr ds : [public_6ed7a3c], edi
        mov dword ptr ds : [public_6ed7a40], offset public_6ed4490
        mov dword ptr ds : [public_6ed7a44], offset public_6ed4484
        mov dword ptr ds : [public_6ed7a48], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed1464 @0x6eb4bae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1464
        push 2
        mov ecx, offset public_6ed7a60
        call public_6eb28f0
/*FIXUP push offset public_6ed1474 @0x6eb4bbf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1474
        push 2
        mov ecx, offset public_6ed7a74
        call public_6eb28f0
/*FIXUP push offset public_6ed411c @0x6eb4bd0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed411c
        push 7
        mov ecx, offset public_6ed7a98
        mov dword ptr ds : [public_6ed7a88], edi
        mov dword ptr ds : [public_6ed7a8c], offset public_6ed41c8
        mov dword ptr ds : [public_6ed7a90], offset public_6ed4474
        mov dword ptr ds : [public_6ed7a94], esi
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed7aac
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed7ac0
        call public_6eb28f0
        push 4
        push 8
        mov ecx, offset public_6ed7ae4
        mov dword ptr ds : [public_6ed7ad4], edi
        mov dword ptr ds : [public_6ed7ad8], offset public_6ed41a4
        mov dword ptr ds : [public_6ed7adc], offset public_6ed4460
        mov dword ptr ds : [public_6ed7ae0], esi
        call public_6eb28f0
        push edi
        push 8
        mov ecx, offset public_6ed7af8
        call public_6eb28f0
        push edi
        push 8
        mov ecx, offset public_6ed7b0c
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed7b30
        mov dword ptr ds : [public_6ed7b20], 0x20000
        mov dword ptr ds : [public_6ed7b24], offset public_6ed41a4
        mov dword ptr ds : [public_6ed7b28], offset public_6ed4448
        mov dword ptr ds : [public_6ed7b2c], esi
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed7b44
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed7b58
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed7b7c
        mov dword ptr ds : [public_6ed7b6c], 0x40000
        mov dword ptr ds : [public_6ed7b70], offset public_6ed41a4
        mov dword ptr ds : [public_6ed7b74], offset public_6ed4430
        mov dword ptr ds : [public_6ed7b78], esi
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed7b90
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed7ba4
        call public_6eb28f0
        mov dword ptr ds : [public_6ed7bb8], edi
/*FIXUP push offset public_6ed411c @0x6eb4cff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed411c
        push 7
        mov ecx, offset public_6ed7bc8
        mov dword ptr ds : [public_6ed7bbc], offset public_6ed4428
        mov dword ptr ds : [public_6ed7bc0], offset public_6ed4414
        mov dword ptr ds : [public_6ed7bc4], esi
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed7bdc
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed7bf0
        call public_6eb28f0
        push edi
        push edi
        push 4
        push esi
/*FIXUP push offset public_6ed43fc @0x6eb4d49*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed43fc
/*FIXUP push offset public_6ed43f0 @0x6eb4d4e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed43f0
        push edi
        push 8
        mov ecx, offset public_6ed7c04
        call public_6eb4dc0
        push edi
        push edi
        push edi
        push esi
/*FIXUP push offset public_6ed43d0 @0x6eb4d64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed43d0
/*FIXUP push offset public_6ed43f0 @0x6eb4d69*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed43f0
        push 0x20000
        push 9
        mov ecx, offset public_6ed7c50
        call public_6eb4dc0
        push edi
        push edi
        push edi
        push esi
/*FIXUP push offset public_6ed43b0 @0x6eb4d83*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed43b0
/*FIXUP push offset public_6ed43f0 @0x6eb4d88*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed43f0
        push 0x40000
        push 9
        mov ecx, offset public_6ed7c9c
        call public_6eb4dc0
        public_6eb4d9e : nop
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        pop edi
        pop esi
        je public_6eb4dae
        mov dword ptr ds : [eax], offset public_6ed78c0
        public_6eb4dae : nop
        mov eax, 0xD
        ret 4
        UNREACHABLE_TRAP(0x6eb4990)
    }
}

#undef public_6eb49b0
#undef public_6eb49ca
#undef public_6eb4d9e
#undef public_6eb4dae
