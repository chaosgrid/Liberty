#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6295e00);

PROC_DECLARE(0x6296600, internal_6296600, public_6296600);
extern "C" NAKED register_t __cdecl internal_6296600()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        push eax
/*FIXUP push offset public_639cec4 @0x6296609*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639cec4
        push ecx
        call public_6295e00
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6296600)
    }
}
