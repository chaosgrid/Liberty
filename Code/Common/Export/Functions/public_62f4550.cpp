#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f4260);
CLANG_FORWARD_PROC_SYMBOL(public_62fd030);
CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);

#define public_62f458f _public_62f458f
#define public_62f4613 _public_62f4613
#define public_62f4623 _public_62f4623
#define public_62f467d _public_62f467d
#define public_62f4685 _public_62f4685
#define public_62f46bc _public_62f46bc
#define public_62f46d2 _public_62f46d2
#define public_62f46dc _public_62f46dc

PROC_DECLARE(0x62f4550, internal_62f4550, public_62f4550);
extern "C" NAKED register_t __cdecl internal_62f4550()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        push esi
        mov edi, ecx
        call public_62f4260
        test al, al
        jne public_62f46d2
/*FIXUP push offset public_63a18c8 @0x62f4569*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a18c8
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f458f
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x70]
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 4
/*FIXUP public_62f458f : nop
        push offset public_63a18b8 @0x62f458f*/
  FIXUP public_62f458f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a18b8
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f4623
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, offset public_63fcad4
        call public_6301640
        mov eax, dword ptr ss : [esp+8]
        cmp eax, dword ptr ds : [public_63fcad8]
        jne public_62f4613
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        lea ecx, ss:[esp+0x10]
        mov esi, 0x100001
        call public_6333e60
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x49
/*FIXUP push offset public_63a123c @0x62f45f4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a14a4 @0x62f45f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a14a4
        push esi
        call dword ptr ds : [eax]
        add esp, 0x18
        xor eax, eax
        mov dword ptr ds : [edi+0x74], eax
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 4
        public_62f4613 : nop
        mov eax, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [edi+0x74], eax
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 4
/*FIXUP public_62f4623 : nop
        push offset public_63a18a8 @0x62f4623*/
  FIXUP public_62f4623 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a18a8
        call public_6310410
        test al, al
        je public_62f46dc
        mov ecx, esi
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, offset public_63fcad4
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x20], eax
        call public_62fd030
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [public_63fcad8]
        cmp ecx, eax
        mov edx, dword ptr ss : [esp+0x18]
        je public_62f467d
        cmp edx, dword ptr ds : [ecx+0xC]
        jb public_62f467d
        lea ecx, ss:[esp+8]
        jmp public_62f4685
        public_62f467d : nop
        mov dword ptr ss : [esp+0xC], eax
        lea ecx, ss:[esp+0xC]
        public_62f4685 : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, eax
        jne public_62f46bc
        push edx
        lea ecx, ss:[esp+0x14]
        mov esi, 0x100001
        call public_6333e60
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x49
/*FIXUP push offset public_63a123c @0x62f46a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a14a4 @0x62f46a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a14a4
        push esi
        call dword ptr ds : [eax]
        add esp, 0x18
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 4
        public_62f46bc : nop
        mov esi, dword ptr ds : [ecx+0x10]
        test esi, esi
        je public_62f46d2
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        cmp eax, 9
        jne public_62f46d2
        mov dword ptr ds : [edi+0x78], esi
        public_62f46d2 : nop
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 4
        public_62f46dc : nop
        pop edi
        xor al, al
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62f4550)
    }
}

#undef public_62f458f
#undef public_62f4613
#undef public_62f4623
#undef public_62f467d
#undef public_62f4685
#undef public_62f46bc
#undef public_62f46d2
#undef public_62f46dc
