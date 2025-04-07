#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ff140);

PROC_DECLARE(0x62ff140, internal_62ff140, public_62ff140);
extern "C" NAKED register_t __cdecl internal_62ff140()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push 0xA
/*FIXUP push offset public_63fcb48 @0x62ff144*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63fcb48
        push eax
        call dword ptr ds : [public_639920c]
        add esp, 0xC
        mov eax, offset public_63fcb48
        ret 
        UNREACHABLE_TRAP(0x62ff140)
    }
}
