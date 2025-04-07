#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f580d0);

#define public_6f80f69 _public_6f80f69
#define public_6f80fa2 _public_6f80fa2
#define public_6f80fb9 _public_6f80fb9
#define public_6f80fcf _public_6f80fcf
#define public_6f80fe7 _public_6f80fe7
#define public_6f81020 _public_6f81020
#define public_6f8105b _public_6f8105b
#define public_6f8107d _public_6f8107d
#define public_6f81083 _public_6f81083
#define public_6f81097 _public_6f81097
#define public_6f810a7 _public_6f810a7
#define public_6f810b7 _public_6f810b7
#define public_6f810e6 _public_6f810e6
#define public_6f810ec _public_6f810ec
#define public_6f81100 _public_6f81100
#define public_6f81115 _public_6f81115

PROC_DECLARE(0x6f80f10, internal_6f80f10, public_6f80f10);
extern "C" NAKED register_t __cdecl internal_6f80f10()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        push edi
        mov edi, dword ptr ds : [public_6fb3380]
/*FIXUP push offset public_6fb8a50 @0x6f80f25*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8a50
        mov esi, ecx
/*FIXUP push offset public_6fbc0ec @0x6f80f2c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbc0ec
        push ebx
        mov dword ptr ss : [esp+0x20], esi
        call edi
        mov eax, dword ptr ds : [esi+0xA0]
        add esp, 0xC
        cmp eax, 2
        jne public_6f80f69
        fld dword ptr ds : [esi+0xB4]
        sub esp, 0x10
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0xB8]
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_6fbc0cc @0x6f80f5c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbc0cc
        push ebx
        call edi
        add esp, 0x18
        jmp public_6f80fb9
        public_6f80f69 : nop
        cmp eax, 1
        jne public_6f80fa2
        mov eax, dword ptr ds : [esi+0xB0]
        fld dword ptr ds : [esi+0xAC]
        push eax
        sub esp, 0x18
        fstp qword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+0xA8]
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0xA4]
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_6fbc0a0 @0x6f80f95*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbc0a0
        push ebx
        call edi
        add esp, 0x24
        jmp public_6f80fb9
        public_6f80fa2 : nop
        fld dword ptr ds : [esi+0xBC]
        sub esp, 8
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_6fbc078 @0x6f80fae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbc078
        push ebx
        call edi
        add esp, 0x10
        public_6f80fb9 : nop
        mov eax, dword ptr ds : [esi+0x50]
        test eax, eax
        je public_6f80fcf
        lea ecx, ds:[esi+0x54]
        push ecx
/*FIXUP push offset public_6fbc060 @0x6f80fc4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbc060
        push ebx
        call edi
        add esp, 0xC
        public_6f80fcf : nop
        mov eax, dword ptr ds : [esi+0x4C]
        test eax, eax
        je public_6f81083
        mov eax, dword ptr ds : [esi+0x48]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f8107d
        public_6f80fe7 : nop
        mov edx, dword ptr ds : [edi+0x18]
        fld dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+0x14]
        push edx
        push eax
        sub esp, 8
        lea ecx, ds:[edi+0xC]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_6fb3074]
        push eax
/*FIXUP push offset public_6fbc044 @0x6f81002*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbc044
        push ebx
        call dword ptr ds : [public_6fb3380]
        mov eax, dword ptr ds : [edi+0x24]
        mov esi, dword ptr ds : [eax]
        add esp, 0x1C
        cmp esi, eax
        je public_6f8105b
        lea ebx, ds:[ebx]
        public_6f81020 : nop
        lea ecx, ss:[esp+0x10]
        call dword ptr ds : [public_6fb3030]
        lea ecx, ds:[esi+8]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        call public_6f580d0
        fld dword ptr ds : [esi+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        fstp qword ptr ss : [esp]
        push eax
/*FIXUP push offset public_6fbc038 @0x6f81043*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbc038
        push ebx
        call dword ptr ds : [public_6fb3380]
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+0x24]
        add esp, 0x14
        cmp esi, eax
        jne public_6f81020
/*FIXUP public_6f8105b : nop
        push offset public_6fb7758 @0x6f8105b*/
  FIXUP public_6f8105b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7758
        push ebx
        call dword ptr ds : [public_6fb3380]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ecx+0x48]
        add esp, 8
        cmp edi, eax
        jne public_6f80fe7
        mov esi, ecx
        public_6f8107d : nop
        mov edi, dword ptr ds : [public_6fb3380]
        public_6f81083 : nop
        mov eax, dword ptr ds : [esi+0x3C]
        test eax, eax
        je public_6f810a7
        mov ecx, dword ptr ds : [esi+0x40]
        test ecx, ecx
        jne public_6f81097
        mov edx, dword ptr ds : [esi+0x4C]
        mov dword ptr ds : [esi+0x40], edx
        public_6f81097 : nop
        mov ecx, dword ptr ds : [esi+0x40]
        push ecx
        push eax
/*FIXUP push offset public_6fbc024 @0x6f8109c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbc024
        push ebx
        call edi
        add esp, 0x10
        public_6f810a7 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_6f810ec
        mov eax, dword ptr ds : [esi+0x2C]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f810e6
        public_6f810b7 : nop
        fld dword ptr ds : [edi+0x10]
        sub esp, 0x18
        fstp qword ptr ss : [esp+0x10]
        fld dword ptr ds : [edi+0xC]
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [edi+8]
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_6fbc000 @0x6f810ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbc000
        push ebx
        call dword ptr ds : [public_6fb3380]
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ds : [esi+0x2C]
        add esp, 0x20
        cmp edi, eax
        jne public_6f810b7
        public_6f810e6 : nop
        mov edi, dword ptr ds : [public_6fb3380]
        public_6f810ec : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, 0xFFFFFFFF
        je public_6f81100
        push eax
/*FIXUP push offset public_6fbbfec @0x6f810f5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbfec
        push ebx
        call edi
        add esp, 0xC
        public_6f81100 : nop
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        je public_6f81115
        mov edx, eax
        push edx
/*FIXUP push offset public_6fbbfdc @0x6f8110a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbfdc
        push ebx
        call edi
        add esp, 0xC
        public_6f81115 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6f80f10)
    }
}

#undef public_6f80f69
#undef public_6f80fa2
#undef public_6f80fb9
#undef public_6f80fcf
#undef public_6f80fe7
#undef public_6f81020
#undef public_6f8105b
#undef public_6f8107d
#undef public_6f81083
#undef public_6f81097
#undef public_6f810a7
#undef public_6f810b7
#undef public_6f810e6
#undef public_6f810ec
#undef public_6f81100
#undef public_6f81115
