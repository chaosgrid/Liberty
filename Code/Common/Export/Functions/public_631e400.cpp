#include "Common-PCH.h"


#define public_631e426 _public_631e426
#define public_631e42c _public_631e42c
#define public_631e44a _public_631e44a
#define public_631e450 _public_631e450
#define public_631e454 _public_631e454
#define public_631e472 _public_631e472

PROC_DECLARE(0x631e400, internal_631e400, public_631e400);
extern "C" NAKED register_t __cdecl internal_631e400()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+8]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [edi]
        cmp eax, edx
        mov ebx, dword ptr ds : [edi+8]
        lea ebp, ds:[ebx+edx-1]
        lea ecx, ds:[ecx+eax-1]
        mov ebx, eax
        jg public_631e426
        mov ebx, edx
        public_631e426 : nop
        cmp ecx, ebp
        jl public_631e42c
        mov ecx, ebp
        public_631e42c : nop
        cmp ecx, ebx
        jl public_631e454
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+0xC]
        mov esi, dword ptr ds : [edi+4]
        cmp edx, esi
        mov edi, dword ptr ds : [edi+0xC]
        lea eax, ds:[eax+edx-1]
        lea edi, ds:[edi+esi-1]
        jg public_631e44a
        mov edx, esi
        public_631e44a : nop
        cmp eax, edi
        jl public_631e450
        mov eax, edi
        public_631e450 : nop
        cmp eax, edx
        jge public_631e472
        public_631e454 : nop
        mov eax, dword ptr ss : [esp+0x14]
        xor ecx, ecx
        mov ebx, eax
        mov dword ptr ds : [ebx], ecx
        xor edx, edx
        xor esi, esi
        mov dword ptr ds : [ebx+4], edx
        mov dword ptr ds : [ebx+8], esi
        xor edi, edi
        mov dword ptr ds : [ebx+0xC], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_631e472 : nop
        mov esi, dword ptr ss : [esp+0x14]
        mov edi, esi
        mov dword ptr ds : [edi], ebx
        sub ecx, ebx
        mov dword ptr ds : [edi+4], edx
        inc ecx
        sub eax, edx
        inc eax
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+0xC], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x631e400)
    }
}

#undef public_631e426
#undef public_631e42c
#undef public_631e44a
#undef public_631e450
#undef public_631e454
#undef public_631e472
