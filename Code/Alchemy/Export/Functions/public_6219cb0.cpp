#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6219cb0);

#define public_6219cc4 _public_6219cc4
#define public_6219cd4 _public_6219cd4
#define public_6219ceb _public_6219ceb
#define public_6219cfb _public_6219cfb
#define public_6219d02 _public_6219d02
#define public_6219d09 _public_6219d09
#define public_6219d1c _public_6219d1c

PROC_DECLARE(0x6219cb0, internal_6219cb0, public_6219cb0);
extern "C" NAKED register_t __cdecl internal_6219cb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xF2468210
        jne public_6219cc4
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x4C]
        jmp public_6219d09
        public_6219cc4 : nop
        cmp eax, 0x138BDB51
        jne public_6219cd4
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [edx+0x50]
        jmp public_6219d09
        public_6219cd4 : nop
        cmp eax, 0x11336C98
        je public_6219d02
        cmp eax, 0xE462B789
        jne public_6219ceb
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [edx+0x4C]
        jmp public_6219d09
        public_6219ceb : nop
        cmp eax, 0x61AAF28
        jne public_6219cfb
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [edx+0x50]
        jmp public_6219d09
        public_6219cfb : nop
        cmp eax, 0x16FF3474
        jne public_6219d1c
        public_6219d02 : nop
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [edx+0x54]
        public_6219d09 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6219d1c : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6219cb0)
    }
}

#undef public_6219cc4
#undef public_6219cd4
#undef public_6219ceb
#undef public_6219cfb
#undef public_6219d02
#undef public_6219d09
#undef public_6219d1c
