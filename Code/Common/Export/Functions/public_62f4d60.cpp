#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f4260);
CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);

#define public_62f4dd1 _public_62f4dd1
#define public_62f4dd9 _public_62f4dd9
#define public_62f4e16 _public_62f4e16
#define public_62f4e1c _public_62f4e1c
#define public_62f4e26 _public_62f4e26

PROC_DECLARE(0x62f4d60, internal_62f4d60, public_62f4d60);
extern "C" NAKED register_t __cdecl internal_62f4d60()
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
        jne public_62f4e1c
/*FIXUP push offset public_63a18b8 @0x62f4d79*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a18b8
        mov ecx, esi
        call public_6310410
        test al, al
        je public_62f4e26
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
        je public_62f4dd1
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_62f4dd1
        lea eax, ss:[esp+8]
        jmp public_62f4dd9
        public_62f4dd1 : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_62f4dd9 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_62f4e16
        push edx
        lea ecx, ss:[esp+0x14]
        mov esi, 0x100001
        call public_6333e60
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x49
/*FIXUP push offset public_63a123c @0x62f4df7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a14a4 @0x62f4dfc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a14a4
        push esi
        call dword ptr ds : [ecx]
        add esp, 0x18
        xor eax, eax
        mov dword ptr ds : [edi+0x70], eax
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 4
        public_62f4e16 : nop
        mov eax, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [edi+0x70], eax
        public_62f4e1c : nop
        pop edi
        mov al, 1
        pop esi
        add esp, 0xC
        ret 4
        public_62f4e26 : nop
        pop edi
        xor al, al
        pop esi
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62f4d60)
    }
}

#undef public_62f4dd1
#undef public_62f4dd9
#undef public_62f4e16
#undef public_62f4e1c
#undef public_62f4e26
