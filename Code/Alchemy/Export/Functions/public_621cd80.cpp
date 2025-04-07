#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621cd80);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_621cdc6 _public_621cdc6

PROC_DECLARE(0x621cd80, internal_621cd80, public_621cd80);
extern "C" NAKED register_t __cdecl internal_621cd80()
{
    __asm
    {
        push esi
        push 0xC
        call public_624612c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_621cdc6
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_6256030
        mov dword ptr ds : [esi], offset public_624d504
        call dword ptr ds : [public_624b008]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
/*FIXUP push offset public_6256030 @0x621cdb2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256030
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        mov al, 1
        pop esi
        ret 
        public_621cdc6 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x621cd80)
    }
}

#undef public_621cdc6
