#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb28f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2a60);
CLANG_FORWARD_PROC_SYMBOL(public_6eb3370);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ccb);

#define public_6eb25e0 _public_6eb25e0
#define public_6eb25fa _public_6eb25fa
#define public_6eb28ce _public_6eb28ce
#define public_6eb28de _public_6eb28de

PROC_DECLARE(0x6eb25c0, internal_6eb25c0, public_6eb25c0);
extern "C" NAKED register_t __cdecl internal_6eb25c0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6ed7c9c]
        mov al, 1
        test al, cl
        push esi
        push edi
        jne public_6eb25fa
        or cl, al
        mov byte ptr ds : [public_6ed7c9c], cl
        mov esi, offset public_6ed7ca0
        mov edi, 9
        public_6eb25e0 : nop
        mov ecx, esi
        call public_6eb2a60
        add esi, 0x4C
        dec edi
        jne public_6eb25e0
/*FIXUP push offset _public_6eb3370 @0x6eb25ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6eb3370
        call public_6ed0ccb
        add esp, 4
        public_6eb25fa : nop
        mov eax, dword ptr ds : [public_6ed7cb0]
        xor edi, edi
        cmp eax, edi
        jne public_6eb28ce
/*FIXUP push offset public_6ed10d0 @0x6eb2609*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed10d0
        mov esi, offset public_6ed56c4
        push 3
        mov ecx, offset public_6ed7cb0
        mov dword ptr ds : [public_6ed7ca0], edi
        mov dword ptr ds : [public_6ed7ca4], offset public_6ed41f4
        mov dword ptr ds : [public_6ed7ca8], offset public_6ed41e4
        mov dword ptr ds : [public_6ed7cac], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed10c0 @0x6eb263f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed10c0
        push 3
        mov ecx, offset public_6ed7cc4
        call public_6eb28f0
/*FIXUP push offset public_6ed10d0 @0x6eb2650*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed10d0
        push 3
        mov ecx, offset public_6ed7cd8
        call public_6eb28f0
/*FIXUP push offset public_6ed10d0 @0x6eb2661*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed10d0
        push 3
        mov ecx, offset public_6ed7cfc
        mov dword ptr ds : [public_6ed7cec], edi
        mov dword ptr ds : [public_6ed7cf0], offset public_6ed41e0
        mov dword ptr ds : [public_6ed7cf4], offset public_6ed41d0
        mov dword ptr ds : [public_6ed7cf8], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed10c0 @0x6eb2692*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed10c0
        push 3
        mov ecx, offset public_6ed7d10
        call public_6eb28f0
/*FIXUP push offset public_6ed11d0 @0x6eb26a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed11d0
        push 3
        mov ecx, offset public_6ed7d24
        call public_6eb28f0
/*FIXUP push offset public_6ed411c @0x6eb26b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed411c
        push 7
        mov ecx, offset public_6ed7d48
        mov dword ptr ds : [public_6ed7d38], edi
        mov dword ptr ds : [public_6ed7d3c], offset public_6ed41c8
        mov dword ptr ds : [public_6ed7d40], offset public_6ed41b0
        mov dword ptr ds : [public_6ed7d44], esi
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed7d5c
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed7d70
        call public_6eb28f0
        push 4
        push 8
        mov ecx, offset public_6ed7d94
        mov dword ptr ds : [public_6ed7d84], edi
        mov dword ptr ds : [public_6ed7d88], offset public_6ed41a4
        mov dword ptr ds : [public_6ed7d8c], offset public_6ed4188
        mov dword ptr ds : [public_6ed7d90], esi
        call public_6eb28f0
        push edi
        push 8
        mov ecx, offset public_6ed7da8
        call public_6eb28f0
        push edi
        push 8
        mov ecx, offset public_6ed7dbc
        call public_6eb28f0
        push 2
        push 9
        mov ecx, offset public_6ed7de0
        mov dword ptr ds : [public_6ed7dd0], 0x20000
        mov dword ptr ds : [public_6ed7dd4], offset public_6ed41a4
        mov dword ptr ds : [public_6ed7dd8], offset public_6ed4168
        mov dword ptr ds : [public_6ed7ddc], esi
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed7df4
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed7e08
        call public_6eb28f0
        push 2
        push 9
        mov ecx, offset public_6ed7e2c
        mov dword ptr ds : [public_6ed7e1c], 0x40000
        mov dword ptr ds : [public_6ed7e20], offset public_6ed41a4
        mov dword ptr ds : [public_6ed7e24], offset public_6ed4148
        mov dword ptr ds : [public_6ed7e28], esi
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed7e40
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed7e54
        call public_6eb28f0
/*FIXUP push offset public_6ed11c4 @0x6eb27df*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed11c4
        push 2
        mov ecx, offset public_6ed7e78
        mov dword ptr ds : [public_6ed7e68], edi
        mov dword ptr ds : [public_6ed7e6c], offset public_6ed4140
        mov dword ptr ds : [public_6ed7e70], offset public_6ed4134
        mov dword ptr ds : [public_6ed7e74], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed10f0 @0x6eb2810*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed10f0
        push 2
        mov ecx, offset public_6ed7e8c
        call public_6eb28f0
/*FIXUP push offset public_6ed10e0 @0x6eb2821*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed10e0
        push 2
        mov ecx, offset public_6ed7ea0
        call public_6eb28f0
        mov eax, offset public_6ed412c
/*FIXUP push offset public_6ed11c8 @0x6eb2837*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed11c8
        push 2
        mov ecx, offset public_6ed7ec4
        mov dword ptr ds : [public_6ed7eb4], edi
        mov dword ptr ds : [public_6ed7eb8], eax
        mov dword ptr ds : [public_6ed7ebc], eax
        mov dword ptr ds : [public_6ed7ec0], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed10f0 @0x6eb285e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed10f0
        push 2
        mov ecx, offset public_6ed7ed8
        call public_6eb28f0
/*FIXUP push offset public_6ed10e0 @0x6eb286f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed10e0
        push 2
        mov ecx, offset public_6ed7eec
        call public_6eb28f0
        mov eax, offset public_6ed4124
/*FIXUP push offset public_6ed11cc @0x6eb2885*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed11cc
        push 2
        mov ecx, offset public_6ed7f10
        mov dword ptr ds : [public_6ed7f00], edi
        mov dword ptr ds : [public_6ed7f04], eax
        mov dword ptr ds : [public_6ed7f08], eax
        mov dword ptr ds : [public_6ed7f0c], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed10f0 @0x6eb28ac*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed10f0
        push 2
        mov ecx, offset public_6ed7f24
        call public_6eb28f0
/*FIXUP push offset public_6ed10e0 @0x6eb28bd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed10e0
        push 2
        mov ecx, offset public_6ed7f38
        call public_6eb28f0
        public_6eb28ce : nop
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        pop edi
        pop esi
        je public_6eb28de
        mov dword ptr ds : [eax], offset public_6ed7ca0
        public_6eb28de : nop
        mov eax, 9
        ret 4
        UNREACHABLE_TRAP(0x6eb25c0)
    }
}

#undef public_6eb25e0
#undef public_6eb25fa
#undef public_6eb28ce
#undef public_6eb28de
