#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631bf30);
CLANG_FORWARD_PROC_SYMBOL(public_631bf50);
CLANG_FORWARD_PROC_SYMBOL(public_631c020);
CLANG_FORWARD_PROC_SYMBOL(public_6391ef0);

PROC_DECLARE(0x631bf30, internal_631bf30, public_631bf30);
extern "C" NAKED register_t __cdecl internal_631bf30()
{
    __asm
    {
        push esi
/*FIXUP push offset _public_631bf50 @0x631bf31*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_631bf50
/*FIXUP push offset _public_631c020 @0x631bf36*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_631c020
        push 7
        mov esi, ecx
        push 0x14
        push esi
        call public_6391ef0
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x631bf30)
    }
}
