#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_623775c _public_623775c
#define public_6237785 _public_6237785

PROC_DECLARE(0x6237730, internal_6237730, public_6237730);
extern "C" NAKED register_t __cdecl internal_6237730()
{
    __asm
    {
        push esi
        push 0xC
        call public_624612c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6237785
        mov eax, dword ptr ds : [public_6256a98]
        mov dword ptr ds : [esi+4], 1
        test eax, eax
        mov dword ptr ds : [esi+8], eax
        jne public_623775c
        mov eax, dword ptr ds : [public_624ee64]
        mov dword ptr ds : [esi+8], eax
        public_623775c : nop
        mov dword ptr ds : [esi], offset public_624ee54
        call dword ptr ds : [public_624b008]
        mov edx, dword ptr ds : [public_6256a98]
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
        public_6237785 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6237730)
    }
}

#undef public_623775c
#undef public_6237785
