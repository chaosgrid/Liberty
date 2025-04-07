#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecbd20);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ecbd66 _public_6ecbd66

PROC_DECLARE(0x6ecbd20, internal_6ecbd20, public_6ecbd20);
extern "C" NAKED register_t __cdecl internal_6ecbd20()
{
    __asm
    {
        push esi
        push 0xC
        call public_6ed0c5c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6ecbd66
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_6ed508c
        mov dword ptr ds : [esi], offset public_6ed2e60
        call dword ptr ds : [public_6ed1008]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
/*FIXUP push offset public_6ed508c @0x6ecbd52*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed508c
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        mov al, 1
        pop esi
        ret 
        public_6ecbd66 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ecbd20)
    }
}

#undef public_6ecbd66
