#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40aed0);
CLANG_FORWARD_PROC_SYMBOL(public_40b270);
CLANG_FORWARD_PROC_SYMBOL(public_419410);

PROC_DECLARE(0x40aeb0, internal_40aeb0, public_40aeb0);
extern "C" NAKED register_t __cdecl internal_40aeb0()
{
    __asm
    {
        mov ecx, offset public_426bc8
        call public_40b270
/*FIXUP push offset _public_40aed0 @0x40aeba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_40aed0
        call public_419410
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x40aeb0)
    }
}
