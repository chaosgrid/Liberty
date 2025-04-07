#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f450);

#define public_6201a17 _public_6201a17
#define public_6201a5f _public_6201a5f
#define public_6201ab2 _public_6201ab2
#define public_6201abf _public_6201abf
#define public_6201acc _public_6201acc
#define public_6201ade _public_6201ade

PROC_DECLARE(0x62019e0, internal_62019e0, public_62019e0);
extern "C" NAKED register_t __cdecl internal_62019e0()
{
    __asm
    {
        mov al, byte ptr ds : [public_6257918]
        push ebx
        xor ebx, ebx
        cmp al, bl
        je public_6201a17
/*FIXUP push offset public_62552f4 @0x62019ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62552f4
        push 0x151
        mov eax, 0x100002
/*FIXUP push offset public_6255088 @0x62019fb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255088
/*FIXUP push offset public_625528c @0x6201a00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625528c
        push eax
        mov eax, dword ptr ds : [public_624b004]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        pop ebx
        ret 4
        public_6201a17 : nop
        mov eax, dword ptr ds : [public_6257bc4]
        mov edx, dword ptr ds : [public_625791c]
        mov byte ptr ds : [public_6257918], 1
        push edx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x28]
        test eax, eax
        jge public_6201abf
        mov eax, dword ptr ds : [public_6257bc4]
        cmp eax, ebx
        je public_6201ab2
        cmp dword ptr ds : [public_625791c], ebx
        je public_6201a5f
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_625791c @0x6201a4b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625791c
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [public_6257bc4]
        mov dword ptr ds : [public_625791c], ebx
        public_6201a5f : nop
        mov ecx, dword ptr ds : [public_6255064]
        mov edx, dword ptr ds : [eax]
        push 1
/*FIXUP push offset public_625791c @0x6201a69*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625791c
        push ecx
        push 0x142
        push eax
        call dword ptr ds : [edx+0xC]
        test eax, eax
        jge public_6201abf
        mov edx, dword ptr ds : [public_624b004]
/*FIXUP push offset public_62550cc @0x6201a82*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62550cc
        push 0x43
        mov eax, 0x100001
/*FIXUP push offset public_6255088 @0x6201a8e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255088
/*FIXUP push offset public_625506c @0x6201a93*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625506c
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ds : [public_6257bc4]
        add esp, 0x14
        cmp eax, ebx
        je public_6201ab2
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_625791c @0x6201aa9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625791c
        push eax
        call dword ptr ds : [ecx+0x10]
        public_6201ab2 : nop
        mov dword ptr ds : [public_625791c], ebx
        or eax, 0xFFFFFFFF
        pop ebx
        ret 4
        public_6201abf : nop
        cmp byte ptr ds : [public_6257919], bl
        je public_6201ade
        mov eax, offset public_62578bc
        public_6201acc : nop
        mov dword ptr ds : [eax-8], ebx
        mov dword ptr ds : [eax-4], ebx
        mov dword ptr ds : [eax], ebx
        add eax, 0xC
        cmp eax, offset public_62578ec
        jl public_6201acc
        public_6201ade : nop
        mov eax, dword ptr ds : [public_6257bc0]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x2C]
        push ecx
        push 0x16
        push eax
        call dword ptr ds : [edx+0xF4]
        mov eax, dword ptr ds : [public_6257bc0]
        lea ecx, ds:[esi+0x3C]
        push ecx
        push 0x89
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0xF4]
        mov eax, dword ptr ds : [public_6257bc0]
        lea ecx, ds:[esi+0x40]
        push ecx
        push 0xE
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0xF4]
        mov eax, dword ptr ds : [public_6257bc0]
        lea ecx, ds:[esi+0x30]
        push ecx
        push 0x1B
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0xF4]
        mov eax, dword ptr ds : [public_6257bc0]
        lea ecx, ds:[esi+0x34]
        push ecx
        push 0x13
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0xF4]
        mov eax, dword ptr ds : [public_6257bc0]
        add esi, 0x38
        push esi
        push 0x14
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0xF4]
        call public_623f450
        mov dword ptr ds : [public_62578e4], ebx
        mov dword ptr ds : [public_62578e8], ebx
        mov dword ptr ds : [public_62578ec], ebx
        mov dword ptr ds : [public_62578f0], ebx
        mov dword ptr ds : [public_62578f4], ebx
        mov dword ptr ds : [public_62578f8], ebx
        mov dword ptr ds : [public_62578fc], ebx
        mov dword ptr ds : [public_6257900], ebx
        mov dword ptr ds : [public_6257904], ebx
        pop esi
        xor eax, eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62019e0)
    }
}

#undef public_6201a17
#undef public_6201a5f
#undef public_6201ab2
#undef public_6201abf
#undef public_6201acc
#undef public_6201ade
