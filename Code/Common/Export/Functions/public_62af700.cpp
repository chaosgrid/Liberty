#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62af700);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62af710 _public_62af710
#define public_62af744 _public_62af744
#define public_62af74d _public_62af74d
#define public_62af758 _public_62af758
#define public_62af77c _public_62af77c
#define public_62af785 _public_62af785
#define public_62af7a0 _public_62af7a0
#define public_62af7b1 _public_62af7b1
#define public_62af7bd _public_62af7bd

PROC_DECLARE(0x62af700, internal_62af700, public_62af700);
extern "C" NAKED register_t __cdecl internal_62af700()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_62af758
        mov edi, edi
        public_62af710 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        cmp dword ptr ds : [public_63fc440], 0x7FFFFFFF
        jge public_62af744
        mov ecx, dword ptr ds : [public_63fc434]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [public_63fc434], eax
        inc dword ptr ds : [public_63fc440]
        jmp public_62af74d
        public_62af744 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_62af74d : nop
        mov ecx, dword ptr ds : [edi+8]
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_62af710
        public_62af758 : nop
        cmp dword ptr ds : [public_63fc440], 0x7FFFFFFF
        mov eax, dword ptr ds : [edi+4]
        jge public_62af77c
        mov edx, dword ptr ds : [public_63fc434]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [public_63fc434], eax
        inc dword ptr ds : [public_63fc440]
        jmp public_62af785
        public_62af77c : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_62af785 : nop
        xor ebx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        dec dword ptr ds : [public_63fc438]
        jne public_62af7bd
        mov eax, dword ptr ds : [public_63fc434]
        cmp eax, ebx
        je public_62af7b1
        mov edi, edi
        public_62af7a0 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        cmp esi, ebx
        mov eax, esi
        jne public_62af7a0
        public_62af7b1 : nop
        mov dword ptr ds : [public_63fc434], ebx
        mov dword ptr ds : [public_63fc440], ebx
        public_62af7bd : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62af700)
    }
}

#undef public_62af710
#undef public_62af744
#undef public_62af74d
#undef public_62af758
#undef public_62af77c
#undef public_62af785
#undef public_62af7a0
#undef public_62af7b1
#undef public_62af7bd
