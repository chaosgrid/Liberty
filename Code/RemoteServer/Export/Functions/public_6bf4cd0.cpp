#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf4cd0, internal_6bf4cd0, public_6bf4cd0);
extern "C" NAKED register_t __cdecl internal_6bf4cd0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2C]
        mov edx, dword ptr ds : [ecx+0x28]
        push esi
        mov esi, dword ptr ds : [public_6c0b154]
/*FIXUP push offset public_6c0bbf4 @0x6bf4cdd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0bbf4
        push eax
        mov eax, dword ptr ds : [ecx+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
/*FIXUP push offset public_6c0e09c @0x6bf4ceb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0e09c
        push eax
/*FIXUP push offset public_6c0e088 @0x6bf4cf1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0e088
        push ecx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6c0b170]
        push eax
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6c0b198]
        push eax
        call esi
        add esp, 8
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bf4cd0)
    }
}
