#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801fb0);
CLANG_FORWARD_PROC_SYMBOL(public_68022b0);
CLANG_FORWARD_PROC_SYMBOL(public_6805aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6805f70);
CLANG_FORWARD_PROC_SYMBOL(public_680a790);

PROC_DECLARE(0x680a790, internal_680a790, public_680a790);
extern "C" NAKED register_t __cdecl internal_680a790()
{
    __asm
    {
/*FIXUP push offset public_680e358 @0x680a790*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e358
        call public_6805aa0
/*FIXUP push offset public_680da14 @0x680a79a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680da14
        call public_6805aa0
        push 0x22
/*FIXUP push offset public_680dfc0 @0x680a7a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680dfc0
        call public_6805f70
/*FIXUP push offset public_680e350 @0x680a7b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e350
        call public_68022b0
/*FIXUP push offset public_680e344 @0x680a7ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e344
        call public_6801fb0
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x680a790)
    }
}
