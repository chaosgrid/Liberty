#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad2d0a);

#define public_6ad2d36 _public_6ad2d36
#define public_6ad2d68 _public_6ad2d68
#define public_6ad2d7c _public_6ad2d7c
#define public_6ad2d88 _public_6ad2d88
#define public_6ad2d9d _public_6ad2d9d
#define public_6ad2da3 _public_6ad2da3

PROC_DECLARE(0x6ad2d0a, internal_6ad2d0a, public_6ad2d0a);
extern "C" NAKED register_t __cdecl internal_6ad2d0a()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ae2464]
        push esi
        cmp eax, 3
        push edi
        jne public_6ad2d7c
        push ebx
        xor ebx, ebx
        cmp dword ptr ds : [public_6ae2454], ebx
        push ebp
        mov ebp, dword ptr ds : [public_6ada134]
        jle public_6ad2d68
        mov eax, dword ptr ds : [public_6ae2458]
        mov edi, dword ptr ds : [public_6ada0c4]
        lea esi, ds:[eax+0xC]
        public_6ad2d36 : nop
        push 0x4000
        push 0x100000
        push dword ptr ds : [esi]
        call edi
        push 0x8000
        push 0
        push dword ptr ds : [esi]
        call edi
        push dword ptr ds : [esi+4]
        push 0
        push dword ptr ds : [public_6ae2460]
        call ebp
        add esi, 0x14
        inc ebx
        cmp ebx, dword ptr ds : [public_6ae2454]
        jl public_6ad2d36
        public_6ad2d68 : nop
        push dword ptr ds : [public_6ae2458]
        push 0
        push dword ptr ds : [public_6ae2460]
        call ebp
        pop ebp
        pop ebx
        jmp public_6ad2da3
        public_6ad2d7c : nop
        cmp eax, 2
        jne public_6ad2da3
        mov edi, offset public_6addc50
        mov esi, edi
        public_6ad2d88 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6ad2d9d
        push 0x8000
        push 0
        push eax
        call dword ptr ds : [public_6ada0c4]
        public_6ad2d9d : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6ad2d88
        public_6ad2da3 : nop
        push dword ptr ds : [public_6ae2460]
        call dword ptr ds : [public_6ada0cc]
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ad2d0a)
    }
}

#undef public_6ad2d36
#undef public_6ad2d68
#undef public_6ad2d7c
#undef public_6ad2d88
#undef public_6ad2d9d
#undef public_6ad2da3
