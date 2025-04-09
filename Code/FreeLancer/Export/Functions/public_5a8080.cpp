#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46b170);
CLANG_FORWARD_PROC_SYMBOL(public_4c4bc0);
CLANG_FORWARD_PROC_SYMBOL(public_564b00);
CLANG_FORWARD_PROC_SYMBOL(public_5a8080);
CLANG_FORWARD_PROC_SYMBOL(public_5aa440);
CLANG_FORWARD_PROC_SYMBOL(public_5b6f40);
CLANG_FORWARD_PROC_SYMBOL(public_5b6fb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b6fc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b6fd0);

#define public_5a80de _public_5a80de
#define public_5a80e8 _public_5a80e8
#define public_5a810d _public_5a810d
#define public_5a8119 _public_5a8119
#define public_5a8183 _public_5a8183
#define public_5a81af _public_5a81af

PROC_DECLARE(0x5a8080, internal_5a8080, public_5a8080);
extern "C" NAKED register_t __cdecl internal_5a8080()
{
    __asm
    {
        sub esp, 0x214
        push esi
        mov esi, dword ptr ds : [public_5c60f8]
        call esi
        call public_564b00
        test al, al
        jne public_5a80e8
        call public_46b170
        mov eax, dword ptr ds : [public_67ecd0]
        test eax, eax
        je public_5a80de
        mov ecx, offset public_67e7b8
        call public_5aa440
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x28]
        mov ecx, dword ptr ds : [public_67ecd0]
        push ecx
        call public_5b6fd0
        add esp, 4
        mov dword ptr ds : [public_67ecd0], 0
        mov dword ptr ds : [public_67ecd4], 0
        public_5a80de : nop
        mov dword ptr ds : [public_673344], 0
        public_5a80e8 : nop
        call public_4c4bc0
        call dword ptr ds : [public_5c6c90]
        call esi
        call dword ptr ds : [public_5c60d0]
        test al, al
        je public_5a810d
/*FIXUP push offset public_615aec @0x5a80ff*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_615aec
        call public_5b6f40
        push 0
        jmp public_5a8119
/*FIXUP public_5a810d : nop
        push offset public_5e6454 @0x5a810d*/
  FIXUP public_5a810d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6454
        call public_5b6f40
        push 1
        public_5a8119 : nop
        call dword ptr ds : [public_5c6be8]
        add esp, 8
        call esi
        call public_5b6fb0
        mov dword ptr ds : [public_67ecd0], eax
        call public_5b6fc0
        mov dword ptr ds : [public_67ecd4], eax
        mov eax, dword ptr ds : [public_67ecd0]
        test eax, eax
        pop esi
        je public_5a81af
        mov eax, dword ptr ds : [public_67eca4]
        push 0x104
        lea edx, ss:[esp+4]
        push edx
        push eax
        call dword ptr ds : [public_5c6f28]
        mov eax, dword ptr ss : [esp+0x218]
        lea edx, ss:[esp+0x104]
        mov dword ptr ss : [esp+0x208], 1
        mov byte ptr ss : [esp+0x211], 1
        mov byte ptr ss : [esp+0x210], 1
        sub edx, eax
        public_5a8183 : nop
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [edx+eax], cl
        inc eax
        test cl, cl
        jne public_5a8183
        mov ecx, dword ptr ds : [public_67ecd0]
        lea eax, ss:[esp]
        mov dword ptr ss : [esp+0x20C], 0x36D9
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x24]
        add esp, 0x214
        ret 
        public_5a81af : nop
        xor al, al
        add esp, 0x214
        ret 
        UNREACHABLE_TRAP(0x5a8080)
    }
}

#undef public_5a80de
#undef public_5a80e8
#undef public_5a810d
#undef public_5a8119
#undef public_5a8183
#undef public_5a81af
