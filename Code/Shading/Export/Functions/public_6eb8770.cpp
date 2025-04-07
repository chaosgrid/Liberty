#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb28f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb8970);
CLANG_FORWARD_PROC_SYMBOL(public_6eb8b60);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ccb);

#define public_6eb8791 _public_6eb8791
#define public_6eb87c1 _public_6eb87c1
#define public_6eb8959 _public_6eb8959
#define public_6eb8968 _public_6eb8968

PROC_DECLARE(0x6eb8770, internal_6eb8770, public_6eb8770);
extern "C" NAKED register_t __cdecl internal_6eb8770()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6ed6cb8]
        push esi
        mov al, 1
        xor esi, esi
        test al, cl
        jne public_6eb87c1
        or cl, al
        mov byte ptr ds : [public_6ed6cb8], cl
        mov eax, offset public_6ed6ce8
        mov ecx, 5
        public_6eb8791 : nop
        mov dword ptr ds : [eax-0x18], esi
        mov dword ptr ds : [eax-0x14], esi
        mov dword ptr ds : [eax-4], esi
        mov dword ptr ds : [eax], esi
        mov dword ptr ds : [eax+0x10], esi
        mov dword ptr ds : [eax+0x14], esi
        mov dword ptr ds : [eax-0x28], esi
        mov dword ptr ds : [eax-0x24], esi
        mov dword ptr ds : [eax-0x20], esi
        mov dword ptr ds : [eax-0x1C], esi
        add eax, 0x4C
        dec ecx
        jne public_6eb8791
/*FIXUP push offset _public_6eb8b60 @0x6eb87b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6eb8b60
        call public_6ed0ccb
        add esp, 4
        public_6eb87c1 : nop
        cmp dword ptr ds : [public_6ed6cd0], esi
        jne public_6eb8959
        push edi
/*FIXUP push offset public_6ed1c44 @0x6eb87ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1c44
        mov edi, offset public_6ed56c4
        push 3
        mov ecx, offset public_6ed6cd0
        mov dword ptr ds : [public_6ed6cc0], 4
        mov dword ptr ds : [public_6ed6cc4], offset public_6ed44cc
        mov dword ptr ds : [public_6ed6cc8], offset public_6ed44bc
        mov dword ptr ds : [public_6ed6ccc], edi
        call public_6eb28f0
/*FIXUP push offset public_6ed1c34 @0x6eb8808*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1c34
        push 3
        mov ecx, offset public_6ed6ce4
        call public_6eb28f0
/*FIXUP push offset public_6ed1c44 @0x6eb8819*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1c44
        push 3
        mov ecx, offset public_6ed6cf8
        call public_6eb28f0
/*FIXUP push offset public_6ed411c @0x6eb882a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed411c
        push 7
        mov ecx, offset public_6ed6d1c
        mov dword ptr ds : [public_6ed6d0c], esi
        mov dword ptr ds : [public_6ed6d10], offset public_6ed455c
        mov dword ptr ds : [public_6ed6d14], offset public_6ed4544
        mov dword ptr ds : [public_6ed6d18], edi
        call public_6eb28f0
        push esi
        push 7
        mov ecx, offset public_6ed6d30
        call public_6eb28f0
        push esi
        push 7
        mov ecx, offset public_6ed6d44
        call public_6eb28f0
        push 4
        push 8
        mov ecx, offset public_6ed6d68
        mov dword ptr ds : [public_6ed6d58], esi
        mov dword ptr ds : [public_6ed6d5c], offset public_6ed4538
        mov dword ptr ds : [public_6ed6d60], offset public_6ed451c
        mov dword ptr ds : [public_6ed6d64], edi
        call public_6eb28f0
        push esi
        push 8
        mov ecx, offset public_6ed6d7c
        call public_6eb28f0
        push esi
        push 8
        mov ecx, offset public_6ed6d90
        call public_6eb28f0
        push esi
        push 9
        mov ecx, offset public_6ed6db4
        mov dword ptr ds : [public_6ed6da4], 0x20000
        mov dword ptr ds : [public_6ed6da8], offset public_6ed4538
        mov dword ptr ds : [public_6ed6dac], offset public_6ed44fc
        mov dword ptr ds : [public_6ed6db0], edi
        call public_6eb28f0
        push esi
        push 9
        mov ecx, offset public_6ed6dc8
        call public_6eb28f0
        push esi
        push 9
        mov ecx, offset public_6ed6ddc
        call public_6eb28f0
        push 9
        mov ecx, offset public_6ed6e00
        mov dword ptr ds : [public_6ed6df0], 0x40000
        mov dword ptr ds : [public_6ed6df4], offset public_6ed4538
        mov dword ptr ds : [public_6ed6df8], offset public_6ed44dc
        mov dword ptr ds : [public_6ed6dfc], edi
        call public_6eb8970
        push esi
        push 9
        mov ecx, offset public_6ed6e14
        mov dword ptr ds : [public_6ed6e04], esi
        call public_6eb28f0
        push esi
        push 9
        mov ecx, offset public_6ed6e28
        call public_6eb28f0
        pop edi
        public_6eb8959 : nop
        mov eax, dword ptr ss : [esp+8]
        cmp eax, esi
        pop esi
        je public_6eb8968
        mov dword ptr ds : [eax], offset public_6ed6cc0
        public_6eb8968 : nop
        mov eax, 5
        ret 4
        UNREACHABLE_TRAP(0x6eb8770)
    }
}

#undef public_6eb8791
#undef public_6eb87c1
#undef public_6eb8959
#undef public_6eb8968
