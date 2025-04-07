#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ace9f8);

PROC_DECLARE(0x6ace9f8, internal_6ace9f8, public_6ace9f8);
extern "C" NAKED register_t __cdecl internal_6ace9f8()
{
    __asm
    {
        push ebp
        mov ebp, esp
        lea eax, ss:[ebp+0xC]
        push eax
        push dword ptr ss : [ebp+0xC]
        push 0
        push dword ptr ss : [ebp+8]
        push 0
        push 0
        push 0
/*FIXUP push offset public_6ada8f8 @0x6acea0d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada8f8
        push 0x80000002
        call dword ptr ds : [public_6ada000]
        xor ecx, ecx
        test eax, eax
        sete cl
        mov eax, ecx
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6ace9f8)
    }
}
