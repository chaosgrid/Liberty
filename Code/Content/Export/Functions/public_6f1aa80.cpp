#include "Content-PCH.h"

PROC_DECLARE(0x6f1aa80, internal_6f1aa80, public_6f1aa80);
extern "C" NAKED register_t __cdecl internal_6f1aa80()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6fb3380]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x38]
        push eax
/*FIXUP push offset public_6fb872c @0x6f1aa93*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb872c
        push edi
        call ebx
        mov ecx, dword ptr ds : [esi+0xC]
        push ecx
/*FIXUP push offset public_6fb8dc0 @0x6f1aa9f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8dc0
        push edi
        call ebx
        add esp, 0x18
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f1aa80)
    }
}
