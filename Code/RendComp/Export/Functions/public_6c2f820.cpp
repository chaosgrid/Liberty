#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2d4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2e720);

#define public_6c2f85c _public_6c2f85c
#define public_6c2f8ed _public_6c2f8ed

PROC_DECLARE(0x6c2f820, internal_6c2f820, public_6c2f820);
extern "C" NAKED register_t __cdecl internal_6c2f820()
{
    __asm
    {
        sub esp, 0x14
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+8]
        push edi
        push ecx
        or ebp, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], eax
        call public_6c2e720
        mov edi, eax
        add esp, 4
        test edi, edi
        jne public_6c2f85c
        pop edi
        pop esi
        mov eax, 0xFFFFFFF8
        pop ebp
        add esp, 0x14
        ret 
        public_6c2f85c : nop
        mov ecx, dword ptr ds : [edi+0x28]
        test ecx, ecx
        je public_6c2f8ed
        call public_6c2d4a0
        test eax, eax
        jl public_6c2f8ed
        mov ecx, dword ptr ds : [public_6c37d5c]
        add edi, 0xC
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+4]
        mov edi, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xC], 0
        movzx ebp, word ptr ds : [eax+0xC]
        push ebp
        add eax, 0x10
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        push 0xFFFFFFFF
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ds : [ecx]
        push ecx
        call dword ptr ds : [edx+0x18]
        mov edx, dword ptr ds : [esi+4]
        movzx edx, word ptr ds : [edx+8]
        mov eax, dword ptr ds : [public_6c37d5c]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        add edx, edi
        push edx
        push 0xFFFFFFFF
        push eax
        call dword ptr ds : [ecx+0x24]
        mov esi, dword ptr ds : [esi+4]
        movzx edx, word ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [public_6c37d60]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        movzx edx, word ptr ds : [esi+0xE]
        push edx
        push 0
        push 2
        push eax
        call dword ptr ds : [ecx+0xC]
        pop edi
        pop esi
        pop ebp
        add esp, 0x14
        ret 
        public_6c2f8ed : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6c2f820)
    }
}

#undef public_6c2f85c
#undef public_6c2f8ed
