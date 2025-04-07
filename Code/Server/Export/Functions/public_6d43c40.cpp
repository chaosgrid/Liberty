#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43c40);

#define public_6d43c8c _public_6d43c8c
#define public_6d43c92 _public_6d43c92
#define public_6d43c9c _public_6d43c9c
#define public_6d43cd3 _public_6d43cd3

PROC_DECLARE(0x6d43c40, internal_6d43c40, public_6d43c40);
extern "C" NAKED register_t __cdecl internal_6d43c40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov cl, byte ptr ds : [eax]
        sub esp, 0x208
        cmp cl, 0x5C
        je public_6d43c8c
        cmp byte ptr ds : [eax+1], 0x3A
        je public_6d43c8c
        push 0
        push eax
/*FIXUP push offset public_6d8f654 @0x6d43c5a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d8f654
        lea eax, ss:[esp+0x110]
        push 0
        push eax
        call dword ptr ds : [public_6d64bc0]
        push 0x104
        lea ecx, ss:[esp+0x11C]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        call dword ptr ds : [public_6d64bbc]
        add esp, 0x20
        jmp public_6d43c9c
        public_6d43c8c : nop
        lea edx, ss:[esp]
        sub edx, eax
        public_6d43c92 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_6d43c92
        public_6d43c9c : nop
        push esi
        lea eax, ss:[esp+4]
        push eax
        call dword ptr ds : [public_6d64a8c]
        mov esi, eax
        test esi, esi
        jne public_6d43cd3
        mov edx, dword ptr ds : [public_6d64a44]
        lea ecx, ss:[esp+4]
        push ecx
        push 0x1DE
/*FIXUP push offset public_6d6acf0 @0x6d43cbe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6acf0
        mov eax, 0x100002
/*FIXUP push offset public_6d6acb8 @0x6d43cc8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6acb8
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d43cd3 : nop
        mov eax, esi
        pop esi
        add esp, 0x208
        ret 
        UNREACHABLE_TRAP(0x6d43c40)
    }
}

#undef public_6d43c8c
#undef public_6d43c92
#undef public_6d43c9c
#undef public_6d43cd3
