#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62427c0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_6242806 _public_6242806

PROC_DECLARE(0x62427c0, internal_62427c0, public_62427c0);
extern "C" NAKED register_t __cdecl internal_62427c0()
{
    __asm
    {
        push esi
        push 0xC
        call public_624612c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6242806
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_625581c
        mov dword ptr ds : [esi], offset public_624fa8c
        call dword ptr ds : [public_624b008]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
/*FIXUP push offset public_625581c @0x62427f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625581c
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        mov al, 1
        pop esi
        ret 
        public_6242806 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62427c0)
    }
}

#undef public_6242806
