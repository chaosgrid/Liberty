#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_51ece0);
CLANG_FORWARD_PROC_SYMBOL(public_51ed00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7fba);

PROC_DECLARE(0x51ecb0, internal_51ecb0, public_51ecb0);
extern "C" NAKED register_t __cdecl internal_51ecb0()
{
    __asm
    {
/*FIXUP push offset _public_4de730 @0x51ecb0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4de730
/*FIXUP push offset _public_51ed00 @0x51ecb5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_51ed00
        push 5
        push 0x10
/*FIXUP push offset public_6752f0 @0x51ecbe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6752f0
        call public_5b7fba
/*FIXUP push offset _public_51ece0 @0x51ecc8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_51ece0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x51ecb0)
    }
}
