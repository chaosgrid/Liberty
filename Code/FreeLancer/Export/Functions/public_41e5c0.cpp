#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dde0);
CLANG_FORWARD_PROC_SYMBOL(public_41df30);
CLANG_FORWARD_PROC_SYMBOL(public_41e5c0);
CLANG_FORWARD_PROC_SYMBOL(public_425b30);

PROC_DECLARE(0x41e5c0, internal_41e5c0, public_41e5c0);
extern "C" NAKED register_t __cdecl internal_41e5c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6dd8]
        mov ecx, dword ptr ds : [eax]
        push ecx
/*FIXUP push offset public_5c9670 @0x41e5c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9670
        mov ecx, offset public_616728
        call public_425b30
        mov edx, dword ptr ds : [public_5c6dd8]
        mov eax, dword ptr ds : [edx]
        push eax
/*FIXUP push offset public_5c9670 @0x41e5e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9670
        call public_41df30
        push 0
/*FIXUP push offset public_5c95f4 @0x41e5ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c95f4
        mov byte ptr ds : [public_616855], 1
        call public_41dde0
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x41e5c0)
    }
}
