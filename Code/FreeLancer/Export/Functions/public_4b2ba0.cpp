#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b2bc0);
CLANG_FORWARD_PROC_SYMBOL(public_4b4830);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4b2ba0, internal_4b2ba0, public_4b2ba0);
extern "C" NAKED register_t __cdecl internal_4b2ba0()
{
    __asm
    {
/*FIXUP push offset public_5cb6cc @0x4b2ba0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb6cc
        mov ecx, offset public_672210
        call public_4b4830
/*FIXUP push offset _public_4b2bc0 @0x4b2baf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4b2bc0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4b2ba0)
    }
}
