#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec63a0);

#define public_6ec36cc _public_6ec36cc
#define public_6ec36d4 _public_6ec36d4
#define public_6ec36ef _public_6ec36ef

PROC_DECLARE(0x6ec3690, internal_6ec3690, public_6ec3690);
extern "C" NAKED register_t __cdecl internal_6ec3690()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        or ebx, 0xFFFFFFFF
        cmp eax, ebx
        je public_6ec36ef
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+0x68]
        push eax
        mov ecx, esi
        call public_6ec63a0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6ec36cc
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax+0x10]
        jl public_6ec36cc
        lea eax, ss:[esp+0x14]
        jmp public_6ec36d4
        public_6ec36cc : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6ec36d4 : nop
        mov ecx, dword ptr ds : [edi+0x6C]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        je public_6ec36ef
        mov edx, dword ptr ds : [eax+0x44]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        xor eax, eax
        pop ebx
        pop ecx
        ret 0xC
        public_6ec36ef : nop
        mov eax, ebx
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6ec3690)
    }
}

#undef public_6ec36cc
#undef public_6ec36d4
#undef public_6ec36ef
