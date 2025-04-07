#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6809090);

PROC_DECLARE(0x6809090, internal_6809090, public_6809090);
extern "C" NAKED register_t __cdecl internal_6809090()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x10]
        push ecx
/*FIXUP push offset public_680ddf0 @0x6809098*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680ddf0
        call public_6805fb0
        UNREACHABLE_TRAP(0x6809090)
    }
}
