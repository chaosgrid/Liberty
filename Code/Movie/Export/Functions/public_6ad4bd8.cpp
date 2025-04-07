#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad4030);
CLANG_FORWARD_PROC_SYMBOL(public_6ad4bd8);

#define public_6ad4bec _public_6ad4bec
#define public_6ad4c09 _public_6ad4c09
#define public_6ad4c58 _public_6ad4c58
#define public_6ad4c68 _public_6ad4c68
#define public_6ad4c7d _public_6ad4c7d
#define public_6ad4c9f _public_6ad4c9f
#define public_6ad4cc8 _public_6ad4cc8
#define public_6ad4cec _public_6ad4cec
#define public_6ad4cf0 _public_6ad4cf0
#define public_6ad4cfe _public_6ad4cfe
#define public_6ad4d15 _public_6ad4d15
#define public_6ad4d17 _public_6ad4d17

PROC_DECLARE(0x6ad4bd8, internal_6ad4bd8, public_6ad4bd8);
extern "C" NAKED register_t __cdecl internal_6ad4bd8()
{
    __asm
    {
        cmp dword ptr ds : [public_6addc60], 0xFFFFFFFF
        push ebx
        push ebp
        push esi
        push edi
        jne public_6ad4bec
        mov esi, offset public_6addc50
        jmp public_6ad4c09
        public_6ad4bec : nop
        push 0x2020
        push 0
        push dword ptr ds : [public_6ae2460]
        call dword ptr ds : [public_6ada130]
        mov esi, eax
        test esi, esi
        je public_6ad4d15
        public_6ad4c09 : nop
        mov ebp, dword ptr ds : [public_6ada0bc]
        push 4
        push 0x2000
        push 0x400000
        push 0
        call ebp
        mov edi, eax
        test edi, edi
        je public_6ad4cfe
        push 4
        mov ebx, 0x10000
        push 0x1000
        push ebx
        push edi
        call ebp
        test eax, eax
        je public_6ad4cf0
        mov eax, offset public_6addc50
        cmp esi, eax
        jne public_6ad4c68
        cmp dword ptr ds : [public_6addc50], 0
        jne public_6ad4c58
        mov dword ptr ds : [public_6addc50], eax
        public_6ad4c58 : nop
        cmp dword ptr ds : [public_6addc54], 0
        jne public_6ad4c7d
        mov dword ptr ds : [public_6addc54], eax
        jmp public_6ad4c7d
        public_6ad4c68 : nop
        mov dword ptr ds : [esi], eax
        mov eax, dword ptr ds : [public_6addc54]
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [public_6addc54], esi
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax], esi
        public_6ad4c7d : nop
        lea eax, ds:[edi+0x400000]
        lea ecx, ds:[esi+0x98]
        mov dword ptr ds : [esi+0x14], eax
        lea eax, ds:[esi+0x18]
        mov dword ptr ds : [esi+0xC], ecx
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ds : [esi+8], eax
        xor ebp, ebp
        mov ecx, 0xF1
        public_6ad4c9f : nop
        xor edx, edx
        cmp ebp, 0x10
        setge dl
        dec edx
        and edx, ecx
        dec edx
        inc ebp
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], ecx
        add eax, 8
        cmp ebp, 0x400
        jl public_6ad4c9f
        push ebx
        push 0
        push edi
        call public_6ad4030
        add esp, 0xC
        public_6ad4cc8 : nop
        mov eax, dword ptr ds : [esi+0x10]
        add eax, ebx
        cmp edi, eax
        jae public_6ad4cec
        or byte ptr ds : [edi+0xF8], 0xFF
        lea eax, ds:[edi+8]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], 0xF0
        add edi, 0x1000
        jmp public_6ad4cc8
        public_6ad4cec : nop
        mov eax, esi
        jmp public_6ad4d17
        public_6ad4cf0 : nop
        push 0x8000
        push 0
        push edi
        call dword ptr ds : [public_6ada0c4]
        public_6ad4cfe : nop
        cmp esi, offset public_6addc50
        je public_6ad4d15
        push esi
        push 0
        push dword ptr ds : [public_6ae2460]
        call dword ptr ds : [public_6ada134]
        public_6ad4d15 : nop
        xor eax, eax
        public_6ad4d17 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ad4bd8)
    }
}

#undef public_6ad4bec
#undef public_6ad4c09
#undef public_6ad4c58
#undef public_6ad4c68
#undef public_6ad4c7d
#undef public_6ad4c9f
#undef public_6ad4cc8
#undef public_6ad4cec
#undef public_6ad4cf0
#undef public_6ad4cfe
#undef public_6ad4d15
#undef public_6ad4d17
