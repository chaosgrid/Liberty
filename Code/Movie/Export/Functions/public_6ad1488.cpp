#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad1488);
CLANG_FORWARD_PROC_SYMBOL(public_6ad158c);

#define public_6ad1493 _public_6ad1493

PROC_DECLARE(0x6ad1488, internal_6ad1488, public_6ad1488);
extern "C" NAKED register_t __cdecl internal_6ad1488()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6add508]
        test eax, eax
        je public_6ad1493
        call eax
/*FIXUP public_6ad1493 : nop
        push offset public_6add028 @0x6ad1493*/
  FIXUP public_6ad1493 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6add028
/*FIXUP push offset public_6add014 @0x6ad1498*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6add014
        call public_6ad158c
/*FIXUP push offset public_6add010 @0x6ad14a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6add010
/*FIXUP push offset public_6add000 @0x6ad14a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6add000
        call public_6ad158c
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ad1488)
    }
}

#undef public_6ad1493
