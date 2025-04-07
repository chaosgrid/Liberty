#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7b3d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7d08);

PROC_DECLARE(0x5b7523, internal_5b7523, public_5b7523);
extern "C" NAKED register_t __cdecl internal_5b7523()
{
    __asm
    {
/*FIXUP push offset _public_5b7d08 @0x5b7523*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b7d08
        push dword ptr ds : [public_67ee20]
/*FIXUP push offset public_616428 @0x5b752e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_616428
/*FIXUP push offset public_5e72dc @0x5b7533*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e72dc
/*FIXUP push offset public_5e7284 @0x5b7538*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e7284
        call public_5b7b3d
        jmp dword ptr ds : [public_616428]
        UNREACHABLE_TRAP(0x5b7523)
    }
}
