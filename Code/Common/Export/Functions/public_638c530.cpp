#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_638c530);

#define public_638c54a _public_638c54a
#define public_638c55d _public_638c55d
#define public_638c567 _public_638c567
#define public_638c56b _public_638c56b
#define public_638c57f _public_638c57f
#define public_638c599 _public_638c599
#define public_638c59c _public_638c59c

PROC_DECLARE(0x638c530, internal_638c530, public_638c530);
extern "C" NAKED register_t __cdecl internal_638c530()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b24c]
        push esi
        push edi
        xor edi, edi
        xor esi, esi
        xor edx, edx
        cmp eax, edi
        jle public_638c57f
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        push ebx
        public_638c54a : nop
        cmp dword ptr ds : [public_658b24c], 4
        mov ebx, dword ptr ds : [public_658b058]
        jne public_638c59c
        cmp esi, ebx
        je public_638c56b
        public_638c55d : nop
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], ebx
        public_638c567 : nop
        inc edx
        add eax, 8
        public_638c56b : nop
        mov ebx, dword ptr ds : [public_658b24c]
        inc esi
        add ecx, 8
        cmp esi, ebx
        jl public_638c54a
        cmp edx, 3
        pop ebx
        jge public_638c599
        public_638c57f : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, 3
        sub ecx, edx
        shl ecx, 1
        lea edi, ds:[eax+edx*8]
        and ecx, 0x3FFFFFFE
        xor eax, eax
        rep stosd
        public_638c599 : nop
        pop edi
        pop esi
        ret 
        public_638c59c : nop
        cmp esi, ebx
        jne public_638c55d
        mov dword ptr ds : [eax], edi
        mov dword ptr ds : [eax+4], edi
        jmp public_638c567
        UNREACHABLE_TRAP(0x638c530)
    }
}

#undef public_638c54a
#undef public_638c55d
#undef public_638c567
#undef public_638c56b
#undef public_638c57f
#undef public_638c599
#undef public_638c59c
