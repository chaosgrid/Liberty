#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef95ce);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9617);
CLANG_FORWARD_PROC_SYMBOL(public_6ef966d);

#define public_6ef96ce _public_6ef96ce
#define public_6ef96d1 _public_6ef96d1
#define public_6ef96f1 _public_6ef96f1

PROC_DECLARE(0x6ef966d, internal_6ef966d, public_6ef966d);
extern "C" NAKED register_t __cdecl internal_6ef966d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov eax, dword ptr ss : [ebp+0xC]
        push ebx
        push esi
        push edi
        lea edi, ds:[eax-1]
        push 0x20
        pop ecx
        and dword ptr ss : [ebp-4], 0
        lea ebx, ds:[edi+1]
        push 0x20
        mov eax, ebx
        pop esi
        cdq 
        idiv ecx
        push 0x1F
        mov ecx, eax
        mov eax, ebx
        cdq 
        idiv esi
        mov eax, dword ptr ss : [ebp+8]
        pop esi
        push 1
        mov dword ptr ss : [ebp-8], ecx
        lea eax, ds:[eax+ecx*4]
        mov dword ptr ss : [ebp+0xC], eax
        sub esi, edx
        pop edx
        mov ecx, esi
        shl edx, cl
        test dword ptr ds : [eax], edx
        je public_6ef96d1
        inc ebx
        push ebx
        push dword ptr ss : [ebp+8]
        call public_6ef95ce
        pop ecx
        test eax, eax
        pop ecx
        jne public_6ef96ce
        push edi
        push dword ptr ss : [ebp+8]
        call public_6ef9617
        pop ecx
        mov dword ptr ss : [ebp-4], eax
        pop ecx
        public_6ef96ce : nop
        mov eax, dword ptr ss : [ebp+0xC]
        public_6ef96d1 : nop
        or edx, 0xFFFFFFFF
        mov ecx, esi
        shl edx, cl
        push 3
        pop ecx
        and dword ptr ds : [eax], edx
        mov eax, dword ptr ss : [ebp-8]
        inc eax
        cmp eax, ecx
        jge public_6ef96f1
        mov edx, dword ptr ss : [ebp+8]
        sub ecx, eax
        lea edi, ds:[edx+eax*4]
        xor eax, eax
        rep stosd
        public_6ef96f1 : nop
        mov eax, dword ptr ss : [ebp-4]
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef966d)
    }
}

#undef public_6ef96ce
#undef public_6ef96d1
#undef public_6ef96f1
