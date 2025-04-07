#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_622eedc _public_622eedc
#define public_622ef05 _public_622ef05

PROC_DECLARE(0x622eeb0, internal_622eeb0, public_622eeb0);
extern "C" NAKED register_t __cdecl internal_622eeb0()
{
    __asm
    {
        push esi
        push 0xC
        call public_624612c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_622ef05
        mov eax, dword ptr ds : [public_6256778]
        mov dword ptr ds : [esi+4], 1
        test eax, eax
        mov dword ptr ds : [esi+8], eax
        jne public_622eedc
        mov eax, dword ptr ds : [public_624e4b0]
        mov dword ptr ds : [esi+8], eax
        public_622eedc : nop
        mov dword ptr ds : [esi], offset public_624e4a0
        call dword ptr ds : [public_624b008]
        mov edx, dword ptr ds : [public_6256778]
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
        public_622ef05 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x622eeb0)
    }
}

#undef public_622eedc
#undef public_622ef05
