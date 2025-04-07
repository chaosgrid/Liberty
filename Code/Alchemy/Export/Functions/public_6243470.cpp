#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6243470);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_62434b6 _public_62434b6

PROC_DECLARE(0x6243470, internal_6243470, public_6243470);
extern "C" NAKED register_t __cdecl internal_6243470()
{
    __asm
    {
        push esi
        push 0xC
        call public_624612c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_62434b6
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_625760c
        mov dword ptr ds : [esi], offset public_624fb00
        call dword ptr ds : [public_624b008]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
/*FIXUP push offset public_625760c @0x62434a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625760c
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        mov al, 1
        pop esi
        ret 
        public_62434b6 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6243470)
    }
}

#undef public_62434b6
