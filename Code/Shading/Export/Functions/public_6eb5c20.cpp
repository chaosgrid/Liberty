#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb5c20);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6eb5c66 _public_6eb5c66

PROC_DECLARE(0x6eb5c20, internal_6eb5c20, public_6eb5c20);
extern "C" NAKED register_t __cdecl internal_6eb5c20()
{
    __asm
    {
        push esi
        push 0xC
        call public_6ed0c5c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6eb5c66
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_6ed1794
        mov dword ptr ds : [esi], offset public_6ed17a8
        call dword ptr ds : [public_6ed1008]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
/*FIXUP push offset public_6ed1794 @0x6eb5c52*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed1794
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        mov al, 1
        pop esi
        ret 
        public_6eb5c66 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6eb5c20)
    }
}

#undef public_6eb5c66
