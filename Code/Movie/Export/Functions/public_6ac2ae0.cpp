#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac2910);
CLANG_FORWARD_PROC_SYMBOL(public_6ac2ae0);

#define public_6ac2b01 _public_6ac2b01

PROC_DECLARE(0x6ac2ae0, internal_6ac2ae0, public_6ac2ae0);
extern "C" NAKED register_t __cdecl internal_6ac2ae0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ae0978]
        push esi
        test eax, eax
        mov esi, ecx
        jne public_6ac2b01
/*FIXUP push offset public_6ae0960 @0x6ac2aec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ae0960
        call dword ptr ds : [public_6ada020]
        mov dword ptr ds : [public_6ae0978], 1
/*FIXUP public_6ac2b01 : nop
        push offset public_6ae0960 @0x6ac2b01*/
  FIXUP public_6ac2b01 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ae0960
        call dword ptr ds : [public_6ada114]
        mov ecx, esi
        call public_6ac2910
/*FIXUP push offset public_6ae0960 @0x6ac2b13*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ae0960
        call dword ptr ds : [public_6ada104]
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ac2ae0)
    }
}

#undef public_6ac2b01
