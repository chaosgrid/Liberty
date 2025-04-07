#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_623b79c _public_623b79c
#define public_623b7c5 _public_623b7c5

PROC_DECLARE(0x623b770, internal_623b770, public_623b770);
extern "C" NAKED register_t __cdecl internal_623b770()
{
    __asm
    {
        push esi
        push 0xC
        call public_624612c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_623b7c5
        mov eax, dword ptr ds : [public_6256c48]
        mov dword ptr ds : [esi+4], 1
        test eax, eax
        mov dword ptr ds : [esi+8], eax
        jne public_623b79c
        mov eax, dword ptr ds : [public_624f21c]
        mov dword ptr ds : [esi+8], eax
        public_623b79c : nop
        mov dword ptr ds : [esi], offset public_624f20c
        call dword ptr ds : [public_624b008]
        mov edx, dword ptr ds : [public_6256c48]
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
        public_623b7c5 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x623b770)
    }
}

#undef public_623b79c
#undef public_623b7c5
