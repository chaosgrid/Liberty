#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7b3d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7df4);

PROC_DECLARE(0x5b746a, internal_5b746a, public_5b746a);
extern "C" NAKED register_t __cdecl internal_5b746a()
{
    __asm
    {
/*FIXUP push offset _public_5b7df4 @0x5b746a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b7df4
        push dword ptr ds : [public_67ee34]
/*FIXUP push offset public_616414 @0x5b7475*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_616414
/*FIXUP push offset public_5e7270 @0x5b747a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7270
/*FIXUP push offset public_5e7248 @0x5b747f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7248
        call public_5b7b3d
        jmp dword ptr ds : [public_616414]
        UNREACHABLE_TRAP(0x5b746a)
    }
}
