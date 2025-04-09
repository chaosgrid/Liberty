#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4729f0);
CLANG_FORWARD_PROC_SYMBOL(public_4749c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4729d0, internal_4729d0, public_4729d0);
extern "C" NAKED register_t __cdecl internal_4729d0()
{
    __asm
    {
/*FIXUP push offset public_5d0794 @0x4729d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0794
        mov ecx, offset public_66db44
        call public_4749c0
/*FIXUP push offset _public_4729f0 @0x4729df*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4729f0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4729d0)
    }
}
