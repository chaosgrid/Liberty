#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406dc0);
CLANG_FORWARD_PROC_SYMBOL(public_537260);

#define public_4083d3 _public_4083d3
#define public_4083db _public_4083db
#define public_408407 _public_408407
#define public_408433 _public_408433
#define public_408473 _public_408473
#define public_4084a1 _public_4084a1

PROC_DECLARE(0x4083a0, internal_4083a0, public_4083a0);
extern "C" NAKED register_t __cdecl internal_4083a0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        push esi
        mov edi, ecx
        mov bl, 1
        call public_406dc0
        test al, al
        jne public_4083d3
/*FIXUP push offset public_5c7a00 @0x4083b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7a00
        mov ecx, esi
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_4083db
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x54]
        public_4083d3 : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
/*FIXUP public_4083db : nop
        push offset public_5c79f0 @0x4083db*/
  FIXUP public_4083db : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c79f0
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_408407
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [edi+0x58], eax
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
/*FIXUP public_408407 : nop
        push offset public_5c79e0 @0x408407*/
  FIXUP public_408407 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c79e0
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_408433
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [edi+0x5C], eax
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
/*FIXUP public_408433 : nop
        push offset public_5c7a24 @0x408433*/
  FIXUP public_408433 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7a24
        call dword ptr ds : [public_5c6cf4]
        test al, al
        mov ecx, esi
        je public_408473
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        mov edx, dword ptr ds : [edi+0x6C]
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ds:[edi+0x64]
        push 1
        push edx
        call public_537260
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
/*FIXUP public_408473 : nop
        push offset public_5c7a14 @0x408473*/
  FIXUP public_408473 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7a14
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_4084a1
        mov ecx, esi
        call dword ptr ds : [public_5c6698]
        push 0
        push eax
        call dword ptr ds : [public_5c6028]
        add esp, 8
        mov dword ptr ds : [edi+0x60], eax
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 4
        public_4084a1 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4083a0)
    }
}

#undef public_4083d3
#undef public_4083db
#undef public_408407
#undef public_408433
#undef public_408473
#undef public_4084a1
