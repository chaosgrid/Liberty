#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef5817);

#define public_6ef5843 _public_6ef5843
#define public_6ef5875 _public_6ef5875
#define public_6ef5889 _public_6ef5889
#define public_6ef5895 _public_6ef5895
#define public_6ef58aa _public_6ef58aa
#define public_6ef58b0 _public_6ef58b0

PROC_DECLARE(0x6ef5817, internal_6ef5817, public_6ef5817);
extern "C" NAKED register_t __cdecl internal_6ef5817()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f02674]
        push esi
        cmp eax, 3
        push edi
        jne public_6ef5889
        push ebx
        xor ebx, ebx
        cmp dword ptr ds : [public_6f02664], ebx
        push ebp
        mov ebp, dword ptr ds : [public_6efc07c]
        jle public_6ef5875
        mov eax, dword ptr ds : [public_6f02668]
        mov edi, dword ptr ds : [public_6efc0ac]
        lea esi, ds:[eax+0xC]
        public_6ef5843 : nop
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
        push dword ptr ds : [public_6f02670]
        call ebp
        add esi, 0x14
        inc ebx
        cmp ebx, dword ptr ds : [public_6f02664]
        jl public_6ef5843
        public_6ef5875 : nop
        push dword ptr ds : [public_6f02668]
        push 0
        push dword ptr ds : [public_6f02670]
        call ebp
        pop ebp
        pop ebx
        jmp public_6ef58b0
        public_6ef5889 : nop
        cmp eax, 2
        jne public_6ef58b0
        mov edi, offset public_6efe508
        mov esi, edi
        public_6ef5895 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6ef58aa
        push 0x8000
        push 0
        push eax
        call dword ptr ds : [public_6efc0ac]
        public_6ef58aa : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6ef5895
        public_6ef58b0 : nop
        push dword ptr ds : [public_6f02670]
        call dword ptr ds : [public_6efc014]
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef5817)
    }
}

#undef public_6ef5843
#undef public_6ef5875
#undef public_6ef5889
#undef public_6ef5895
#undef public_6ef58aa
#undef public_6ef58b0
