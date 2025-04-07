#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f24610);
CLANG_FORWARD_PROC_SYMBOL(public_6f67660);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f20);

#define public_6f67690 _public_6f67690
#define public_6f676a0 _public_6f676a0
#define public_6f676bd _public_6f676bd
#define public_6f676c3 _public_6f676c3
#define public_6f676d3 _public_6f676d3
#define public_6f676f5 _public_6f676f5
#define public_6f6770a _public_6f6770a
#define public_6f67725 _public_6f67725
#define public_6f67727 _public_6f67727
#define public_6f6772c _public_6f6772c

PROC_DECLARE(0x6f67660, internal_6f67660, public_6f67660);
extern "C" NAKED register_t __cdecl internal_6f67660()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        call public_6f75f20
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, eax
        call public_6f1df30
        call public_6f75f20
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, dword ptr ds : [eax+4]
        je public_6f67725
        mov esi, dword ptr ss : [esp+0x14]
        or edi, 0xFFFFFFFF
        mov edi, edi
        public_6f67690 : nop
        mov edx, dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        je public_6f676c3
        lea esp, ss:[esp]
        public_6f676a0 : nop
        mov ecx, dword ptr ds : [eax+8]
        cmp dword ptr ds : [ecx+0x154], esi
        jne public_6f676bd
        mov ebx, dword ptr ds : [ecx+0x14C]
        test ebx, ebx
        je public_6f6772c
        cmp dword ptr ds : [ecx+0x154], edi
        je public_6f6772c
        public_6f676bd : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        jne public_6f676a0
        public_6f676c3 : nop
        mov ecx, dword ptr ds : [public_6fd0bc0]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_6f6770a
        public_6f676d3 : nop
        mov edx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [edx+0x10]
        test eax, eax
        je public_6f676f5
        mov ecx, dword ptr ds : [eax+0x154]
        cmp ecx, esi
        jne public_6f676f5
        mov edx, dword ptr ds : [eax+0x14C]
        test edx, edx
        je public_6f67727
        cmp ecx, edi
        je public_6f67727
        public_6f676f5 : nop
        lea ecx, ss:[esp+0x14]
        call public_6f1fa00
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [public_6fd0bc0]
        jne public_6f676d3
        public_6f6770a : nop
        lea ecx, ss:[esp+0xC]
        call public_6f24610
        call public_6f75f20
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, dword ptr ds : [eax+4]
        jne public_6f67690
        public_6f67725 : nop
        xor eax, eax
        public_6f67727 : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        public_6f6772c : nop
        mov eax, dword ptr ds : [eax+8]
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f67660)
    }
}

#undef public_6f67690
#undef public_6f676a0
#undef public_6f676bd
#undef public_6f676c3
#undef public_6f676d3
#undef public_6f676f5
#undef public_6f6770a
#undef public_6f67725
#undef public_6f67727
#undef public_6f6772c
