#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4ef5);
CLANG_FORWARD_PROC_SYMBOL(public_6ef50fb);

#define public_6ef9e19 _public_6ef9e19
#define public_6ef9e1f _public_6ef9e1f
#define public_6ef9e24 _public_6ef9e24
#define public_6ef9e58 _public_6ef9e58
#define public_6ef9e5f _public_6ef9e5f
#define public_6ef9e7c _public_6ef9e7c
#define public_6ef9e99 _public_6ef9e99
#define public_6ef9e9c _public_6ef9e9c

PROC_DECLARE(0x6ef9e05, internal_6ef9e05, public_6ef9e05);
extern "C" NAKED register_t __cdecl internal_6ef9e05()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f02520]
        push esi
        push 0x14
        test eax, eax
        pop esi
        jne public_6ef9e19
        mov eax, 0x200
        jmp public_6ef9e1f
        public_6ef9e19 : nop
        cmp eax, esi
        jge public_6ef9e24
        mov eax, esi
        public_6ef9e1f : nop
        mov dword ptr ds : [public_6f02520], eax
        public_6ef9e24 : nop
        push 4
        push eax
        call public_6ef4ef5
        pop ecx
        mov dword ptr ds : [public_6f01508], eax
        test eax, eax
        pop ecx
        jne public_6ef9e58
        push 4
        push esi
        mov dword ptr ds : [public_6f02520], esi
        call public_6ef4ef5
        pop ecx
        mov dword ptr ds : [public_6f01508], eax
        test eax, eax
        pop ecx
        jne public_6ef9e58
        push 0x1A
        call public_6ef50fb
        pop ecx
        public_6ef9e58 : nop
        xor ecx, ecx
        mov eax, offset public_6f00858
        public_6ef9e5f : nop
        mov edx, dword ptr ds : [public_6f01508]
        mov dword ptr ds : [ecx+edx], eax
        add eax, 0x20
        add ecx, 4
        cmp eax, offset public_6f00ad8
        jl public_6ef9e5f
        xor edx, edx
        mov ecx, offset public_6f00868
        public_6ef9e7c : nop
        mov eax, edx
        mov esi, edx
        sar eax, 5
        and esi, 0x1F
        mov eax, dword ptr ds : [eax*4+public_6f02540]
        mov eax, dword ptr ds : [eax+esi*8]
        cmp eax, 0xFFFFFFFF
        je public_6ef9e99
        test eax, eax
        jne public_6ef9e9c
        public_6ef9e99 : nop
        or dword ptr ds : [ecx], 0xFFFFFFFF
        public_6ef9e9c : nop
        add ecx, 0x20
        inc edx
        cmp ecx, offset public_6f008c8
        jl public_6ef9e7c
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ef9e05)
    }
}

#undef public_6ef9e19
#undef public_6ef9e1f
#undef public_6ef9e24
#undef public_6ef9e58
#undef public_6ef9e5f
#undef public_6ef9e7c
#undef public_6ef9e99
#undef public_6ef9e9c
