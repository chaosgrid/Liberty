#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b7d0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_623b816 _public_623b816

PROC_DECLARE(0x623b7d0, internal_623b7d0, public_623b7d0);
extern "C" NAKED register_t __cdecl internal_623b7d0()
{
    __asm
    {
        push esi
        push 0xC
        call public_624612c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_623b816
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_6256cbc
        mov dword ptr ds : [esi], offset public_624f234
        call dword ptr ds : [public_624b008]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
/*FIXUP push offset public_6256cbc @0x623b802*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256cbc
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        mov al, 1
        pop esi
        ret 
        public_623b816 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x623b7d0)
    }
}

#undef public_623b816
