#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2fdc0);

#define public_6c2fb0c _public_6c2fb0c
#define public_6c2fb14 _public_6c2fb14
#define public_6c2fb35 _public_6c2fb35

PROC_DECLARE(0x6c2fac0, internal_6c2fac0, public_6c2fac0);
extern "C" NAKED register_t __cdecl internal_6c2fac0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        or ebx, 0xFFFFFFFF
        mov edi, offset public_6c37750
        mov ecx, 0x10
        xor eax, eax
        repe cmpsb
        jne public_6c2fb35
        mov edi, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x1C]
        lea esi, ds:[edi+4]
        push edx
        mov ecx, esi
        call public_6c2fdc0
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, esi
        je public_6c2fb0c
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, dword ptr ds : [eax+0xC]
        jl public_6c2fb0c
        lea eax, ss:[esp+0x18]
        jmp public_6c2fb14
        public_6c2fb0c : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_6c2fb14 : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, dword ptr ds : [edi+8]
        je public_6c2fb35
        mov eax, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop ebx
        ret 0x10
        public_6c2fb35 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6c2fac0)
    }
}

#undef public_6c2fb0c
#undef public_6c2fb14
#undef public_6c2fb35
