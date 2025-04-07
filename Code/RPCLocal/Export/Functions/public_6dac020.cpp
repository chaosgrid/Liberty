#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac020, internal_6dac020, public_6dac020);
extern "C" NAKED register_t __cdecl internal_6dac020()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2C]
        mov edx, dword ptr ds : [ecx+0x28]
        push esi
        mov esi, dword ptr ds : [public_6db3194]
/*FIXUP push offset public_6db3d88 @0x6dac02d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3d88
        push eax
        mov eax, dword ptr ds : [ecx+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
/*FIXUP push offset public_6db63d0 @0x6dac03b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db63d0
        push eax
/*FIXUP push offset public_6db63bc @0x6dac041*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db63bc
        push ecx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6db319c]
        push eax
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6db3184]
        push eax
        call esi
        add esp, 8
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6dac020)
    }
}
