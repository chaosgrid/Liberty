#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_512a40);

#define public_512a60 _public_512a60
#define public_512a7d _public_512a7d
#define public_512a87 _public_512a87
#define public_512a89 _public_512a89
#define public_512a90 _public_512a90
#define public_512a94 _public_512a94
#define public_512aa0 _public_512aa0
#define public_512abb _public_512abb
#define public_512ada _public_512ada
#define public_512ae3 _public_512ae3
#define public_512af8 _public_512af8

PROC_DECLARE(0x512a40, internal_512a40, public_512a40);
extern "C" NAKED register_t __cdecl internal_512a40()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, ebx
        sub eax, edi
        sar eax, 2
        cmp eax, 0x10
        jle public_512af8
        push ebp
        push esi
        lea esp, ss:[esp]
        public_512a60 : nop
        mov ecx, dword ptr ds : [edi]
        mov esi, dword ptr ds : [ebx-4]
        cdq 
        sub eax, edx
        sar eax, 1
        mov eax, dword ptr ds : [edi+eax*4]
        cmp ecx, eax
        jae public_512a7d
        cmp eax, esi
        jb public_512a87
        cmp ecx, esi
        jae public_512a89
        mov ecx, esi
        jmp public_512a89
        public_512a7d : nop
        cmp ecx, esi
        jb public_512a89
        cmp eax, esi
        mov ecx, esi
        jb public_512a89
        public_512a87 : nop
        mov ecx, eax
        public_512a89 : nop
        mov eax, ebx
        mov esi, edi
        lea ecx, ds:[ecx]
        public_512a90 : nop
        cmp dword ptr ds : [esi], ecx
        jae public_512aa0
        public_512a94 : nop
        mov edx, dword ptr ds : [esi+4]
        add esi, 4
        cmp edx, ecx
        jb public_512a94
        mov edi, edi
        public_512aa0 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        cmp ecx, edx
        jb public_512aa0
        cmp eax, esi
        jbe public_512abb
        mov edx, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ebp
        mov dword ptr ds : [eax], edx
        add esi, 4
        jmp public_512a90
        public_512abb : nop
        mov eax, ebx
        mov ecx, esi
        sub eax, esi
        sub ecx, edi
        and eax, 0xFFFFFFFC
        and ecx, 0xFFFFFFFC
        cmp eax, ecx
        push 0
        jg public_512ada
        push ebx
        push esi
        call public_512a40
        mov ebx, esi
        jmp public_512ae3
        public_512ada : nop
        push esi
        push edi
        call public_512a40
        mov edi, esi
        public_512ae3 : nop
        mov eax, ebx
        sub eax, edi
        sar eax, 2
        add esp, 0xC
        cmp eax, 0x10
        jg public_512a60
        pop esi
        pop ebp
        public_512af8 : nop
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x512a40)
    }
}

#undef public_512a60
#undef public_512a7d
#undef public_512a87
#undef public_512a89
#undef public_512a90
#undef public_512a94
#undef public_512aa0
#undef public_512abb
#undef public_512ada
#undef public_512ae3
#undef public_512af8
