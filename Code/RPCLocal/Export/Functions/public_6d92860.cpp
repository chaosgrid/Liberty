#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d92860, internal_6d92860, public_6d92860);
extern "C" NAKED register_t __cdecl internal_6d92860()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [public_6db3194]
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x58]
/*FIXUP push offset public_6db3d88 @0x6d92872*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3d88
        push eax
/*FIXUP push offset public_6db3d74 @0x6d92878*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3d74
        push ebx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6db319c]
        push eax
        call esi
        mov ecx, dword ptr ds : [edi+0x5C]
        add esp, 8
/*FIXUP push offset public_6db3d88 @0x6d92894*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3d88
        push ecx
/*FIXUP push offset public_6db3d60 @0x6d9289a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db3d60
        push ebx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6db319c]
        push eax
        call esi
        add esp, 8
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d92860)
    }
}
