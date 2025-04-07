#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb28f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2a60);
CLANG_FORWARD_PROC_SYMBOL(public_6eb4dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6eba1b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ccb);

#define public_6eb93e0 _public_6eb93e0
#define public_6eb93fa _public_6eb93fa
#define public_6eb987f _public_6eb987f
#define public_6eb988f _public_6eb988f

PROC_DECLARE(0x6eb93c0, internal_6eb93c0, public_6eb93c0);
extern "C" NAKED register_t __cdecl internal_6eb93c0()
{
    __asm
    {
        mov al, byte ptr ds : [public_6ed6750]
        test al, 1
        push esi
        push edi
        jne public_6eb93fa
        or al, 1
        mov byte ptr ds : [public_6ed6750], al
        mov esi, offset public_6ed6760
        mov edi, 0x12
        lea esp, ss:[esp]
        public_6eb93e0 : nop
        mov ecx, esi
        call public_6eb2a60
        add esi, 0x4C
        dec edi
        jne public_6eb93e0
/*FIXUP push offset _public_6eba1b0 @0x6eb93ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6eba1b0
        call public_6ed0ccb
        add esp, 4
        public_6eb93fa : nop
        mov eax, dword ptr ds : [public_6ed6770]
        xor edi, edi
        cmp eax, edi
        jne public_6eb987f
        push ebx
/*FIXUP push offset public_6ed1e4c @0x6eb940a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1e4c
        mov esi, offset public_6ed56c4
        push 3
        mov ecx, offset public_6ed6770
        mov dword ptr ds : [public_6ed6760], edi
        mov dword ptr ds : [public_6ed6764], offset public_6ed41f4
        mov dword ptr ds : [public_6ed6768], offset public_6ed41e4
        mov dword ptr ds : [public_6ed676c], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed1e3c @0x6eb9440*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1e3c
        push 3
        mov ecx, offset public_6ed6784
        call public_6eb28f0
/*FIXUP push offset public_6ed1e4c @0x6eb9451*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1e4c
        push 3
        mov ecx, offset public_6ed6798
        call public_6eb28f0
/*FIXUP push offset public_6ed1e4c @0x6eb9462*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1e4c
        push 3
        mov ecx, offset public_6ed67bc
        mov dword ptr ds : [public_6ed67ac], edi
        mov dword ptr ds : [public_6ed67b0], offset public_6ed41e0
        mov dword ptr ds : [public_6ed67b4], offset public_6ed41d0
        mov dword ptr ds : [public_6ed67b8], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed1e3c @0x6eb9493*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1e3c
        push 3
        mov ecx, offset public_6ed67d0
        call public_6eb28f0
/*FIXUP push offset public_6ed1e4c @0x6eb94a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1e4c
        push 3
        mov ecx, offset public_6ed67e4
        call public_6eb28f0
/*FIXUP push offset public_6ed411c @0x6eb94b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed411c
        push 7
        mov ecx, offset public_6ed6808
        mov dword ptr ds : [public_6ed67f8], edi
        mov dword ptr ds : [public_6ed67fc], offset public_6ed41c8
        mov dword ptr ds : [public_6ed6800], offset public_6ed45c0
        mov dword ptr ds : [public_6ed6804], esi
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed681c
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed6830
        call public_6eb28f0
        push 4
        mov ebx, offset public_6ed41a4
        push 8
        mov ecx, offset public_6ed6854
        mov dword ptr ds : [public_6ed6844], edi
        mov dword ptr ds : [public_6ed6848], ebx
        mov dword ptr ds : [public_6ed684c], offset public_6ed45a4
        mov dword ptr ds : [public_6ed6850], esi
        call public_6eb28f0
        push edi
        push 8
        mov ecx, offset public_6ed6868
        call public_6eb28f0
        push edi
        push 8
        mov ecx, offset public_6ed687c
        call public_6eb28f0
        push 2
        push 9
        mov ecx, offset public_6ed68a0
        mov dword ptr ds : [public_6ed6890], 0x20000
        mov dword ptr ds : [public_6ed6894], ebx
        mov dword ptr ds : [public_6ed6898], offset public_6ed4584
        mov dword ptr ds : [public_6ed689c], esi
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed68b4
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed68c8
        call public_6eb28f0
        push 2
        push 9
        mov ecx, offset public_6ed68ec
        mov dword ptr ds : [public_6ed68dc], 0x40000
        mov dword ptr ds : [public_6ed68e0], ebx
        mov dword ptr ds : [public_6ed68e4], offset public_6ed4564
        mov dword ptr ds : [public_6ed68e8], esi
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed6900
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed6914
        call public_6eb28f0
        push edi
        push 1
        mov ecx, offset public_6ed6938
        mov dword ptr ds : [public_6ed6928], edi
        mov dword ptr ds : [public_6ed692c], offset public_6ed4690
        mov dword ptr ds : [public_6ed6930], offset public_6ed4688
        mov dword ptr ds : [public_6ed6934], esi
        call public_6eb28f0
        push edi
        push 1
        mov ecx, offset public_6ed694c
        call public_6eb28f0
        push 1
        push 1
        mov ecx, offset public_6ed6960
        call public_6eb28f0
        push edi
        push 1
        mov ecx, offset public_6ed6984
        mov dword ptr ds : [public_6ed6974], edi
        mov dword ptr ds : [public_6ed6978], offset public_6ed4680
        mov dword ptr ds : [public_6ed697c], offset public_6ed4678
        mov dword ptr ds : [public_6ed6980], esi
        call public_6eb28f0
        push edi
        push 1
        mov ecx, offset public_6ed6998
        call public_6eb28f0
        push 1
        push 1
        mov ecx, offset public_6ed69ac
        call public_6eb28f0
/*FIXUP push offset public_6ed411c @0x6eb9669*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed411c
        push 7
        mov ecx, offset public_6ed69d0
        mov dword ptr ds : [public_6ed69c0], edi
        mov dword ptr ds : [public_6ed69c4], offset public_6ed481c
        mov dword ptr ds : [public_6ed69c8], offset public_6ed4800
        mov dword ptr ds : [public_6ed69cc], esi
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed69e4
        call public_6eb28f0
        push edi
        push 7
        mov ecx, offset public_6ed69f8
        call public_6eb28f0
        push 4
        mov ebx, offset public_6ed47f4
        push 8
        mov ecx, offset public_6ed6a1c
        mov dword ptr ds : [public_6ed6a0c], edi
        mov dword ptr ds : [public_6ed6a10], ebx
        mov dword ptr ds : [public_6ed6a14], offset public_6ed47d4
        mov dword ptr ds : [public_6ed6a18], esi
        call public_6eb28f0
        push edi
        push 8
        mov ecx, offset public_6ed6a30
        call public_6eb28f0
        push edi
        push 8
        mov ecx, offset public_6ed6a44
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed6a68
        mov dword ptr ds : [public_6ed6a58], 0x20000
        mov dword ptr ds : [public_6ed6a5c], ebx
        mov dword ptr ds : [public_6ed6a60], offset public_6ed47ac
        mov dword ptr ds : [public_6ed6a64], esi
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed6a7c
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed6a90
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed6ab4
        mov dword ptr ds : [public_6ed6aa4], 0x40000
        mov dword ptr ds : [public_6ed6aa8], ebx
        mov dword ptr ds : [public_6ed6aac], offset public_6ed4784
        mov dword ptr ds : [public_6ed6ab0], esi
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed6ac8
        call public_6eb28f0
        push edi
        push 9
        mov ecx, offset public_6ed6adc
        call public_6eb28f0
/*FIXUP push offset public_6ed1fc4 @0x6eb978b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1fc4
        push 2
        mov ecx, offset public_6ed6b00
        mov dword ptr ds : [public_6ed6af0], edi
        mov dword ptr ds : [public_6ed6af4], offset public_6ed4778
        mov dword ptr ds : [public_6ed6af8], offset public_6ed4764
        mov dword ptr ds : [public_6ed6afc], esi
        call public_6eb28f0
/*FIXUP push offset public_6ed1e6c @0x6eb97bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1e6c
        push 2
        mov ecx, offset public_6ed6b14
        call public_6eb28f0
/*FIXUP push offset public_6ed1e5c @0x6eb97cd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1e5c
        push 2
        mov ecx, offset public_6ed6b28
        call public_6eb28f0
        push edi
        push edi
/*FIXUP push offset public_6ed411c @0x6eb97e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed411c
        push esi
/*FIXUP push offset public_6ed4748 @0x6eb97e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4748
/*FIXUP push offset public_6ed466c @0x6eb97eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed466c
        push edi
        push 7
        mov ecx, offset public_6ed6b3c
        call public_6eb4dc0
        push edi
        push edi
        push 4
        push esi
/*FIXUP push offset public_6ed4728 @0x6eb9802*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4728
/*FIXUP push offset public_6ed464c @0x6eb9807*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed464c
        push edi
        push 8
        mov ecx, offset public_6ed6b88
        call public_6eb4dc0
        push edi
        push edi
        push edi
        push esi
/*FIXUP push offset public_6ed4700 @0x6eb981d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4700
/*FIXUP push offset public_6ed464c @0x6eb9822*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed464c
        push 0x20000
        push 9
        mov ecx, offset public_6ed6bd4
        call public_6eb4dc0
        push edi
        push edi
        push edi
        push esi
/*FIXUP push offset public_6ed46d8 @0x6eb983c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed46d8
/*FIXUP push offset public_6ed464c @0x6eb9841*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed464c
        push 0x40000
        push 9
        mov ecx, offset public_6ed6c20
        call public_6eb4dc0
/*FIXUP push offset public_6ed1e5c @0x6eb9857*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1e5c
/*FIXUP push offset public_6ed1e6c @0x6eb985c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1e6c
/*FIXUP push offset public_6ed1fc4 @0x6eb9861*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1fc4
        push esi
/*FIXUP push offset public_6ed46c4 @0x6eb9867*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed46c4
/*FIXUP push offset public_6ed46b8 @0x6eb986c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed46b8
        push edi
        push 2
        mov ecx, offset public_6ed6c6c
        call public_6eb4dc0
        pop ebx
        public_6eb987f : nop
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        pop edi
        pop esi
        je public_6eb988f
        mov dword ptr ds : [eax], offset public_6ed6760
        public_6eb988f : nop
        mov eax, 0x12
        ret 4
        UNREACHABLE_TRAP(0x6eb93c0)
    }
}

#undef public_6eb93e0
#undef public_6eb93fa
#undef public_6eb987f
#undef public_6eb988f
