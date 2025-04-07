#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f99d60);

#define public_6f99d91 _public_6f99d91
#define public_6f99dc9 _public_6f99dc9
#define public_6f99ded _public_6f99ded
#define public_6f99dfe _public_6f99dfe
#define public_6f99e19 _public_6f99e19
#define public_6f99e2c _public_6f99e2c

PROC_DECLARE(0x6f99d60, internal_6f99d60, public_6f99d60);
extern "C" NAKED register_t __cdecl internal_6f99d60()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, ecx
/*FIXUP push offset public_6fbcf48 @0x6f99d69*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcf48
        mov ecx, esi
        mov bl, 1
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f99d91
        push 0
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
/*FIXUP public_6f99d91 : nop
        push offset public_6fbcf3c @0x6f99d91*/
  FIXUP public_6f99d91 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcf3c
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f99dc9
        push 0
        call dword ptr ds : [public_6fb3020]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ds:[edi+0x1C]
        push 1
        push edx
        call public_6f937c0
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
/*FIXUP public_6f99dc9 : nop
        push offset public_6fbcf30 @0x6f99dc9*/
  FIXUP public_6f99dc9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcf30
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f99ded
        push 0
        call dword ptr ds : [public_6fb3040]
        mov byte ptr ds : [edi+0x2C], al
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
/*FIXUP public_6f99ded : nop
        push offset public_6fb445c @0x6f99ded*/
  FIXUP public_6f99ded : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb445c
        call dword ptr ds : [public_6fb3014]
        test al, al
        mov ecx, esi
        je public_6f99e19
        public_6f99dfe : nop
        call dword ptr ds : [public_6fb3054]
        push eax
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
/*FIXUP public_6f99e19 : nop
        push offset public_6fbcf20 @0x6f99e19*/
  FIXUP public_6f99e19 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcf20
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6f99e2c
        mov ecx, esi
        jmp public_6f99dfe
        public_6f99e2c : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f99d60)
    }
}

#undef public_6f99d91
#undef public_6f99dc9
#undef public_6f99ded
#undef public_6f99dfe
#undef public_6f99e19
#undef public_6f99e2c
