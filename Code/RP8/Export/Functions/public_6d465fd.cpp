#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d464ec);
CLANG_FORWARD_PROC_SYMBOL(public_6d465fd);
CLANG_FORWARD_PROC_SYMBOL(public_6d49926);

#define public_6d4661e _public_6d4661e
#define public_6d4662c _public_6d4662c
#define public_6d46638 _public_6d46638
#define public_6d4664c _public_6d4664c
#define public_6d46669 _public_6d46669

PROC_DECLARE(0x6d465fd, internal_6d465fd, public_6d465fd);
extern "C" NAKED register_t __cdecl internal_6d465fd()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov ebx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        cmp edi, 0x3B9AC9F0
        jbe public_6d4661e
        push 3
        pop edx
        mov eax, esi
        call public_6d464ec
        public_6d4661e : nop
        mov eax, edi
        and eax, 7
        jbe public_6d4662c
        push 8
        pop ecx
        sub ecx, eax
        add edi, ecx
        public_6d4662c : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        jl public_6d46638
        cmp eax, 2
        jl public_6d4664c
        public_6d46638 : nop
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x14], 0xC
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx+0x18], eax
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax]
        pop ecx
        public_6d4664c : nop
        lea eax, ds:[edi+0x10]
        push eax
        push esi
        call public_6d49926
        mov esi, eax
        test esi, esi
        pop ecx
        pop ecx
        jne public_6d46669
        mov eax, dword ptr ss : [ebp+8]
        push 4
        pop edx
        call public_6d464ec
        public_6d46669 : nop
        lea eax, ds:[edi+0x10]
        add dword ptr ds : [ebx+0x48], eax
        mov eax, dword ptr ss : [ebp+0xC]
        lea eax, ds:[ebx+eax*4+0x38]
        mov ecx, dword ptr ds : [eax]
        and dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [eax], esi
        pop edi
        lea eax, ds:[esi+0x10]
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d465fd)
    }
}

#undef public_6d4661e
#undef public_6d4662c
#undef public_6d46638
#undef public_6d4664c
#undef public_6d46669
