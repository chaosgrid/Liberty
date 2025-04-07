#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801c50);
CLANG_FORWARD_PROC_SYMBOL(public_6801e80);
CLANG_FORWARD_PROC_SYMBOL(public_6801f70);
CLANG_FORWARD_PROC_SYMBOL(public_6801fb0);

PROC_DECLARE(0x6801e80, internal_6801e80, public_6801e80);
extern "C" NAKED register_t __cdecl internal_6801e80()
{
    __asm
    {
        push esi
        push 1
        call public_6801c50
/*FIXUP push offset public_680d384 @0x6801e88*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d384
        call public_6801f70
/*FIXUP push offset public_680d384 @0x6801e92*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d384
        mov esi, eax
        call public_6801fb0
        add esp, 0xC
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6801e80)
    }
}
