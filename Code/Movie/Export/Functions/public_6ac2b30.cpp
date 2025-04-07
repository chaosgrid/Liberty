#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac2b30);
CLANG_FORWARD_PROC_SYMBOL(public_6acf3d0);

#define public_6ac2b4e _public_6ac2b4e

PROC_DECLARE(0x6ac2b30, internal_6ac2b30, public_6ac2b30);
extern "C" NAKED register_t __cdecl internal_6ac2b30()
{
    __asm
    {
        push esi
        mov esi, ecx
/*FIXUP push offset public_6ae0960 @0x6ac2b33*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ae0960
        call dword ptr ds : [public_6ada114]
        mov eax, dword ptr ds : [esi]
        pop esi
        test eax, eax
        je public_6ac2b4e
        push eax
        call public_6acf3d0
        add esp, 4
/*FIXUP public_6ac2b4e : nop
        push offset public_6ae0960 @0x6ac2b4e*/
  FIXUP public_6ac2b4e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ae0960
        call dword ptr ds : [public_6ada104]
        ret 
        UNREACHABLE_TRAP(0x6ac2b30)
    }
}

#undef public_6ac2b4e
