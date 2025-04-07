#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac2910);
CLANG_FORWARD_PROC_SYMBOL(public_6ac2970);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4f40);
CLANG_FORWARD_PROC_SYMBOL(public_6acf3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6acf3db);

#define public_6ac2964 _public_6ac2964

PROC_DECLARE(0x6ac2910, internal_6ac2910, public_6ac2910);
extern "C" NAKED register_t __cdecl internal_6ac2910()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ac4f40
        push 0x439C
        call public_6acf3db
        add esp, 4
        mov dword ptr ds : [esi], eax
        test eax, eax
        je public_6ac2964
/*FIXUP push offset public_6ada7ec @0x6ac292b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada7ec
/*FIXUP push offset public_6ada7d8 @0x6ac2930*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada7d8
/*FIXUP push offset public_6ada7c4 @0x6ac2935*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada7c4
/*FIXUP push offset public_6ada7b0 @0x6ac293a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada7b0
/*FIXUP push offset public_6ada79c @0x6ac293f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada79c
/*FIXUP push offset public_6ada788 @0x6ac2944*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada788
        push eax
        call public_6ac2970
        test eax, eax
        je public_6ac2964
        mov eax, dword ptr ds : [esi]
        push eax
        call public_6acf3d0
        add esp, 4
        mov dword ptr ds : [esi], 0
        public_6ac2964 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ac2910)
    }
}

#undef public_6ac2964
