#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac2e80);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3060);

PROC_DECLARE(0x6ac3060, internal_6ac3060, public_6ac3060);
extern "C" NAKED register_t __cdecl internal_6ac3060()
{
    __asm
    {
        push esi
        mov esi, ecx
/*FIXUP push offset public_6ae0960 @0x6ac3063*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ae0960
        call dword ptr ds : [public_6ada114]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push eax
        push ecx
        push edx
        mov ecx, esi
        call public_6ac2e80
/*FIXUP push offset public_6ae0960 @0x6ac3084*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ae0960
        mov esi, eax
        call dword ptr ds : [public_6ada104]
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6ac3060)
    }
}
