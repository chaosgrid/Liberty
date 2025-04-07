#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f32950);

#define public_6f329ab _public_6f329ab
#define public_6f329d7 _public_6f329d7
#define public_6f32a04 _public_6f32a04
#define public_6f32a31 _public_6f32a31
#define public_6f32a5e _public_6f32a5e
#define public_6f32a94 _public_6f32a94
#define public_6f32ac5 _public_6f32ac5
#define public_6f32af1 _public_6f32af1
#define public_6f32b14 _public_6f32b14
#define public_6f32b40 _public_6f32b40
#define public_6f32b45 _public_6f32b45

PROC_DECLARE(0x6f32950, internal_6f32950, public_6f32950);
extern "C" NAKED register_t __cdecl internal_6f32950()
{
    __asm
    {
        push ecx
        push ebp
        mov ebp, dword ptr ds : [public_6fb3014]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, ecx
/*FIXUP push offset public_6fb9488 @0x6f32960*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9488
        mov ecx, esi
        mov byte ptr ss : [esp+0x13], 1
        call ebp
        test al, al
        mov ecx, esi
        je public_6f329ab
        call dword ptr ds : [public_6fb3054]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [public_6fb3508]
        add esp, 8
        test eax, eax
        jne public_6f32b45
        mov ecx, dword ptr ss : [esp+0x14]
        push edi
        push ecx
        call dword ptr ds : [public_6fb343c]
        mov al, byte ptr ss : [esp+0x17]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 8
/*FIXUP public_6f329ab : nop
        push offset public_6fb9480 @0x6f329ab*/
  FIXUP public_6f329ab : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9480
        call ebp
        test al, al
        mov ecx, esi
        je public_6f329d7
        push 1
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb33b0]
        add esp, 8
        mov dword ptr ds : [edi], eax
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 8
/*FIXUP public_6f329d7 : nop
        push offset public_6fb9478 @0x6f329d7*/
  FIXUP public_6f329d7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9478
        call ebp
        test al, al
        mov ecx, esi
        je public_6f32a04
        push 0
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb33b0]
        add esp, 8
        mov dword ptr ds : [edi+4], eax
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 8
/*FIXUP public_6f32a04 : nop
        push offset public_6fb946c @0x6f32a04*/
  FIXUP public_6f32a04 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb946c
        call ebp
        test al, al
        mov ecx, esi
        je public_6f32a31
        push 2
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb33b0]
        add esp, 8
        mov dword ptr ds : [edi+8], eax
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 8
/*FIXUP public_6f32a31 : nop
        push offset public_6fb9460 @0x6f32a31*/
  FIXUP public_6f32a31 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9460
        call ebp
        test al, al
        mov ecx, esi
        je public_6f32a5e
        push 3
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb33b0]
        add esp, 8
        mov dword ptr ds : [edi+0xC], eax
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 8
/*FIXUP public_6f32a5e : nop
        push offset public_6fb9454 @0x6f32a5e*/
  FIXUP public_6f32a5e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb9454
        call ebp
        test al, al
        mov ecx, esi
        je public_6f32a94
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb33ac]
        mov edx, dword ptr ds : [edi+0x30]
        mov dword ptr ds : [edi+edx*4+0x10], eax
        mov eax, dword ptr ds : [edi+0x30]
        add esp, 4
        inc eax
        mov dword ptr ds : [edi+0x30], eax
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 8
/*FIXUP public_6f32a94 : nop
        push offset public_6fb445c @0x6f32a94*/
  FIXUP public_6f32a94 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        call ebp
        test al, al
        mov ecx, esi
        je public_6f32ac5
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [edi+0x40], eax
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 8
/*FIXUP public_6f32ac5 : nop
        push offset public_6fb8018 @0x6f32ac5*/
  FIXUP public_6f32ac5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8018
        call ebp
        test al, al
        mov ecx, esi
        je public_6f32af1
        call dword ptr ds : [public_6fb3054]
        push eax
        add edi, 0x34
        push edi
        call dword ptr ds : [public_6fb33b4]
        mov al, byte ptr ss : [esp+0x17]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 8
/*FIXUP public_6f32af1 : nop
        push offset public_6fb93d0 @0x6f32af1*/
  FIXUP public_6f32af1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb93d0
        call ebp
        test al, al
        mov ecx, esi
        je public_6f32b14
        push 0
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ds : [edi+0x38], eax
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 8
/*FIXUP public_6f32b14 : nop
        push offset public_6fb93e0 @0x6f32b14*/
  FIXUP public_6f32b14 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb93e0
        call ebp
        test al, al
        je public_6f32b40
        mov ecx, esi
        call dword ptr ds : [public_6fb3054]
        push eax
        add edi, 0x3C
        push edi
        call dword ptr ds : [public_6fb361c]
        mov al, byte ptr ss : [esp+0x17]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 8
        public_6f32b40 : nop
        mov byte ptr ss : [esp+0xF], 0
        public_6f32b45 : nop
        mov al, byte ptr ss : [esp+0xF]
        pop edi
        pop esi
        pop ebp
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f32950)
    }
}

#undef public_6f329ab
#undef public_6f329d7
#undef public_6f32a04
#undef public_6f32a31
#undef public_6f32a5e
#undef public_6f32a94
#undef public_6f32ac5
#undef public_6f32af1
#undef public_6f32b14
#undef public_6f32b40
#undef public_6f32b45
