#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62949c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);

PROC_DECLARE(0x62949c0, internal_62949c0, public_62949c0);
extern "C" NAKED register_t __cdecl internal_62949c0()
{
    __asm
    {
/*FIXUP push offset _public_62881d0 @0x62949c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62881d0
        push 0x100
        push 8
        push ecx
        call public_6391dfc
        ret 
        UNREACHABLE_TRAP(0x62949c0)
    }
}
