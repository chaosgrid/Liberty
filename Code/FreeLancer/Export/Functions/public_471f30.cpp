#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_471f30);
CLANG_FORWARD_PROC_SYMBOL(public_59d9c0);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

#define public_471f9e _public_471f9e

PROC_DECLARE(0x471f30, internal_471f30, public_471f30);
extern "C" NAKED register_t __cdecl internal_471f30()
{
    __asm
    {
        sub esp, 0xC
        push esi
/*FIXUP push offset public_5d033c @0x471f34*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d033c
        call public_59d9c0
        add esp, 4
        test eax, eax
        jne public_471f9e
        push eax
        push eax
/*FIXUP push offset public_5d033c @0x471f47*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d033c
/*FIXUP push offset public_5d033c @0x471f4c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d033c
        call public_59db20
        mov esi, eax
        add esp, 0x10
        test esi, esi
        je public_471f9e
        mov eax, dword ptr ds : [esi]
        push 0
        lea ecx, ss:[esp+8]
        push ecx
        push 0x42
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [eax+0xA8]
        mov dl, byte ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov byte ptr ds : [esi+0x338], dl
        call dword ptr ds : [eax+0x80]
        public_471f9e : nop
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x471f30)
    }
}

#undef public_471f9e
