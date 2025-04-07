#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3f7c0, internal_6b3f7c0, public_6b3f7c0);
extern "C" NAKED register_t __cdecl internal_6b3f7c0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [public_6b6b134]
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x58]
/*FIXUP push offset public_6b6bf74 @0x6b3f7d2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6bf74
        push eax
/*FIXUP push offset public_6b6c198 @0x6b3f7d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6c198
        push ebx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6b6b12c]
        push eax
        call esi
        mov ecx, dword ptr ds : [edi+0x5C]
        add esp, 8
/*FIXUP push offset public_6b6bf74 @0x6b3f7f4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6bf74
        push ecx
/*FIXUP push offset public_6b6c184 @0x6b3f7fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b6c184
        push ebx
        call esi
        add esp, 8
        mov ecx, eax
        call dword ptr ds : [public_6b6b12c]
        push eax
        call esi
        add esp, 8
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6b3f7c0)
    }
}
