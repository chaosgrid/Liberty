#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c4660);
CLANG_FORWARD_PROC_SYMBOL(public_65c5640);
CLANG_FORWARD_PROC_SYMBOL(public_65c6aac);

PROC_DECLARE(0x65c4640, internal_65c4640, public_65c4640);
extern "C" NAKED register_t __cdecl internal_65c4640()
{
    __asm
    {
        mov ecx, offset public_65ca258
        call public_65c5640
/*FIXUP push offset _public_65c4660 @0x65c464a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65c4660
        call public_65c6aac
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65c4640)
    }
}
