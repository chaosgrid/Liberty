#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6803890);
CLANG_FORWARD_PROC_SYMBOL(public_68038c0);
CLANG_FORWARD_PROC_SYMBOL(public_6803900);
CLANG_FORWARD_PROC_SYMBOL(public_6803950);
CLANG_FORWARD_PROC_SYMBOL(public_6805170);

PROC_DECLARE(0x6803890, internal_6803890, public_6803890);
extern "C" NAKED register_t __cdecl internal_6803890()
{
    __asm
    {
/*FIXUP push offset _public_6803950 @0x6803890*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6803950
        call public_6802dc0
        call public_6803900
        call public_68038c0
/*FIXUP push offset _public_6803950 @0x68038a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6803950
        call public_6805170
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6803890)
    }
}
