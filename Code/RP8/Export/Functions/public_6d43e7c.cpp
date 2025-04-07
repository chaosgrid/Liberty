#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41e47);
CLANG_FORWARD_PROC_SYMBOL(public_6d42991);
CLANG_FORWARD_PROC_SYMBOL(public_6d429be);
CLANG_FORWARD_PROC_SYMBOL(public_6d42ba7);
CLANG_FORWARD_PROC_SYMBOL(public_6d42cb7);
CLANG_FORWARD_PROC_SYMBOL(public_6d42e2e);
CLANG_FORWARD_PROC_SYMBOL(public_6d42e72);
CLANG_FORWARD_PROC_SYMBOL(public_6d430aa);
CLANG_FORWARD_PROC_SYMBOL(public_6d433f8);
CLANG_FORWARD_PROC_SYMBOL(public_6d43600);
CLANG_FORWARD_PROC_SYMBOL(public_6d43952);
CLANG_FORWARD_PROC_SYMBOL(public_6d43e7c);

#define public_6d43e97 _public_6d43e97
#define public_6d43ed3 _public_6d43ed3
#define public_6d43ee6 _public_6d43ee6
#define public_6d43ee8 _public_6d43ee8
#define public_6d43eff _public_6d43eff
#define public_6d43f37 _public_6d43f37
#define public_6d43f53 _public_6d43f53
#define public_6d43f92 _public_6d43f92
#define public_6d43fb6 _public_6d43fb6
#define public_6d43fd2 _public_6d43fd2
#define public_6d43fee _public_6d43fee
#define public_6d44016 _public_6d44016
#define public_6d44032 _public_6d44032

PROC_DECLARE(0x6d43e7c, internal_6d43e7c, public_6d43e7c);
extern "C" NAKED register_t __cdecl internal_6d43e7c()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [esi+0xDC], 0
        jne public_6d43e97
/*FIXUP push offset public_6d60f24 @0x6d43e8a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d60f24
        push esi
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d43e97 : nop
        test byte ptr ds : [esi+0x61], 0x10
        je public_6d43eff
        cmp byte ptr ds : [esi+0xF8], 3
        jne public_6d43ed3
        movzx eax, word ptr ds : [esi+0x10A]
        push eax
        push dword ptr ds : [esi+0x15C]
        mov eax, dword ptr ds : [esi+0xDC]
        push dword ptr ds : [esi+0x104]
        inc eax
        push eax
        lea eax, ds:[esi+0xF0]
        push eax
        call public_6d433f8
        add esp, 0x14
        jmp public_6d43eff
        public_6d43ed3 : nop
        cmp word ptr ds : [esi+0x10A], 0
        je public_6d43ee6
        lea eax, ds:[esi+0x160]
        push eax
        jmp public_6d43ee8
        public_6d43ee6 : nop
        push 0
        public_6d43ee8 : nop
        mov eax, dword ptr ds : [esi+0xDC]
        inc eax
        push eax
        lea eax, ds:[esi+0xF0]
        push eax
        call public_6d43600
        add esp, 0xC
        public_6d43eff : nop
        test byte ptr ds : [esi+0x61], 0x20
        je public_6d43f37
        cmp byte ptr ds : [esi+0x116], 3
        je public_6d43f37
        push dword ptr ds : [esi+0x12C]
        mov eax, dword ptr ds : [esi+0xDC]
        push dword ptr ds : [esi+0x144]
        inc eax
        push dword ptr ds : [esi+0x138]
        push eax
        lea eax, ds:[esi+0xF0]
        push eax
        call public_6d430aa
        add esp, 0x14
        public_6d43f37 : nop
        test byte ptr ds : [esi+0x61], 4
        je public_6d43f53
        mov eax, dword ptr ds : [esi+0xDC]
        inc eax
        push eax
        lea eax, ds:[esi+0xF0]
        push eax
        call public_6d42e2e
        pop ecx
        pop ecx
        public_6d43f53 : nop
        test byte ptr ds : [esi+0x60], 0x40
        je public_6d43f92
        push dword ptr ds : [esi+0x178]
        mov eax, dword ptr ds : [esi+0xDC]
        push dword ptr ds : [esi+0x174]
        inc eax
        push eax
        lea eax, ds:[esi+0xF0]
        push eax
        call public_6d43952
        add esp, 0x10
        cmp dword ptr ds : [esi+0xF4], 0
        jne public_6d43f92
/*FIXUP push offset public_6d60f00 @0x6d43f85*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d60f00
        push esi
        call public_6d41e47
        pop ecx
        pop ecx
        public_6d43f92 : nop
        test byte ptr ds : [esi+0x60], 8
        je public_6d43fb6
        lea eax, ds:[esi+0x155]
        push eax
        mov eax, dword ptr ds : [esi+0xDC]
        inc eax
        push eax
        lea eax, ds:[esi+0xF0]
        push eax
        call public_6d42cb7
        add esp, 0xC
        public_6d43fb6 : nop
        test byte ptr ds : [esi+0x60], 4
        je public_6d43fd2
        mov eax, dword ptr ds : [esi+0xDC]
        inc eax
        push eax
        lea eax, ds:[esi+0xF0]
        push eax
        call public_6d42ba7
        pop ecx
        pop ecx
        public_6d43fd2 : nop
        test byte ptr ds : [esi+0x60], 1
        je public_6d43fee
        mov eax, dword ptr ds : [esi+0xDC]
        inc eax
        push eax
        lea eax, ds:[esi+0xF0]
        push eax
        call public_6d429be
        pop ecx
        pop ecx
        public_6d43fee : nop
        test byte ptr ds : [esi+0x61], 0x80
        je public_6d44016
        push dword ptr ds : [esi+0x5C]
        movzx eax, word ptr ds : [esi+0x11E]
        push eax
        mov eax, dword ptr ds : [esi+0xDC]
        inc eax
        push eax
        lea eax, ds:[esi+0xF0]
        push eax
        call public_6d42e72
        add esp, 0x10
        public_6d44016 : nop
        test byte ptr ds : [esi+0x60], 0x10
        je public_6d44032
        mov eax, dword ptr ds : [esi+0xDC]
        inc eax
        push eax
        add esi, 0xF0
        push esi
        call public_6d42991
        pop ecx
        pop ecx
        public_6d44032 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d43e7c)
    }
}

#undef public_6d43e97
#undef public_6d43ed3
#undef public_6d43ee6
#undef public_6d43ee8
#undef public_6d43eff
#undef public_6d43f37
#undef public_6d43f53
#undef public_6d43f92
#undef public_6d43fb6
#undef public_6d43fd2
#undef public_6d43fee
#undef public_6d44016
#undef public_6d44032
