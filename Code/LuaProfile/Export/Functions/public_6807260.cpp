#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6807260);
CLANG_FORWARD_PROC_SYMBOL(public_680a850);
CLANG_FORWARD_PROC_SYMBOL(public_680a870);

PROC_DECLARE(0x6807260, internal_6807260, public_6807260);
extern "C" NAKED register_t __cdecl internal_6807260()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        sub esp, 0x74
        lea eax, ss:[esp]
        push eax
        push ecx
        call public_680a870
        lea edx, ss:[esp+8]
        push edx
        lea eax, ss:[esp+0x1C]
/*FIXUP push offset public_680db94 @0x680727b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680db94
        push eax
        call dword ptr ds : [public_680c060]
        mov edx, dword ptr ss : [esp+0x8C]
        lea ecx, ss:[esp+0x24]
        push ecx
        push edx
        call public_680a850
        UNREACHABLE_TRAP(0x6807260)
    }
}
