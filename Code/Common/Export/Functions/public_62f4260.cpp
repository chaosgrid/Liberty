#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f0660);
CLANG_FORWARD_PROC_SYMBOL(public_62f3ea0);
CLANG_FORWARD_PROC_SYMBOL(public_62f4260);
CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63105b0);
CLANG_FORWARD_PROC_SYMBOL(public_63107c0);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);

#define public_62f42e0 _public_62f42e0
#define public_62f4310 _public_62f4310
#define public_62f4329 _public_62f4329
#define public_62f434b _public_62f434b
#define public_62f436d _public_62f436d
#define public_62f438f _public_62f438f
#define public_62f43b1 _public_62f43b1
#define public_62f43da _public_62f43da
#define public_62f43f4 _public_62f43f4
#define public_62f43fc _public_62f43fc

PROC_DECLARE(0x62f4260, internal_62f4260, public_62f4260);
extern "C" NAKED register_t __cdecl internal_62f4260()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        push esi
        mov edi, ecx
        call public_62f0660
        test al, al
        jne public_62f43f4
/*FIXUP push offset public_63a17dc @0x62f4277*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a17dc
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f4329
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, offset public_63fcad4
        call public_6301640
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [public_63fcad8]
        jne public_62f4310
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push 0x3C
/*FIXUP push offset public_63a123c @0x62f42c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
        mov eax, 0x100001
/*FIXUP push offset public_63a1538 @0x62f42d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1538
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_62f42e0 : nop
        mov ecx, esi
        mov edi, 0x100002
        call public_6310b70
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x828
/*FIXUP push offset public_63a123c @0x62f42f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a17a0 @0x62f42fd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a17a0
        push edi
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        mov al, 1
        pop esi
        pop ecx
        ret 4
        public_62f4310 : nop
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_62f42e0
        push eax
        push edi
        call public_62f3ea0
        add esp, 8
        pop edi
        mov al, 1
        pop esi
        pop ecx
        ret 4
/*FIXUP public_62f4329 : nop
        push offset public_63a189c @0x62f4329*/
  FIXUP public_62f4329 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a189c
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f434b
        push 0
        call public_63105b0
        mov byte ptr ds : [edi+0x60], al
        pop edi
        mov al, 1
        pop esi
        pop ecx
        ret 4
/*FIXUP public_62f434b : nop
        push offset public_63a1888 @0x62f434b*/
  FIXUP public_62f434b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1888
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f436d
        push 0
        call public_63107c0
        mov dword ptr ds : [edi+0x64], eax
        pop edi
        mov al, 1
        pop esi
        pop ecx
        ret 4
/*FIXUP public_62f436d : nop
        push offset public_63a13c4 @0x62f436d*/
  FIXUP public_62f436d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a13c4
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f438f
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x1C]
        pop edi
        mov al, 1
        pop esi
        pop ecx
        ret 4
/*FIXUP public_62f438f : nop
        push offset public_63a1880 @0x62f438f*/
  FIXUP public_62f438f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1880
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f43b1
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x5C]
        pop edi
        mov al, 1
        pop esi
        pop ecx
        ret 4
/*FIXUP public_62f43b1 : nop
        push offset public_63a186c @0x62f43b1*/
  FIXUP public_62f43b1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a186c
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f43da
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ds : [edi+0x68], eax
        pop edi
        mov al, 1
        pop esi
        pop ecx
        ret 4
/*FIXUP public_62f43da : nop
        push offset public_63a1860 @0x62f43da*/
  FIXUP public_62f43da : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1860
        call public_6310410
        test al, al
        je public_62f43fc
        push 0
        mov ecx, esi
        call public_63105b0
        mov byte ptr ds : [edi+0x6C], al
        public_62f43f4 : nop
        pop edi
        mov al, 1
        pop esi
        pop ecx
        ret 4
        public_62f43fc : nop
        pop edi
        xor al, al
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62f4260)
    }
}

#undef public_62f42e0
#undef public_62f4310
#undef public_62f4329
#undef public_62f434b
#undef public_62f436d
#undef public_62f438f
#undef public_62f43b1
#undef public_62f43da
#undef public_62f43f4
#undef public_62f43fc
