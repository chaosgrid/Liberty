#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac28c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac28e0);

PROC_DECLARE(0x6ac28e0, internal_6ac28e0, public_6ac28e0);
extern "C" NAKED register_t __cdecl internal_6ac28e0()
{
    __asm
    {
        push esi
        mov esi, ecx
/*FIXUP push offset public_6ae0960 @0x6ac28e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ae0960
        call dword ptr ds : [public_6ada114]
        mov ecx, esi
        call public_6ac28c0
/*FIXUP push offset public_6ae0960 @0x6ac28f5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ae0960
        mov esi, eax
        call dword ptr ds : [public_6ada104]
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ac28e0)
    }
}
