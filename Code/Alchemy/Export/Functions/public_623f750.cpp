#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f750);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_623f77c _public_623f77c
#define public_623f7a5 _public_623f7a5

PROC_DECLARE(0x623f750, internal_623f750, public_623f750);
extern "C" NAKED register_t __cdecl internal_623f750()
{
    __asm
    {
        push esi
        push 0xC
        call public_624612c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_623f7a5
        mov eax, dword ptr ds : [public_62572a8]
        mov dword ptr ds : [esi+4], 1
        test eax, eax
        mov dword ptr ds : [esi+8], eax
        jne public_623f77c
        mov eax, dword ptr ds : [public_624f8c0]
        mov dword ptr ds : [esi+8], eax
        public_623f77c : nop
        mov dword ptr ds : [esi], offset public_624f8b0
        call dword ptr ds : [public_624b008]
        mov edx, dword ptr ds : [public_62572a8]
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
        public_623f7a5 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x623f750)
    }
}

#undef public_623f77c
#undef public_623f7a5
