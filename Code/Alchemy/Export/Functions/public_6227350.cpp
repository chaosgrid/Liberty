#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6227350);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_6227396 _public_6227396

PROC_DECLARE(0x6227350, internal_6227350, public_6227350);
extern "C" NAKED register_t __cdecl internal_6227350()
{
    __asm
    {
        push esi
        push 0xC
        call public_624612c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6227396
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_62563c0
        mov dword ptr ds : [esi], offset public_624e068
        call dword ptr ds : [public_624b008]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
/*FIXUP push offset public_62563c0 @0x6227382*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62563c0
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        mov al, 1
        pop esi
        ret 
        public_6227396 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6227350)
    }
}

#undef public_6227396
