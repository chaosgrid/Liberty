#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec63a0);

#define public_6ec365b _public_6ec365b
#define public_6ec3663 _public_6ec3663
#define public_6ec367b _public_6ec367b

PROC_DECLARE(0x6ec3620, internal_6ec3620, public_6ec3620);
extern "C" NAKED register_t __cdecl internal_6ec3620()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        or ebx, 0xFFFFFFFF
        cmp eax, ebx
        je public_6ec367b
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x14]
        lea esi, ds:[edi+0x68]
        push eax
        mov ecx, esi
        call public_6ec63a0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], eax
        je public_6ec365b
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [eax+0x10]
        jl public_6ec365b
        lea eax, ss:[esp+0x10]
        jmp public_6ec3663
        public_6ec365b : nop
        mov dword ptr ss : [esp+0x14], esi
        lea eax, ss:[esp+0x14]
        public_6ec3663 : nop
        mov ecx, dword ptr ds : [edi+0x6C]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        je public_6ec367b
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0x44], edx
        xor eax, eax
        pop ebx
        ret 0xC
        public_6ec367b : nop
        mov eax, ebx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ec3620)
    }
}

#undef public_6ec365b
#undef public_6ec3663
#undef public_6ec367b
