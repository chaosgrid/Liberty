#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6807210);
CLANG_FORWARD_PROC_SYMBOL(public_680a850);

PROC_DECLARE(0x6807210, internal_6807210, public_6807210);
extern "C" NAKED register_t __cdecl internal_6807210()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
/*FIXUP push offset public_680db80 @0x6807214*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680db80
        push eax
        call public_680a850
        UNREACHABLE_TRAP(0x6807210)
    }
}
