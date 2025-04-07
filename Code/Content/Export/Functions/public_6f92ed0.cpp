#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa9130);

#define public_6f92f17 _public_6f92f17
#define public_6f92f1f _public_6f92f1f
#define public_6f92f50 _public_6f92f50
#define public_6f92f68 _public_6f92f68
#define public_6f92fd6 _public_6f92fd6
#define public_6f92fe0 _public_6f92fe0

PROC_DECLARE(0x6f92ed0, internal_6f92ed0, public_6f92ed0);
extern "C" NAKED register_t __cdecl internal_6f92ed0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, ecx
        cmp dword ptr ds : [eax], 1
        jne public_6f92fe0
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx]
        cmp eax, 4
        jge public_6f92f1f
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        cmp eax, 1
        jne public_6f92f1f
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x2C]
        cmp eax, 0xFFFFFFFF
        je public_6f92f17
        cmp eax, dword ptr ds : [edi+0x44]
        jg public_6f92f17
        push 2
        mov ecx, edi
        call dword ptr ds : [public_6fb3120]
        public_6f92f17 : nop
        pop edi
        mov al, 1
        pop esi
        pop ecx
        ret 8
        public_6f92f1f : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        cmp eax, 4
        jne public_6f92fe0
        cmp dword ptr ds : [esi+8], 0xD
        jne public_6f92fe0
        mov ecx, dword ptr ds : [edi+0x40]
        mov eax, dword ptr ds : [ecx+8]
        push ebx
        mov ebx, dword ptr ds : [esi+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push ebp
        je public_6f92fd6
        mov ecx, dword ptr ds : [ebx]
        nop 
        public_6f92f50 : nop
        mov edx, dword ptr ds : [esi+8]
        cmp dword ptr ds : [edx+0x48], ecx
        je public_6f92f68
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_6f92f50
        pop ebp
        pop ebx
        pop edi
        mov al, 1
        pop esi
        pop ecx
        ret 8
        public_6f92f68 : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+0x60]
        cmp ecx, dword ptr ds : [edi+0x48]
        jne public_6f92fd6
        mov edx, dword ptr ds : [eax+0x48]
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x20], edx
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        call dword ptr ds : [public_6fb34d0]
        fld dword ptr ss : [esp+0x24]
        fdiv dword ptr ss : [esp+0x1C]
        add esp, 0xC
        fmul dword ptr ds : [public_6fbcab8]
        call public_6fa9130
        fld dword ptr ds : [ebx+0x1C]
        fmul dword ptr ds : [public_6fbcab8]
        mov ebp, eax
        call public_6fa9130
        mov ecx, dword ptr ds : [edi+0x44]
        sub eax, ebp
        cmp eax, ecx
        jge public_6f92fd6
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx+0x48]
        mov eax, dword ptr ds : [edi]
        push edx
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        push 2
        mov ecx, edi
        call dword ptr ds : [public_6fb3120]
        public_6f92fd6 : nop
        pop ebp
        pop ebx
        pop edi
        mov al, 1
        pop esi
        pop ecx
        ret 8
        public_6f92fe0 : nop
        pop edi
        xor al, al
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f92ed0)
    }
}

#undef public_6f92f17
#undef public_6f92f1f
#undef public_6f92f50
#undef public_6f92f68
#undef public_6f92fd6
#undef public_6f92fe0
