#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec63a0);

#define public_6ec317c _public_6ec317c
#define public_6ec3184 _public_6ec3184
#define public_6ec3199 _public_6ec3199

PROC_DECLARE(0x6ec3140, internal_6ec3140, public_6ec3140);
extern "C" NAKED register_t __cdecl internal_6ec3140()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        or ebx, 0xFFFFFFFF
        cmp eax, ebx
        je public_6ec3199
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
        je public_6ec317c
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax+0x10]
        jl public_6ec317c
        lea eax, ss:[esp+0x14]
        jmp public_6ec3184
        public_6ec317c : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6ec3184 : nop
        mov ecx, dword ptr ds : [edi+0x6C]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        je public_6ec3199
        inc dword ptr ds : [eax+0x40]
        xor eax, eax
        pop ebx
        pop ecx
        ret 8
        public_6ec3199 : nop
        mov eax, ebx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ec3140)
    }
}

#undef public_6ec317c
#undef public_6ec3184
#undef public_6ec3199
