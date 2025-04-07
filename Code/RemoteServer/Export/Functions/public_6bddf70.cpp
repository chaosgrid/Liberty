#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bddf70, internal_6bddf70, public_6bddf70);
extern "C" NAKED register_t __cdecl internal_6bddf70()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [public_6c0b154]
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x58]
/*FIXUP push offset public_6c0bbf4 @0x6bddf82*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0bbf4
        push eax
/*FIXUP push offset public_6c0bbe0 @0x6bddf88*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0bbe0
        push ebx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6c0b170]
        push eax
        call esi
        mov ecx, dword ptr ds : [edi+0x5C]
        add esp, 8
/*FIXUP push offset public_6c0bbf4 @0x6bddfa4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0bbf4
        push ecx
/*FIXUP push offset public_6c0bbcc @0x6bddfaa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6c0bbcc
        push ebx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6c0b170]
        push eax
        call esi
        add esp, 8
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6bddf70)
    }
}
