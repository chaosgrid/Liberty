#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34ab0);

#define public_6c337b4 _public_6c337b4
#define public_6c337bc _public_6c337bc
#define public_6c337ee _public_6c337ee

PROC_DECLARE(0x6c33780, internal_6c33780, public_6c33780);
extern "C" NAKED register_t __cdecl internal_6c33780()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x18]
        lea esi, ds:[edi+4]
        push eax
        mov ecx, esi
        or ebx, 0xFFFFFFFF
        call public_6c34ab0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_6c337b4
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax+0xC]
        jl public_6c337b4
        lea eax, ss:[esp+0x14]
        jmp public_6c337bc
        public_6c337b4 : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6c337bc : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+8]
        je public_6c337ee
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, dword ptr ds : [eax+0x14]
        jge public_6c337ee
        mov edx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [edx+ecx*4]
        mov esi, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ds : [eax+ecx*4+4]
        mov edx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        pop ebx
        pop ecx
        ret 0x14
        public_6c337ee : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        pop ecx
        ret 0x14
        UNREACHABLE_TRAP(0x6c33780)
    }
}

#undef public_6c337b4
#undef public_6c337bc
#undef public_6c337ee
