#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_620458c _public_620458c
#define public_62045b5 _public_62045b5

PROC_DECLARE(0x6204560, internal_6204560, public_6204560);
extern "C" NAKED register_t __cdecl internal_6204560()
{
    __asm
    {
        push esi
        push 0xC
        call public_624612c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_62045b5
        mov eax, dword ptr ds : [public_62555b8]
        mov dword ptr ds : [esi+4], 1
        test eax, eax
        mov dword ptr ds : [esi+8], eax
        jne public_620458c
        mov eax, dword ptr ds : [public_624b62c]
        mov dword ptr ds : [esi+8], eax
        public_620458c : nop
        mov dword ptr ds : [esi], offset public_624b61c
        call dword ptr ds : [public_624b008]
        mov edx, dword ptr ds : [public_62555b8]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
        push edx
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        mov al, 1
        pop esi
        ret 
        public_62045b5 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6204560)
    }
}

#undef public_620458c
#undef public_62045b5
