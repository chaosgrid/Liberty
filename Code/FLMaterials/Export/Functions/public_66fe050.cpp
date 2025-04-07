#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66ff6d0);

#define public_66fe091 _public_66fe091
#define public_66fe099 _public_66fe099
#define public_66fe0b0 _public_66fe0b0

PROC_DECLARE(0x66fe050, internal_66fe050, public_66fe050);
extern "C" NAKED register_t __cdecl internal_66fe050()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], eax
        je public_66fe0b0
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, offset public_67045f4
        call public_66ff6d0
        mov eax, dword ptr ss : [esp]
        mov ecx, dword ptr ds : [public_67045f8]
        cmp eax, ecx
        je public_66fe091
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_66fe091
        lea eax, ss:[esp]
        jmp public_66fe099
        public_66fe091 : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_66fe099 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_66fe0b0
        mov eax, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        add esp, 8
        ret 0xC
        public_66fe0b0 : nop
        or eax, 0xFFFFFFFF
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x66fe050)
    }
}

#undef public_66fe091
#undef public_66fe099
#undef public_66fe0b0
