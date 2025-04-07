#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_567020);
CLANG_FORWARD_PROC_SYMBOL(public_56b020);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x567000, internal_567000, public_567000);
extern "C" NAKED register_t __cdecl internal_567000()
{
    __asm
    {
        mov ecx, offset public_67b180
        call public_567020
/*FIXUP push offset _public_56b020 @0x56700a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_56b020
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x567000)
    }
}
