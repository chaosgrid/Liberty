#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf654);
CLANG_FORWARD_PROC_SYMBOL(public_6ad08fd);

#define public_6acf672 _public_6acf672
#define public_6acf67c _public_6acf67c
#define public_6acf691 _public_6acf691
#define public_6acf696 _public_6acf696
#define public_6acf6a2 _public_6acf6a2
#define public_6acf6ab _public_6acf6ab
#define public_6acf6bf _public_6acf6bf
#define public_6acf6c4 _public_6acf6c4

PROC_DECLARE(0x6acf654, internal_6acf654, public_6acf654);
extern "C" NAKED register_t __cdecl internal_6acf654()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        cmp dword ptr ss : [ebp+0xC], 0
        push edi
        mov edi, dword ptr ss : [ebp+8]
        mov esi, dword ptr ds : [edi+0xC]
        mov ebx, dword ptr ds : [edi+0x10]
        mov eax, esi
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp-4], eax
        jl public_6acf6ab
        public_6acf672 : nop
        cmp esi, 0xFFFFFFFF
        jne public_6acf67c
        call public_6ad08fd
        public_6acf67c : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        dec esi
        lea eax, ds:[esi+esi*4]
        cmp dword ptr ds : [ebx+eax*4+4], ecx
        lea eax, ds:[ebx+eax*4]
        jge public_6acf691
        cmp ecx, dword ptr ds : [eax+8]
        jle public_6acf696
        public_6acf691 : nop
        cmp esi, 0xFFFFFFFF
        jne public_6acf6a2
        public_6acf696 : nop
        mov eax, dword ptr ss : [ebp+8]
        dec dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-4], eax
        mov dword ptr ss : [ebp+8], esi
        public_6acf6a2 : nop
        cmp dword ptr ss : [ebp+0xC], 0
        jge public_6acf672
        mov eax, dword ptr ss : [ebp-4]
        public_6acf6ab : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        inc esi
        mov dword ptr ds : [ecx], esi
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [ecx], eax
        cmp eax, dword ptr ds : [edi+0xC]
        ja public_6acf6bf
        cmp esi, eax
        jbe public_6acf6c4
        public_6acf6bf : nop
        call public_6ad08fd
        public_6acf6c4 : nop
        lea eax, ds:[esi+esi*4]
        pop edi
        pop esi
        lea eax, ds:[ebx+eax*4]
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6acf654)
    }
}

#undef public_6acf672
#undef public_6acf67c
#undef public_6acf691
#undef public_6acf696
#undef public_6acf6a2
#undef public_6acf6ab
#undef public_6acf6bf
#undef public_6acf6c4
