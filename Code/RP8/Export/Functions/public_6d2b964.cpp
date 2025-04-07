#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2b964);
CLANG_FORWARD_PROC_SYMBOL(public_6d3095a);

PROC_DECLARE(0x6d2b964, internal_6d2b964, public_6d2b964);
extern "C" NAKED register_t __cdecl internal_6d2b964()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov byte ptr ds : [public_6d72848], 0
        push 0x80
/*FIXUP push offset public_6d72848 @0x6d2b973*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d72848
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6d3095a
        mov eax, offset public_6d72848
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2b964)
    }
}
