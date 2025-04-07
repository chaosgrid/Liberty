#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ef10);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_622ef56 _public_622ef56

PROC_DECLARE(0x622ef10, internal_622ef10, public_622ef10);
extern "C" NAKED register_t __cdecl internal_622ef10()
{
    __asm
    {
        push esi
        push 0xC
        call public_624612c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_622ef56
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_6256870
        mov dword ptr ds : [esi], offset public_624e4c8
        call dword ptr ds : [public_624b008]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
/*FIXUP push offset public_6256870 @0x622ef42*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256870
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        mov al, 1
        pop esi
        ret 
        public_622ef56 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x622ef10)
    }
}

#undef public_622ef56
