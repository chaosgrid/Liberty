#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4780);

#define public_4c4792 _public_4c4792
#define public_4c47a0 _public_4c47a0
#define public_4c47a8 _public_4c47a8
#define public_4c47b8 _public_4c47b8

PROC_DECLARE(0x4c4780, internal_4c4780, public_4c4780);
extern "C" NAKED register_t __cdecl internal_4c4780()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_673374]
        cmp esi, 0x63
        push edi
        jl public_4c4792
        pop edi
        xor al, al
        pop esi
        ret 
        public_4c4792 : nop
        xor ecx, ecx
        test esi, esi
        jle public_4c47b8
        mov edx, offset public_67298c
        mov edi, esi
        nop 
        public_4c47a0 : nop
        mov eax, dword ptr ds : [edx]
        cmp eax, ecx
        jle public_4c47a8
        mov ecx, eax
        public_4c47a8 : nop
        add edx, 0x18
        dec edi
        jne public_4c47a0
        cmp ecx, 0x63
        jl public_4c47b8
        pop edi
        xor al, al
        pop esi
        ret 
        public_4c47b8 : nop
        mov edi, dword ptr ss : [esp+0xC]
        lea eax, ds:[esi+esi*2]
        shl eax, 3
        push ebx
        mov ebx, dword ptr ds : [edi]
        lea edx, ds : [eax+public_672978]
        mov dword ptr ds : [edx], ebx
        mov ebx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+4], ebx
        mov edi, dword ptr ds : [edi+8]
        mov dword ptr ds : [edx+8], edi
        mov edx, dword ptr ss : [esp+0x18]
        inc ecx
        mov dword ptr ds : [eax+public_672988], edx
        mov dword ptr ds : [eax+public_67298c], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        pop ebx
        inc esi
        pop edi
        mov dword ptr ds : [eax+public_672984], ecx
        mov dword ptr ds : [public_673374], esi
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4c4780)
    }
}

#undef public_4c4792
#undef public_4c47a0
#undef public_4c47a8
#undef public_4c47b8
