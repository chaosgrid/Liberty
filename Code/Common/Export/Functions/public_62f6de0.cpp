#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f4260);
CLANG_FORWARD_PROC_SYMBOL(public_62f6de0);
CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63105b0);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);

#define public_62f6e1f _public_62f6e1f
#define public_62f6e43 _public_62f6e43
#define public_62f6e67 _public_62f6e67
#define public_62f6e8b _public_62f6e8b
#define public_62f6ee1 _public_62f6ee1
#define public_62f6ee9 _public_62f6ee9
#define public_62f6f26 _public_62f6f26
#define public_62f6f2c _public_62f6f2c
#define public_62f6f36 _public_62f6f36

PROC_DECLARE(0x62f6de0, internal_62f6de0, public_62f6de0);
extern "C" NAKED register_t __cdecl internal_62f6de0()
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
        jne public_62f6f2c
/*FIXUP push offset public_639ef48 @0x62f6df9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ef48
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f6e1f
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x70]
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 4
/*FIXUP public_62f6e1f : nop
        push offset public_63a1ca4 @0x62f6e1f*/
  FIXUP public_62f6e1f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1ca4
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f6e43
        push 0
        call public_63108f0
        fstp dword ptr ds : [edi+0x74]
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 4
/*FIXUP public_62f6e43 : nop
        push offset public_63a1c94 @0x62f6e43*/
  FIXUP public_62f6e43 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1c94
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f6e67
        push 0
        call public_63105b0
        mov byte ptr ds : [edi+0x78], al
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 4
/*FIXUP public_62f6e67 : nop
        push offset public_63a1c84 @0x62f6e67*/
  FIXUP public_62f6e67 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1c84
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62f6e8b
        push 0
        call public_63105b0
        mov byte ptr ds : [edi+0x79], al
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 4
/*FIXUP public_62f6e8b : nop
        push offset public_63a18b8 @0x62f6e8b*/
  FIXUP public_62f6e8b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a18b8
        call public_6310410
        test al, al
        je public_62f6f36
        mov ecx, esi
        call public_6310b70
        push eax
        call public_630d3f0
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x1C], eax
        add esp, 4
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, offset public_63fcad4
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_63fcad8]
        cmp eax, ecx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+8], eax
        je public_62f6ee1
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_62f6ee1
        lea eax, ss:[esp+8]
        jmp public_62f6ee9
        public_62f6ee1 : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_62f6ee9 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_62f6f26
        push edx
        lea ecx, ss:[esp+0x14]
        mov esi, 0x100001
        call public_6333e60
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x49
/*FIXUP push offset public_63a123c @0x62f6f07*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a14a4 @0x62f6f0c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a14a4
        push esi
        call dword ptr ds : [ecx]
        add esp, 0x18
        xor eax, eax
        mov dword ptr ds : [edi+0x7C], eax
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 4
        public_62f6f26 : nop
        mov eax, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [edi+0x7C], eax
        public_62f6f2c : nop
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 4
        public_62f6f36 : nop
        pop edi
        xor al, al
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62f6de0)
    }
}

#undef public_62f6e1f
#undef public_62f6e43
#undef public_62f6e67
#undef public_62f6e8b
#undef public_62f6ee1
#undef public_62f6ee9
#undef public_62f6f26
#undef public_62f6f2c
#undef public_62f6f36
