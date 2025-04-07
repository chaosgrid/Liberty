#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f580d0);

#define public_6f81db1 _public_6f81db1
#define public_6f81de4 _public_6f81de4
#define public_6f81e1f _public_6f81e1f
#define public_6f81e41 _public_6f81e41
#define public_6f81e47 _public_6f81e47
#define public_6f81e5b _public_6f81e5b
#define public_6f81e6b _public_6f81e6b
#define public_6f81e81 _public_6f81e81
#define public_6f81e97 _public_6f81e97
#define public_6f81eab _public_6f81eab
#define public_6f81ebe _public_6f81ebe

PROC_DECLARE(0x6f81d50, internal_6f81d50, public_6f81d50);
extern "C" NAKED register_t __cdecl internal_6f81d50()
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
/*FIXUP push offset public_6fb8a70 @0x6f81d65*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8a70
        mov esi, ecx
/*FIXUP push offset public_6fbc0ec @0x6f81d6c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbc0ec
        push ebx
        mov dword ptr ss : [esp+0x20], esi
        call edi
        mov eax, dword ptr ds : [esi+0xA0]
        push eax
/*FIXUP push offset public_6fbc218 @0x6f81d7f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbc218
        push ebx
        call edi
        mov ecx, dword ptr ds : [esi+0xA4]
        push ecx
/*FIXUP push offset public_6fbc1f8 @0x6f81d8e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbc1f8
        push ebx
        call edi
        mov eax, dword ptr ds : [esi+0x4C]
        add esp, 0x24
        test eax, eax
        je public_6f81e47
        mov eax, dword ptr ds : [esi+0x48]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f81e41
        public_6f81db1 : nop
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
/*FIXUP push offset public_6fbc1d4 @0x6f81dcc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbc1d4
        push ebx
        call dword ptr ds : [public_6fb3380]
        mov eax, dword ptr ds : [edi+0x24]
        mov esi, dword ptr ds : [eax]
        add esp, 0x1C
        cmp esi, eax
        je public_6f81e1f
        public_6f81de4 : nop
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
/*FIXUP push offset public_6fbc038 @0x6f81e07*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbc038
        push ebx
        call dword ptr ds : [public_6fb3380]
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+0x24]
        add esp, 0x14
        cmp esi, eax
        jne public_6f81de4
/*FIXUP public_6f81e1f : nop
        push offset public_6fb7758 @0x6f81e1f*/
  FIXUP public_6f81e1f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7758
        push ebx
        call dword ptr ds : [public_6fb3380]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ecx+0x48]
        add esp, 8
        cmp edi, eax
        jne public_6f81db1
        mov esi, ecx
        public_6f81e41 : nop
        mov edi, dword ptr ds : [public_6fb3380]
        public_6f81e47 : nop
        mov eax, dword ptr ds : [esi+0x3C]
        test eax, eax
        je public_6f81e6b
        mov ecx, dword ptr ds : [esi+0x40]
        test ecx, ecx
        jne public_6f81e5b
        mov edx, dword ptr ds : [esi+0x4C]
        mov dword ptr ds : [esi+0x40], edx
        public_6f81e5b : nop
        mov ecx, dword ptr ds : [esi+0x40]
        push ecx
        push eax
/*FIXUP push offset public_6fbc024 @0x6f81e60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbc024
        push ebx
        call edi
        add esp, 0x10
        public_6f81e6b : nop
        mov eax, dword ptr ds : [esi+0xB4]
        test eax, eax
        je public_6f81e81
        push eax
/*FIXUP push offset public_6fbc1bc @0x6f81e76*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbc1bc
        push ebx
        call edi
        add esp, 0xC
        public_6f81e81 : nop
        mov eax, dword ptr ds : [esi+0x50]
        test eax, eax
        je public_6f81e97
        lea edx, ds:[esi+0x54]
        push edx
/*FIXUP push offset public_6fbc060 @0x6f81e8c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbc060
        push ebx
        call edi
        add esp, 0xC
        public_6f81e97 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, 0xFFFFFFFF
        je public_6f81eab
        push eax
/*FIXUP push offset public_6fbbfec @0x6f81ea0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbfec
        push ebx
        call edi
        add esp, 0xC
        public_6f81eab : nop
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        je public_6f81ebe
        push eax
/*FIXUP push offset public_6fbbfdc @0x6f81eb3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbfdc
        push ebx
        call edi
        add esp, 0xC
        public_6f81ebe : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6f81d50)
    }
}

#undef public_6f81db1
#undef public_6f81de4
#undef public_6f81e1f
#undef public_6f81e41
#undef public_6f81e47
#undef public_6f81e5b
#undef public_6f81e6b
#undef public_6f81e81
#undef public_6f81e97
#undef public_6f81eab
#undef public_6f81ebe
