#include "ReadFile-PCH.h"


#define public_6b73ae1 _public_6b73ae1
#define public_6b73ae7 _public_6b73ae7
#define public_6b73b1c _public_6b73b1c
#define public_6b73b2c _public_6b73b2c
#define public_6b73b32 _public_6b73b32
#define public_6b73b58 _public_6b73b58
#define public_6b73b61 _public_6b73b61

PROC_DECLARE(0x6b73ac0, internal_6b73ac0, public_6b73ac0);
extern "C" NAKED register_t __cdecl internal_6b73ac0()
{
    __asm
    {
        sub esp, 0x104
        push esi
        mov esi, dword ptr ss : [esp+0x10C]
        push edi
        mov eax, dword ptr ds : [esi+0x230]
        test eax, eax
        je public_6b73ae1
        mov edi, dword ptr ds : [eax+0x238]
        jmp public_6b73ae7
        public_6b73ae1 : nop
        mov edi, dword ptr ds : [esi+0x238]
        public_6b73ae7 : nop
        test edi, edi
        je public_6b73b58
        mov ecx, dword ptr ss : [esp+0x114]
        mov eax, dword ptr ds : [esi]
        push 0x104
        lea edx, ss:[esp+0xC]
        push ecx
        push edx
        push esi
        call dword ptr ds : [eax+0xA4]
        test eax, eax
        jne public_6b73b1c
        mov dword ptr ds : [esi+0x1C], 0xA1
        pop edi
        pop esi
        add esp, 0x104
        ret 8
        public_6b73b1c : nop
        mov ecx, dword ptr ds : [esi+0x238]
        test ecx, ecx
        je public_6b73b2c
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        jmp public_6b73b32
        public_6b73b2c : nop
        mov eax, dword ptr ds : [esi+0x23C]
        public_6b73b32 : nop
        mov edx, dword ptr ds : [edi]
        push eax
        lea eax, ss:[esp+0xC]
        mov ecx, edi
        push eax
        call dword ptr ds : [edx+0x18]
        cmp eax, 0xFFFFFFFF
        jne public_6b73b61
        mov dword ptr ds : [esi+0x1C], 0xA1
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x104
        ret 8
        public_6b73b58 : nop
        mov dword ptr ds : [esi+0x1C], 5
        xor eax, eax
        public_6b73b61 : nop
        pop edi
        pop esi
        add esp, 0x104
        ret 8
        UNREACHABLE_TRAP(0x6b73ac0)
    }
}

#undef public_6b73ae1
#undef public_6b73ae7
#undef public_6b73b1c
#undef public_6b73b2c
#undef public_6b73b32
#undef public_6b73b58
#undef public_6b73b61
