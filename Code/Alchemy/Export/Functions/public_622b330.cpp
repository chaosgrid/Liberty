#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622b330);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_622b376 _public_622b376

PROC_DECLARE(0x622b330, internal_622b330, public_622b330);
extern "C" NAKED register_t __cdecl internal_622b330()
{
    __asm
    {
        push esi
        push 0xC
        call public_624612c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_622b376
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_625675c
        mov dword ptr ds : [esi], offset public_624e14c
        call dword ptr ds : [public_624b008]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
/*FIXUP push offset public_625675c @0x622b362*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625675c
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        mov al, 1
        pop esi
        ret 
        public_622b376 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x622b330)
    }
}

#undef public_622b376
