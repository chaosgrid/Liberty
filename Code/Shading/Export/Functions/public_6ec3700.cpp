#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebe660);
CLANG_FORWARD_PROC_SYMBOL(public_6ec63a0);

#define public_6ec373c _public_6ec373c
#define public_6ec3744 _public_6ec3744
#define public_6ec376c _public_6ec376c

PROC_DECLARE(0x6ec3700, internal_6ec3700, public_6ec3700);
extern "C" NAKED register_t __cdecl internal_6ec3700()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        or ebx, 0xFFFFFFFF
        cmp eax, ebx
        je public_6ec376c
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
        je public_6ec373c
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, dword ptr ds : [eax+0x10]
        jl public_6ec373c
        lea eax, ss:[esp+0x14]
        jmp public_6ec3744
        public_6ec373c : nop
        mov dword ptr ss : [esp+0xC], esi
        lea eax, ss:[esp+0xC]
        public_6ec3744 : nop
        mov ecx, dword ptr ds : [edi+0x6C]
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        pop edi
        pop esi
        je public_6ec376c
        fld dword ptr ss : [esp+0x14]
        push ecx
        fmul dword ptr ds : [public_6ed29e8]
        lea ecx, ds:[eax+0x18]
        fstp dword ptr ss : [esp]
        call public_6ebe660
        xor eax, eax
        pop ebx
        pop ecx
        ret 0xC
        public_6ec376c : nop
        mov eax, ebx
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6ec3700)
    }
}

#undef public_6ec373c
#undef public_6ec3744
#undef public_6ec376c
