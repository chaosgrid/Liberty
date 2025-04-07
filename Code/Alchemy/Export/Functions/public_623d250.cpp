#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623d250);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_623d296 _public_623d296

PROC_DECLARE(0x623d250, internal_623d250, public_623d250);
extern "C" NAKED register_t __cdecl internal_623d250()
{
    __asm
    {
        push esi
        push 0xC
        call public_624612c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_623d296
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_6256d40
        mov dword ptr ds : [esi], offset public_624f4d0
        call dword ptr ds : [public_624b008]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
/*FIXUP push offset public_6256d40 @0x623d282*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256d40
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        mov al, 1
        pop esi
        ret 
        public_623d296 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x623d250)
    }
}

#undef public_623d296
